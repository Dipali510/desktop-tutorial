/*concentation of solution c=m/v*/
#include<stdio.h>
int main()
{
    float m,v,c;
    printf("Enter mass and volume:");
    scanf("%f%f",&m,&v);
    c=m/v;
    printf("Concentration of solution is %f",c);
    return 0;
}