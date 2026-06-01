#include<stdio.h>
struct Employee
{
    char name[50];
    int id;
    int salary;
};
int main()
{
    struct Employee s1;
    printf("Enter name,id and salary of the student:");
    scanf("%s%d%d",s1.name,&s1.id,&s1.salary);
    printf("Name: %s\nid: %d\nSalary: %d",s1.name,s1.id,s1.salary);
    return 0;
}