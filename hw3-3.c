#include<stdio.h>

int main()
{
    int i=0,n=0;
    scanf("%d %d",&i,&n);

    int a=(i/1000)+((i/100)%10)+((i/10)%10)+(i%10);
    int b=(n/1000)+((n/100)%10)+((n/10)%10)+(n%10);

    if(a>b)
    {
        printf("%d",n);
    }
    if(a<b)
    {
        printf("%d",i);
    }
    else if(a==b)
    {
        if(i>n)
        {
            printf("%d",n);
        }
        if(i<n)
        {
            printf("%d",i);
        }
    }
return 0;
}
