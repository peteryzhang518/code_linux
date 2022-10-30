#include <stdio.h>
#include <stdlib.h>
struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode* creatnodelist(int* begin,int i){

    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->val=0;
    head->next=NULL;
    struct ListNode* temp = head;

    for(int j=0; j<i; j++){
    temp-> next = (struct ListNode*)malloc(sizeof(struct ListNode));
    temp = temp -> next;
    temp->val=begin[j];
    temp-> next = NULL; 
    };
    return head->next;
};

struct ListNode* addnode(struct ListNode* head){
};

void printalllist (struct ListNode* printlist){
    while(printlist){
    printf("%d",printlist->val);
    printlist=printlist->next;
    };
    printf("finish\n");
};



struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
        struct ListNode* l3=(struct ListNode*)malloc(sizeof(struct ListNode));
        struct ListNode* h=l3;
        int temp=0;
        while ( l1 || l2 || temp==1)
        {
            int x = (l1 != NULL) ? l1->val : 0;
            int y = (l2 != NULL) ? l2->val : 0;
            h->val = (x+y+temp)%10;
            temp = (x+y+temp)/10;
            if(l1!= NULL) l1=l1->next;
            if(l2!= NULL) l2=l2->next;
            if(!( l2 == NULL && l1 == NULL && temp==0))
            {
                h->next=(struct ListNode*)malloc(sizeof(struct ListNode));
                h=h->next;
            };
        };
        
        return l3;
};


int main (void* ){
    int a[5]={9,9,9,9,9};
    int b[3]={9,9,9,9,9};
    struct ListNode * alist = creatnodelist(a,5);
    printalllist(alist);
    struct ListNode * blist = creatnodelist(b,5);
    printalllist(blist);

    struct ListNode * clist = addTwoNumbers(alist,blist);
    printalllist(clist);
    
    return 0;
}
