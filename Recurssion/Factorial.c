#include<stdio.h>
int Fact(int n){
    if(n == 1){
        return 1;
    }
    else{
        return n * Fact(n-1);
    }
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("The factorial of a number %d is %d ", n, Fact(n));
}