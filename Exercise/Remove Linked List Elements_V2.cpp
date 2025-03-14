
 // Definition for singly-linked list.
//  struct ListNode
//  {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  };
 
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) 
    {
        ListNode* vhead = new ListNode(0); //create a virtual head
        vhead->next = head;
        ListNode* cur = vhead;

        while(cur->next != NULL)
        {
            if(cur->next->val == val)
            {
               ListNode* tmp = cur->next;
               cur->next = cur->next->next;
               delete tmp;
            }
            else
            {
                cur = cur->next;
            }
        }
        head = vhead->next;
        delete vhead;
        return head;
    }
        
};
