#include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char name[30];
    float salary;
};
int main()
{
    struct Employee e[5];
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter the id of the employee");
        scanf("%d",&e[i].id);
        printf("Enter the Name of the employee\n");
        fflush(stdin);
        fgets(e[i].name,30,stdin);
        e[i].name[strlen(e[i].name)-1]='\0';
        printf("Enter the salary of the employee\n");
        scanf("%f",&e[i].salary);
    }
    for(i=0;i<3;i++)
    {
        printf("id=%d   name=%s   salary=%f\n",e[i].id,e[i].name,e[i].salary);
    }
    return 0;
}