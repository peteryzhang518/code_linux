#include<stdio.h>
#include<stdlib.h>



struct ListNode{
    int val;
    struct ListNode *next;
};



struct ListNode* initlist(int* initaray, int lenght)
{
    struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
    temp->val = *(initaray);
    temp->next = NULL;
    struct ListNode* head = temp;
    for(int i=1 ; i< lenght; i++){
        temp->next=(struct ListNode*)malloc(sizeof(struct ListNode));
        temp = temp->next;
        temp->val = *(initaray+i);
        temp->next=NULL;
    }     
    return head;
}



void printflist(struct ListNode* head)
{
    struct ListNode* temp = head;
    while(temp->next!=NULL){
        printf("%d\n",temp->val);
        temp=temp->next;     
    }     
    printf("%d\n",temp->val);
    printf("finish\n");
}



bool hasCycle(struct ListNode* head) 
{
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            break;
    }
    
    fast = head;
    while (fast != slow) {
        slow = slow->next;
        fast = fast->next;
    }
    
    return slow;
}



int main () 
{

}
