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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int c = 0;
        ListNode *temp1 = l1;
        ListNode *temp2 = l2;
        ListNode *tempHead = new ListNode;
        ListNode *temp = tempHead;
        while(c || temp1 || temp2)
        {
            c += temp1 ? temp1->val : 0;
            c += temp2 ? temp2->val : 0;
            temp->next = new ListNode(c % 10);
            temp = temp->next;
            c /= 10;
            if(temp1 != NULL)
                temp1 = temp1->next;
            if(temp2 != NULL)
                temp2 = temp2->next;
        }
        return tempHead->next;
    }
};