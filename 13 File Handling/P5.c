// show the use feof
#include <stdio.h>
#include <conio.h>
void main()
{
    FILE *fp;
    int i;
    fp = fopen("myfile.txt","wb");
    for ( i = 0; i <= 5; i++)
    {
        putw(i,fp);
    }
    fclose(fp);
    fp = fopen("myfile.txt","rb");
    while (1)
    {
        i = getw(fp);
        if (feof(fp))
            break;
        printf("%d",i);
    }
    fclose(fp);
}