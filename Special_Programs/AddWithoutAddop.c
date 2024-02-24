#include<stdio.h>
int main(){
    int x, y;
    printf("Enter two numbers you want to add: ");
    scanf("%d %d", &x, &y);

    while(y != 0){
        x++;
        y--;
    }
    printf("sum of two numbers is:%d\n", x);
    return 0;
}