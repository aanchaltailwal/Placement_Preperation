#include<stdio.h>
int main(){
    int n;
    printf("Enter a no.\n");
    scanf("%d", &n);

    while(n!=0){
        if( n < 0)
             break;
        printf("Enter a no.\n");
        scanf("%d", &n);
    }
}