#include<stdio.h>
#include<stdlib.h>

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



struct ListNode* Merge(struct ListNode* pHead1, struct ListNode* pHead2 ) 
{
    // write code here
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* temp = head;

    int flag = 1;
    if (pHead1 == NULL && pHead2 == NULL) {
        return NULL;
    }
    while (flag) {
        if (pHead1 == NULL || (pHead2 != NULL && pHead1->val >= pHead2->val)) {
            temp->next = pHead2;
            pHead2 = pHead2->next;
            temp = temp->next;
            if (pHead1 == NULL)
                flag = 0;
        } else if ( pHead2 == NULL || pHead1->val < pHead2->val) {
            temp->next = pHead1;
            pHead1 = pHead1->next;
            temp = temp->next;
            if (pHead2 == NULL)
                flag = 0;
        }
    }
    return head->next;
}

int main ()
{
    int a[3] = {1,3,5};
    int b[3] = {2,4,6}; 
    struct ListNode* alist = initlist(a, 3);
    printflist(alist);
    struct ListNode* blist = initlist(b, 3);
    printflist(blist);

    struct ListNode* result = Merge(alist,NULL);

    printflist(result);
    
    return 0;
}
