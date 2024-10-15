#include<stdio.h>
int main(){
    int re;
    printf("Enter the radius of the circle is ");
    scanf("%d",&re);
    float area;
    area=3.14159*re*re;
    printf("The area of circle is %.3f :",area);
    return 0;
}