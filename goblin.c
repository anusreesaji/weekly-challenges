#include <stdio.h>
void dep(int a[],int s,int* c,int p)
{
  (*c)=(*c) +a[s]+a[p];
}

void main(){
  int a[100],i,c,n,p1,p2,fd=0,fw=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  c=a[0];
  if(c>=0){fd++;p1=0;}
  else {fw++;p2=0;}
  for(i=1;i<n;i++){
    if(a[i]>=0){
        if(fd==0){
        fd++;
        c=c+a[i];printf("\n%d",c );
        p1=i;

      }
      else{
        dep(a,i,&c,p1);printf("\n%d",c );
        p1=i;
      }
    }
    else{
      if(fw==0){
        fw++;
        c=c+a[i];printf("\n%d",c );
        p2=i;
      }
      else{
        dep(a,i,&c,p2);printf("\n%d",c );
        p2=i;
      }
    }
  }
  printf("\n\n%d",c );
}
