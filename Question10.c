#include<stdio.h>
struct Marks
{
    int rollno;
    char name[30];
    float chem_marks,maths_marks,physics_marks;
};
int main()
{
    struct Marks m[5];
    int i;
    float percentage;
    for(i=0;i<=4;i++)
    {
        printf("Student %d\n",i+1);
        printf("Enter rollno :\n");
        scanf("%d",&m[i].rollno);
        printf("Enter the chemistry marks:\n");
        scanf("%f",&m[i].chem_marks);
        printf("Enter mathematics marks:\n");
        scanf("%f",&m[i].maths_marks);
        printf("Enter physics marks:\n");
        scanf("%f",&m[i].physics_marks);
        
    }
    for(i=0;i<=4;i++)
    {
        printf("Student %d\n",i+1);
        float percentage = (m[i].chem_marks +m[i].maths_marks +m[i].physics_marks)/3;
        printf("percentage %f\n",percentage);
    }
    return 0;
}