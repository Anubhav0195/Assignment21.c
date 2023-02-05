#include<stdio.h>
#include<string.h>
 struct Employee 
{
    int id;
    char name[30];
    int salary;
};
int main()
{
    struct Employee e;
    printf("Enter Employee id,Name & salay");
    scanf("%d",&e.id);
    fflush(stdin);
    fgets(e.name,30,stdin);
    e.name[strlen(e.name)-1]='\0';
    scanf("%d",&e.salary);
    printf("id=%d  name=%s  salary=%d",e.id,e.name,e.salary);
    return 0;
}