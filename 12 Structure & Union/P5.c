// pointer to structure
#include <stdio.h>
#include <conio.h>

struct student {
    int roll;
    char name[20];
};
  
void main()
{
    struct student stu={11,"Raj"} , *ptr;
    ptr = &stu;
    printf("ROll: %d\n",(*ptr).roll);
    printf("Name:%s",(*ptr).name);
}