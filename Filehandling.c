#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp1,*fp2;
    char ch, fname[30], newch[500];
    int i=0, j, COUNT=0;
    printf("Enter the filename with extension to open for reading: ");
    gets(fname);
    fp1 = fopen(fname, "r");
    if(!fp1)
    {
        printf("Error in opening the file...\nExiting...");
        getch();
        return 0;
    }
    printf("\nThe original content is:\n\n");
    ch = getc(fp1);
    while(ch != EOF)
    {
        COUNT++;
        putchar(ch);
        newch[i] = ch;
        i++;
        ch = getc(fp1);
    }
    printf("\n\n\n");
    printf("The content in reverse order is:\n\n");
    for(j=(COUNT-1); j>=0; j--)
    {
        ch = newch[j];
        printf("%c", ch);
    }
    printf("\n");
    getch();
    fp2 = fopen("Newfile2.txt", "w");
    while((ch = getc(fp1)) != EOF)
    putc(ch, fp2);
    fclose(fp1);
    fclose(fp2);
    return 0;
}