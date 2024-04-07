/* Question 2 

#include<stdio.h>
void f1(int a, int b){
    int c;
    c = a; a = b; b= c;
}
int main(){
    int a = 4; b = 5; c = 6;
    f1(a,b);
}                                   */

/*Question 3*/
#include<stdio.h>
int fun(){
    static int num = 16;
    return num--;
}
int main(){
    for(fun(); fun(); fun())
    printf("%d", fun());
    return 0;
}


