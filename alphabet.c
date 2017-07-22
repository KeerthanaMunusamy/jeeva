#include<stdio.h>
 
int main() {
      char c;
      scanf("%c",&c);
 
   if( (c>='A'&&c<='Z') || (c>='a'&&c<='z'))
       {
           printf("%c is alphabet",c);
       }
       else
       {
           printf("%c not a alphabet",c);
           }
    return 0;
}
