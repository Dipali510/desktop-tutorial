/*greatest of three numbers*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>c)
    {
        if(a>b)
        {
            printf("%d is greatest",a);
        }
        else
        {
            printf("%d is greatest",b);
        }
    }
    else
    {
        if(c>b)
        {
            printf("%d is greatest",c);
        }
        else
        {
            printf("%d is greatest",b);
        }
    }
    return 0;
}