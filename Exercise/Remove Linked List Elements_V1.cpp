class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) 
    {
        //We use while because we maybe meet constant elements that are all the value we want to remove at head
        while(head != NULL && head->val == val) //delete head
        {
            ListNode* tmp = head;
            head = head->next; //change the head
            delete tmp; //clear buffer
        }


        ListNode* cur =  head;
        while(cur != NULL && cur->next != NULL) //keep moving until we meet the last element
        {
            if(cur->next->val == val) //if the next node is the target element
            {
                ListNode* tmp = cur->next;
                cur->next = cur->next->next; //change the destination of pointer
                delete tmp; ///clear buffer
            }
            else
            {
                cur = cur->next; //if we dont find the target keep moving
            }
        }


        return head;

    }
        
};
