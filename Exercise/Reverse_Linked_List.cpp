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
    ListNode* reverseList(ListNode* head) 
    {
        ListNode* cur = nullptr;
        ListNode* fast_cur = head;
        while(fast_cur)
        {
           auto tmp = fast_cur->next;
           fast_cur->next = cur;
           cur = fast_cur;
           fast_cur = tmp;
           
        }

        return cur;
    }

    
};
