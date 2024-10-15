#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ara[n],i;

    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    int max=ara[0];
    for(i=0;i<n;i++)
    {
        if(ara[i]>max)
        {
            max=ara[i];
        }
    }
    printf("The Height value is %d\n",max);
    return 0;
}