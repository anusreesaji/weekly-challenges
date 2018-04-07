#include<stdio.h>
#include<stdlib.h>
int ind(int s,int a[],int n){
  int i,m;
  m=(2*n)+1;
  for(i=0;i<m;i++){
    if(a[i]==s){a[i]=0;
      if(i<=n){
              return(i);      }
        else{
        return(n-i);}
  }
}
}



int main(){
  int i,j,ch=0,d=0,n,c[100]={0},r[100]={0},t[100]={0},m,a[100][100],k,b[100],l;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for ( j = 0; j < n; j++) {
    scanf("%d",&a[i][j]);
    }
  }

  for(i=0;i<n;i++){
    for ( j = 0; j < n; j++) {
      if(i==j){
        ch=ch+a[i][j];
      }
      if(i==(n-1-j)){
        d=d+a[i][j];
      }
    }}


    d=ch-d;

    for(i=0;i<n;i++){
      for ( j = 0; j < n; j++) {
        r[i]=r[i]+a[i][j];
        c[i]=c[i]+a[j][i];
      }}



        for ( j = 0; j < n; j++) {
          r[j]=ch-r[j];
          c[j]=ch-c[j];
        }





        //counting
        if(d!=0)m++;
          for ( j = 0; j < n; j++) {
            if(c[j]!=0)m++;
            if(r[j]!=0)m++;
          }printf("\n%d",m );
          if(m==0)exit;

            t[0]=d;
    for ( i = 1; i < 2*n+1; i++) {
      if(i<=n)t[i]=r[i-1];
      else t[i]=c[i-n-1];
    }



for ( i = 0; i < 2*n+1; i++) {b[i]=t[i];}

    for(i=0;i<2*n;i++){
      for ( j = i+1; j < 2*n+1; j++) {
        if(t[i]<t[j]){
          l=t[i];
          t[i]=t[j];
          t[j]=l;
        }}}



for(i=0;i<(2*n)+1;i++){
  if(t[i]!=0){
    t[i]=ind(t[i],b,n);
  }
}
for(i=0;i<2*n;i++){
  for ( j = i+1; j < 2*n+1; j++) {
    if(t[i]>t[j]){
      l=t[i];
      t[i]=t[j];
      t[j]=l;
    }}}
    for ( i = 0; i < 2*n+1; i++)printf("\n%d",t[i]);
printf("\n" );

return(0);
}
