#include <stdio.h>
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
        int p=0;
        int q=0;
        float sum=0;
        if((nums1Size+nums2Size)%2==0){
            for(int i=0; i<((nums1Size+nums2Size)/2-1);i++){
                nums1[p]<nums2[q]?p++:q++;
            }
            sum = ((float)nums1[p]+(float)nums2[q])/2;
        }
        else{
            for(int i=0; i<((nums1Size+nums2Size+1)/2-1);i++){
                nums1[p]<nums2[q]?p++:q++;
            }
            sum = nums1[p]<nums2[q]?nums1[p]:nums2[q];
        }
        return sum;
}


int main (){
    int a[2]={1,2};
    int b[2]={3,4};
    int c=2;
    float d=findMedianSortedArrays(a,c,b,c);

    printf("%f",d);
    printf("%d,%d",a[0],a[1]);
    printf("%d,%d",b[0],b[1]);
    return 0; 
}
