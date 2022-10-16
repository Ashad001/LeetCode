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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *front = head;
        ListNode *behind = head;
        while(front != NULL)
        {
            front = front->next;
            if(n-- < 0) 
            {
                behind = behind->next;
            }
        }
        if(n == 0)
        {
            head = head->next;
        }
        else
        {
            behind->next = behind->next->next;
        }
        return head;

    }
};