#include<stdio.h>
struct PatientRecord
{
    char name[50];
    char blood_group[5];
    double temperature;
}
int main()
{
    struct PatientRecord p1;
    printf("Enter name, blood group and temperature of the patient:");
    scanf("%s%s%lf",p1.name,p1.blood_group,&p1.temperature);
    if(p1.temperature>=98.6)
        {
    printf("Name: %s\nBlood Group: %s\nTemperature: %lf",p1.name,p1.blood_group,p1.temperature);
        }
    else
        printf("Patient is healthy");
    return 0;
}