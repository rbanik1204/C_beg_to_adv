#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char ch='a';
    int a=10;
    fp=fopen("abc.txt","w");
    if(fp==NULL){
    printf("ERROR!");
    exit(1);
    }
    char str[50];
    printf("enter a string:");
    scanf("%s",str);
    fputs(str,fp);
    fprintf(fp,"\n%d\n%c",a,ch);
    for(int i=0;i!=strlen(str);i++)
    fputc(str[i],fp);
    fclose(fp);
}