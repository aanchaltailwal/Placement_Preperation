#include<stdio.h>
int main(){
    int var = 34;
    printf("%d", var);
    return 0;
}
//cannot use var here in fun cauze declared locally in above function
//int fun(){
 //   printf("%d", var);
//}