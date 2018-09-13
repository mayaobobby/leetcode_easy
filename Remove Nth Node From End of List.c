/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* ReverseList(struct ListNode* head){
    if(head == NULL||head->next==NULL){
        return head;
    }
    else{
        struct ListNode* newhead = ReverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return newhead;
    }
}

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* newhead=ReverseList(head);
    struct ListNode* removenode = newhead->next;
    struct ListNode* previousnode = newhead;
    struct ListNode* tmpnode = newhead;
    struct ListNode* updatenode = newhead;
    if(n!=1){
        for(int i=1;i<n;i++){
            if(tmpnode->next !=NULL){
                previousnode = tmpnode; 
                tmpnode = tmpnode->next;
                removenode = tmpnode;
            }
            else{
                previousnode->next = removenode->next; 
            }
        }
        previousnode->next = removenode->next;
        updatenode = ReverseList(newhead);
    }
    else{
        updatenode = ReverseList(newhead->next);
    }
    
    return updatenode;
}
