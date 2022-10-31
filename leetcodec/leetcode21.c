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

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode* result;
    struct ListNode* head1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    head1->next=list1;
    result = head1;
    struct ListNode* head2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    head2=list2;
    list2=list2->next;
    while(list1->next==NULL&&list2->next==NULL){
        if(head1->next->val<=head2->val || list2->next==NULL){
            head1=head1->next; 
            list1=list1->next;
        }else if (head1->next->val>head2->val || list1->next==NULL){
            head1->next=head2;
            head2->next=head1;
            head1=head1->next;
            head2=list2;
            list2=list2->next;    
        }    
    }
    return result->next; 
}

int main(){
        
 
    return 0;
}
