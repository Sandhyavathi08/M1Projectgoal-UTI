#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct s
{
    int rolno;
    char name[100];
    char phone[100];
    float percentage;
    struct s *next;
    
}* R;