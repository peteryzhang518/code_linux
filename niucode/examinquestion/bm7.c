#include <stdio.h>
#include <stdlib.h>


struct ListNode
{
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



struct ListNode* EntryNodeOfLoop(struct ListNode* pHead ) 
{
    // write code here
    struct ListNode* fast = pHead;
    struct ListNode* slow = pHead;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
            break;
    }
    if (!fast || !fast->next) {
        return NULL;
    } 

    fast = pHead;

    while (fast != slow) {
        fast = fast->next;
        slow = slow->next;
    }
    
    return slow;
}


int main ()
{
    struct ListNode*  a = (struct ListNode*)malloc(sizeof(struct ListNode));
    a->val = 1;
    a->next = NULL;    
    EntryNodeOfLoop(a);

    return 0;
}
