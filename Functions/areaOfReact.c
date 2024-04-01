#include<stdio.h>
int areOfReact(int length, int breadth){
    int area;
    area = length * breadth;
    return area;
}
int main(){
    int l = 10, b = 5;
    int area = areOfReact(l,b);
    printf("%d\n", area);
}