#include<stdio.h>
int main(){
    int a[]= {1, 2,3,4,5,6,7,8,90,9,1,2,3,4,5,67,8,9,0,1,2,3,4,5,6,7,88,89,0,1,2,3,4,5,6,7,8,9,0};
    printf("%d ", sizeof(a)/ sizeof(a[0]));
}