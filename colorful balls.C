#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,c=0;
    char s[50],a[10];
      scanf("%d ",&n);
    scanf("%[R,G,B]s",s);printf("%s",s);
    for (i=0;i<(n-1);i++)
        
    {   if(s[i]=='\0')
          {break;}
        else if(s[i]==s[i+1])
           {
                c++;        
            }
    }
    printf("\n%d",c); 
    return 0;
}
