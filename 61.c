#include<stdio.h>
#include<conio.h>
int main() 
{
char str[20];
int k,i;
printf("enter the string and the k value:");
scanf("%s %d",str,&k);
for(i=0;i<k;i++)
{
printf("\n%c",str[i]);
}
return 0;
}
