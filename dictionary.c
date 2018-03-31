#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main() {
  char a[26],s[30][30],c[30][30],t,b[30],o[30][30];
  int f,i,j,n,k;
  printf("order:");
  scanf("%s",a);

printf("\nno of words:" );
scanf("%d",&n );getchar();

  for ( i = 0; i<n; i++) {
  scanf("%s",s[i]);

      strcpy(c[i],s[i]);
  }

for ( i = 0; i < n; i++) {
  for ( j = 0; c[i][j]!= '\0'; j++) {
    t= c[i][j];printf("%c\n",c[i][j] );
    for ( k = 0; k < 26; k++) {
      if(t == a[k]|| t==(toupper(a[k])))
      {printf("%c\n",a[k] );printf("%d\n",k );
        f=k;
      }
    }
  if (isupper(t)){
  c[i][j]= f+ 'A';
  printf("up\n" );
}
  else{
  c[i][j]=f+'a';printf("lo\n" );printf("%c\n", c[i][j]);}
}
}
for ( i = 0; i < n; i++)
 {
  printf("%s \n ",c[i]);
}

for ( i = 1; i < n; i++)
 {
   printf("in i\n" );
for (j = 0; j < n-1 ; j++)
 {
  if(strcmp(c[j],c[i])>0)
  {
      strcpy(b,c[i]);
    strcpy(c[i],c[j]);
    strcpy(c[j],b);
  }
}
}
for (i = 0; i < n; i++)
{
  printf("%s  ",c[i]);

}

for ( i = 0; i < n; i++)
 {
  for(j=0;c[i][j]!='\0';j++)
  {
    if(isupper(c[i][j]))
    {
    f=(int)c[i][j]-(int)'A';
  o[i][j]=toupper(a[f]);
  }
    else
    {
    f=(int)c[i][j]-(int)'a';
    printf("\n%d",f);
     o[i][j]=a[f];
  }
}
o[i][j]='\0';
}
for (i = 0; i < n; i++)
 {
  printf("%s  ",o[i]);
}

}
