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



struct ListNode* reverseKGroup ( struct ListNode* head, int k ) 
{
    struct ListNode* headnode  = (struct ListNode*)malloc(sizeof(struct
ListNode));
    headnode->next = head;

    //for report , leave tail    
    struct ListNode* tempstart = headnode; 
    struct ListNode* tempend = headnode->next;

    struct ListNode* flagnode = head; 

    int flag = 1;
    int count = k;
    while (flagnode) {

        flagnode = flagnode->next;
        if (!--count) { 
            struct ListNode* per = NULL;
            struct ListNode* cur = tempstart->next;
            struct ListNode* next = tempstart->next->next;
            for (int i = 0; i < k; i++) {
                cur->next = per;
                per = cur;
                cur = next;
                next = next->next;
            }
            count = k;
            tempstart->next = per;
            tempend->next = cur;

            tempstart = tempend;
            tempend = cur;
        } 
    }
    return headnode->next;
}



int main() 
{
    int temp[5] = { 1,2,3,4,5 };
    struct ListNode* head = initlist(temp,5);
    struct ListNode* result = reverseKGroup(head,2);

    printflist(result); 

    return 0;
}
