#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,a[4],j,i,f,d,k;

scanf("%d",&n);
    if(n>=1000&&n<=9000){

for(i=n+1;i<=9999;i++)
{
	f=1;
	d=i;
	for( j=0;j<4;j++){
	a[j]=d%10;
	d=d/10;}

	for(j=0;j<3;j++)
{for(k=j+1;k<4;k++)
{
	if(a[j]==a[k]){
 	f=0;
	}	
	}}

if(f==1){
break;}

}
	

if(f==1 && i<=9999)

	printf("%d",i); 
    }
    return 0;
}

