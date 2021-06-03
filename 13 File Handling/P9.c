// block read / write
 #include <stdio.h>
#include <conio.h>
struct Student
{
   int roll;
   float per;
   char name[30];
} S1;
void main()
{
   int i, n;
   FILE *ptr;
   ptr = fopen("stu.dat", "wb");
   if (ptr == NULL)
   {
      printf("Can't open ");
      return;
   }
   printf("Enter no. of records:\n");
   scanf("%d", &n);
   for (i = 1; i <= n; i++)
   {
      printf("Enter roll, per, and name:\n");
      scanf("%d%f%s", &S1.roll, &S1.per, &S1.name);
      fwrite(&S1, sizeof(S1), 1, ptr);
   }
   fclose(ptr);
   ptr = fopen("stu.dat", "rb");
   if (ptr == NULL)
   {
      printf("Can't read");
      return;
   }
   printf("The details are:\n");
   while (fread(&S1, sizeof(S1), 1, ptr) == 1)
   {
      printf("%d\n%f\n%s\n", S1.roll, S1.per, S1.name);
   }
   fclose(ptr);
}