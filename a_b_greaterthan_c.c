#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a+b)>c){
        printf("Yes");
    }
    else if(c>(a+b))
    {
        printf("No");
    }
    else{
        printf("equal");
    }

}