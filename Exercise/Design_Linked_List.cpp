class MyLinkedList {
public:
    struct ListNode
    {
        int val;
        ListNode* next;
        ListNode(int val):val(val), next(nullptr){}
    };
    
    MyLinkedList() 
    {
        v_head = new ListNode(0);
        _size = 0;
    }
    
    int get(int index) 
    {
        if(index > (_size - 1) || index < 0)
            return -1;
        ListNode* cur = v_head->next;
        while(index--)
            cur = cur->next;
        return cur->val;
    }
    
    void addAtHead(int val) 
    {
        ListNode* new_head = new ListNode(val);
        new_head->next = v_head->next;
        v_head->next = new_head;
        ++_size;
    }
    
    void addAtTail(int val) 
    {
        ListNode* new_tail = new ListNode(val);
        ListNode* cur = v_head;
        while(cur->next != nullptr)
        {
            cur = cur->next;
        }
        cur->next = new_tail;
        ++_size;
    }
    
    void addAtIndex(int index, int val) 
    {
        if(index > _size)
            return;
        if(index < 0)
            index = 0;
        ListNode* new_node = new ListNode(val);
        ListNode* cur = v_head;
        while(index-- > 0)
        {
            cur = cur->next;
        }
        new_node->next = cur->next;
        cur->next = new_node;
        ++_size;
    }
    
    void deleteAtIndex(int index) 
    {
        if(index >= _size || index < 0)
            return;
        ListNode* cur = v_head;
        while(index-- > 0)
        {
            cur = cur->next;
        }
        ListNode* tmp = cur->next;
        cur->next = cur->next->next;
        delete tmp;
        tmp = nullptr;
        --_size;
    }a

private:
    int _size;
    ListNode* v_head;

};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
