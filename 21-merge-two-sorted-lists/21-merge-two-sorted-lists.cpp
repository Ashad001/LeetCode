/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *temp1 = list1;
        ListNode *temp2 = list2;
        ListNode *tempHead = new ListNode();
        ListNode *list = tempHead;
        while (temp1 != NULL && temp2 != NULL)
        {
            if (temp1->val < temp2->val)
            {
                list->next = temp1;
                temp1 = temp1->next;
            }
            else
            {
                list->next = temp2;
                temp2 = temp2->next;
            }
            list = list->next;
        }
        list->next = (temp1 == NULL) ? temp2 : temp1;
        return tempHead->next;
    }
};