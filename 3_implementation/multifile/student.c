#include"main.c"

void inserting(int rolno, char* name, char* phone, float percentage)
{
    struct s * student = (struct s *) malloc(sizeof(struct s));
    student->rolno= rolno;
    strcpy(student->name, name);
    strcpy(student->phone, phone);
    student->percentage = percentage;
    student->next = NULL;
    
    if(R==NULL){
        R = student;
    }
    else{
        student->next = R;
        R = student;
    }
    
}
void searching(int rolno)
{
    struct s * t = R;
    while(t!=NULL){
        if(t->rolno==rolno){
            printf("Rolno : %d\n", t->rolno);
            printf("Name: %s\n", t->name);
            printf("Phone: %s\n", t->phone);
            printf("Percentage: %0.4f\n", t->percentage);
            return;
        }
        t = t->next;
    }
    printf("Student with roll number %d is not found !!!\n", rolno);
}
void Updation(int rolno)
{
    
    struct s * t = R;
    while(t!=NULL){
        
        if(t->rolno==rolno){
            printf("Record with roll number %d Found !!!\n", rolno);
            printf("Enter new name: ");
            scanf("%s", t->name);
            printf("Enter new phone number: ");
            scanf("%s", t->phone);
            printf("Enter new percentage: ");
            scanf("%f",&t->percentage);
            printf("Updated\n");
            return;
        }
        t = t->next;
        
    }
    printf("Student with rolno %d is not found !!!\n", rolno);
    
}
void Del(int rolno)
{
    struct s * t1 = R;
    struct s * t2 = R; 
    while(t1!=NULL){
        
        if(t1->rolno==rolno){
            
            printf("Record with roll number %d Found !!!\n", rolno);
            
            if(t1==t2){
                R = R->next;
                free(t1);
            }
            else{
                t2->next = t1->next;
                free(t1); 
            }
            
            printf("Record Successfully Deleted !!!\n");
            return;
            
        }
        t2 = t1;
        t1 = t1->next;
        
    }
    printf("Student with roll number %d is not found !!!\n", rolno);
    
}
void show()
{
    struct s* t =R;
    while(t!=NULL){
        
        printf("Roll Number: %d\n", t->rolno);
        printf("Name: %s\n", t->name);
        printf("Phone: %s\n", t->phone);
        printf("Percentage: %0.4f\n\n", t->percentage);
        t = t->next;
        
    }
}
