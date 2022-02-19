#include"student.h"

int main()
{
    R = NULL;
    int c;
    char name[100];
    char phone[100];
    int rolno;
    float percent;
    printf("1 insert student \n2 search for student details\n3  delete student details\n4  update student details\n5  display all student details");
    do
    {
        printf("\nEnter Choice: ");
        scanf("%d", &c);
        switch (c)
        {
            case 1:
                printf("Enter rolno: ");
                scanf("%d", &rolno);
                printf("Enter name: ");
                scanf("%s", name);
                printf("Enter phone no: ");
                scanf("%s", phone);
                printf("Enter percent: ");
                scanf("%f", &percent);
                inserting(rolno, name, phone, percent);
                break;
            case 2:
                printf("Enter rolno ");
                scanf("%d", &rolno);
                searching(rolno);
               break;
            case 3:
                printf("Enter rolno ");
                scanf("%d", &rolno);
                Del(rolno);
                break;
            case 4:
                printf("Enter rolno  ");
                scanf("%d", &rolno);
                Updation(rolno);
                break;
            case 5:
                show();
                break;
        }
        
    } while (c != 0);
}