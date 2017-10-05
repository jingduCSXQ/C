#include <stdio.h>
#include <string.h>
int mystrlen(char *a)
{
 int n=0;
while(*a++!='\0')
 n++;
 return n;

}

 main()
{
 int m;
 char a[100];
 printf("please input a string!\n");
 gets(a);
 //printf("%d",strlen(a));
 m=mystrlen(a);
 printf("%d",m);

}

