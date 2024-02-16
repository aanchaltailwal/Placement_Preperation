#include<stdio.h>

int main(){
    int two = 2 , three = 3, six = 6;
    int result = (two + three) * six / three;
    printf("new: (%d + %d) * %d / %d\n ", two, three, six, three);
    printf("result: %d", result);

    return 0;
}