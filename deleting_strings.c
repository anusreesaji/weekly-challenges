#include<stdio.h>
#include<string.h>


int check(char a[],int n){
  int l,i,f,t,j;
  l=strlen(a);
  for(i=0;i<=l-n;i++){
    j=0;f=0;t=i;
    while(j<n-1){
      if(a[j+t]==a[t+j+1]){
        f++;
      }
      else{
        f=0;
      }j++;
    }
    if (f==(n-1)) {
      return(0);
    }
  }
  return(1);
}


void del(char a[],int s,int n){
  int i,l;
  l=strlen(a);
  if(a[s+n]!='\0'){
  for(i=0;i<l-s;i++){
    a[s+i]=a[s+i+n];
  }
}

  else{
    for(i=0;i<n;i++){
      a[i+s]='\0';
    }
  }

}


void swap(char a[],int n){
  int i,j,l,f,t;
  l=strlen(a);
  do{
  for(i=0;i<=l-n;i++){
    if((a[i+ n-1]) != '\0'){
    j=0;t=i;f=0;
    while(j<n-1){

        if(a[t+j]==a[t+j+1]){
          f++;
        }
        else{
          f=0;
        }j++;
        if(f==n-1){
          del(a,i,n);
          i=i-1  ;break;
        }
    }
}else break;
  }
}while(check(a,n)==0);
}



int main(){
  char a[100];
  int n,l;
  printf("enter no:");
  scanf("%d %d",&n,&l);
  printf("string\n" );
  scanf("%s",a);
  swap(a,n);
  printf("\n%s",a);
  return(0);
}
