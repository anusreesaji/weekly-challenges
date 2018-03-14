#include<stdio.h>
void int main {
int a[100],i,j,n,m,t;
printf("\nEnter total no and needed" );
scanf("%d %d".&m,&n);
//reading
for ( i = 0; i < m; i++) {
  scanf("%d",&a[i]);
}
//sorting
for ( i = 1; i < m; i++) {
  for (j = 0; j< m-1; j++) {
    if (a[i]<a[j]) {
      t=a[j];
      a[j]=a[i];
      a[i]=t;
    }
  }
}
t=0;
for(i=0;i<m-n;i++)
{
  j=a[i+n]-a[i];
  if (j<t) {
    t=j;
  }
}

  return 0;
}
