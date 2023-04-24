#include <stdio.h>
#include <stdlib.h>


struct ListNode {
    int val;
    struct ListNode *next;
};



struct ListNode* initlist(int* initaray, int lenght){
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



void printflist(struct ListNode* head){
    struct ListNode* temp = head;
    while(temp->next!=NULL){
        printf("%d\n",temp->val);
        temp=temp->next;     
    }     
    printf("%d\n",temp->val);
    printf("finish\n");
}


struct ListNode* reverseBetween(struct ListNode* head, int m, int n ) 
{
    if ( m == 1 && n == 1){
        return head;
    }
    
    int flag = 1; 
    struct ListNode* mnode = head;
    struct ListNode* nnode = head;
    // write code here
    for (int i = 0; i<n; i++) {
        if ( i== m-2 ) {
            mnode = nnode;    
            flag = 0;
        }
        nnode = nnode->next;    
    }
    if ( flag ) {
        mnode->next = head; 
    }
    struct ListNode* tempa = mnode->next;
    struct ListNode* tempb = tempa->next;
    for (int j = 0; j<n-m+1; j++) {
        tempa->next=nnode; 
        nnode = tempa;
        tempa = tempb; 
        if ( tempb != NULL ) 
            tempb = tempb->next;
    }
    mnode->next = nnode;
    
    return head;
}


int main()
{
    int temp[2] = { 3,5 };
    struct ListNode* head = initlist(temp,2);
    head = reverseBetween(head,1,2);

    printflist(head); 

    return 0;
}
