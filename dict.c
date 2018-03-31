#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void up(char a[])
{
  int i;
  for(i=0;a[i]!='\0';i++)
  {
    char b= a[i];
  a[i] = toupper(b);

  }
}

void join(char a[]){
  char b[500];
  strcpy(b,a);
  up(b);
  strcat(a,b);
}

int find(char a[],char l){
  int i;
  for (i=0;a[i]!='\0';i++){
    if(a[i]==l)
      return(i);}
  return(-1);
}


int comp(char a[],char b[],char in[]){
int i=0;
while(a[i]==b[i])
{
  if(a[i]=='\0')
  return(0);
  else
  i++;
}
  return(find(in,a[i])-find(in,b[i]));
}
void main() {
  int i,j,n; char c[500][500];
   char in[52],t[500];
scanf("%s",in);
join(in);
scanf("%d\n",&n );
for ( i = 0; i < n; i++) {
  scanf("%s",c[i] );
}

for ( i = 1; i < n; i++) {
  for ( j = 0; j < n-1; j++) {
    if(comp(c[j],c[i],in)>0){
      strcpy(t,c[j]);
      strcpy(c[j],c[i]);
      strcpy(c[i],t);

  }
}
}

for ( i = 0; i < n; i++) {
  printf("%s\n",c[i] );
}
  }
