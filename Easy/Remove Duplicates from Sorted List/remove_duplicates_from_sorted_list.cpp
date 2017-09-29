/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return head;
        ListNode * pre = head;
        ListNode * cur = head->next;
        while(cur)
        {
            while(cur && pre->val == cur->val )
            {
                cur = cur->next;
                pre->next = cur;
            }
            if(cur)
            {
                pre = cur;
                cur = cur->next;
            }
        }
        return head;
    }
};