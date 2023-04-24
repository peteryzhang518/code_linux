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
        printf("pz%d\n",temp->val);
        temp=temp->next;     
    }     
    printf("%d\n",temp->val);
    printf("finish\n");
}



int main()
{
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->next = NULL;
    head = head->next;


    int count = 1;
    if(-1)
        printf("-1");
        

    if(!--count){
        printf("--");
    } else {
        printf("!");
    }

    if(!count++){
        printf("");
    } else {
        printf("!");
    }
    return 0;
}
