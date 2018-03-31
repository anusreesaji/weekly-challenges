#include<stdio.h>
#include<stdlib.h>
void main(){
int i,n;
char a[10][10];
printf("\n Enter no");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%s",a[i]);
for(i=0;i<n;i++)
puts(a[i]);
}
