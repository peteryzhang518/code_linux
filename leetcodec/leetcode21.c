/*将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 
输入：l1 = [1,2,4], l2 = [1,3,4]
输出：[1,1,2,3,4,4]
示例 2：

输入：l1 = [], l2 = []
输出：[]
示例 3：

输入：l1 = [], l2 = [0]
输出：[0]

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/merge-two-sorted-lists
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

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



struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    if(list1==NULL){
        return list2;
    }
    if(list2==NULL){
        return list1;
    }
    // need 4 pointer with two list
    struct ListNode* result;
    struct ListNode* head1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    head1->next=list1;
    result = head1;

    struct ListNode* head2 = list2;
    list2=list2->next;

    while(head1->next!=NULL&&head2->next!=NULL){
        // l1>h2  only consider h2 and l1 ,h2 with h1 is not necesserly
        if(list1->val<=head2->val){
            // the first line step
            head1=head1->next; 
            list1=list1->next;
        }else{
            // the secound line step
            head1->next=head2;
            head2->next=list1;
            head1=head1->next;
            head2=list2;
            list2=list2->next;    
        }    
    }

    //whenever  there is two case. one is head1==NUll one is head2 ==NULL ,both is same with head1==NULL or head2 == NULL
    if(head1->next==NULL){
        head1->next==head2;
    }else{
        if(list1->val>head2->val){
            head1->next=head2;
            head2->next=list1;
        }else{
            list1->next=head2;
        }
    }

    return result->next; 
}

int main(){
    int initarrary1[3]={1,2,4};  
    int initarrary2[3]={1,3,4};  
    int a=3, b=3;
    struct ListNode* head1 = initlist( initarrary1,a);
    struct ListNode* head2 = initlist( initarrary2,b);
     
    struct ListNode* result = mergeTwoLists(head1,head2);

    printflist(result); 
 
    return 0;
}
