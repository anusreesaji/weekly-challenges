#include <stdio.h>
void swap(int a[],int i,int* c){
  int t;
  t=a[i];
  a[i]=a[i+1];
  a[i+1]=t;
  (*c)++;
}

int main(){
  int a[100],c=0,i,l=0,s=0,n,la;
  scanf("%d",&n);
  for ( i = 0; i < n; i++) {
  scanf("%d",&a[i]);}

  for(i=0;i<n;i++){
    if(a[i]>a[l])
      l=i;
    if(a[i]<=a[s])
      s=i;
  }
la =a[l];
  for(i=s;i<n-1;i++){
    swap(a,i,&c);printf("\n%d %d",a[i],a[i+1]);
  }
  if(a[l-1]==la){i=l-1;}
  else if(a[l]==la){i=l;}

  for( ;i>0;i--){
    swap(a,i-1,&c);printf("\n%d %d",a[i-1],a[i]);
  }

  printf("\n%d ",c);

}
