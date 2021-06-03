// Random access in file
#include<stdio.h>
#include<conio.h>
void main()
{
     FILE *fp;
     char ch;
     int n;
     fp=fopen("test.txt", "r");
     if(fp==NULL)
      printf("file cannot be opened");
     else
     {
        printf("Enter value of n  to read last 'n' characters");
        scanf("%d",&n);
        fseek(fp,-n,2);
        printf("Current position is %ld\n",ftell(fp));
        while(1)
        {  
             ch = fgetc(fp); 
             if (feof(fp))
                break;
             printf("%c",ch);
        }
        printf("\nCurrent position is %ld\n",ftell(fp));
        printf("Now reset the position :");
        rewind(fp);
        printf("\nCurrent position is %ld\n",ftell(fp));
      }
  fclose(fp);
}