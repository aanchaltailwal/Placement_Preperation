#include<stdio.h>
int main(){
    int a = 5, b = 3;
    int incr;

    incr = (a < b) && (b++); //(a<b) is false therefore next cond will not be evaluated
   // incr = (a > b) && (b++);
    printf("%d\n", incr);
    printf("%d", b);
    return 0;
}