#include<stdio.h>
#include<string.h>
/* Declaration of structure */
struct employee
{
 char name[30];
 int salary;
 int age;
};

int main()
{
 /* Declaration of array of structure */
 struct employee e[20], temp;
 int i,j,n;

 printf("Enter n:\n");
 scanf("%d",&n);
 for(i=0;i< n;i++)
 {
  printf("Enter name, salary and age of employee:\n");
  scanf("%s%d%d",e[i].name, &e[i].salary, &e[i].age);
 }
 for(i=0;i< n-1;i++)
 {
  for(j=i+1;j< n;j++)
  {
   if(strcmp(e[i].name ,e[j].name)>0)
   {
    temp = e[i];
    e[i] = e[j];
    e[j] = temp;
   }
  }
 }
 printf("Sorted records are:\n");
 for(i=0;i< n;i++)
 {
  printf("Name: %s\n", e[i].name);
  printf("Salary: %d\n", e[i].salary);
  printf("Age: %d\n\n", e[i].age);
 }
 
 return 0;
}