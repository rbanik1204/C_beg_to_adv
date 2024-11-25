#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char str[50];
    fp=fopen("abc.txt","r");
    if(fp==NULL){
    printf("No such file detected");
    exit(1);
    }
    char ch;
    /*ch=fgetc(fp);
    printf("%c",ch);
    while(!feof(fp)){
    ch=fgetc(fp);
    printf("%c",ch);
    }*/
   while(!feof(fp)){
    fgets(str,10,fp);
    printf("%s",str);
   }
    fclose(fp);
}