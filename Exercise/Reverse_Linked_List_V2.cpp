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
ListNode* reverse(ListNode* fast_cur, ListNode* slow_cur)
{
    if(fast_cur == nullptr)
        return slow_cur;
    auto tmp = fast_cur->next;
    fast_cur->next = slow_cur;
    return reverse(tmp, fast_cur);

}

class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
       return reverse(head, nullptr);
    }
    
};
