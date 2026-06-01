#include <stdio.h>
double cal_growth(double p, double r, int t)
{
    return p * (1 + r / 100) * t;
}
int main()
{
    double p, r;
    int t;
    scanf("%lf%lf%d", &p, &r, &t);
    double growth = cal_growth(p, r, t);
    printf("Growth of the bacteria is: %lf", cal_growth(p, r, t));
    return 0;
}