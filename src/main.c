#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE * fp = fopen("files/perfect.mp3","r");
    if (fp == NULL)
    {
        printf("Cannot read file...\n");
        exit(1);
    }
    char ch;
    printf("Byte,Data\n");
    int index = 0;
    while (ch!=EOF)
    {
        ch=fgetc(fp);
        printf("%d,%.2x\n",index,ch);
        index++;
    }
    
    return 0;
}
