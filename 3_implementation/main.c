#include<stdio.h>
#include<string.h>
struct students
{
    int rollno;
    char name[20];
    float marks;
} s[100];
int main()
{
    int i,n;
    printf("number of students: ");
    scanf("%d",&n);
    printf("number of students Record\n\n");
    
    for(i=0;i<n;i++)
    {
        printf("roll: ");
        scanf("%d",&s[i].rollno);
        printf(" s.name: ");
        scanf("%s",&s[i].name);
        printf("smarks: ");
        scanf("%f",&s[i].marks);
    }
    printf("\nStudents Record\n\n");
    
    for(i=0;i<n;i++)
    {
        printf("sroll: %d\n",s[i].rollno);
        
        printf("sname: %s\n",s[i].name);
        
        printf("smarks: %f\n",s[i].marks);
    }
    return 0;
}