#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[30];
    int rollnum;
};
 struct student input()
{
    struct student s;
    int i,n;
    for(i=0;i<=9;i++)
    {
        printf("Enter id,name and rollnum of the student\n");
        scanf("%d",&s.id);
        fflush(stdin);
        fgets(s.name,30,stdin);
        s.name[strlen(s.name)-1]='\0';
        scanf("%d",&s.rollnum);
        return s;

    }
}
void display(struct student s)
{
    printf("\n%d %s %d",s.id,s.name,s.rollnum);
}
int main()
{
    struct student s[20];
    int i,n;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        s[i]=input();
    }
    for(i=0;i<n;i++)
    {
        display(s[i]);
    }
    return 0;
}
