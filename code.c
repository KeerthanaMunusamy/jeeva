#include<stdio.h>
#include<string.h>
 
int main() {
   char str[100], n;
   int i, j = 0;
 
   printf("\nEnter the string :");
   gets(str);
 
   i = 0;
   j = strlen(str) - 1;
 
   while (i < j) {
      n = str[i];
      str[i] = str[j];
      str[j] = n;
      i++;
      j--;
   }
 
   printf("\nReverse string is :%s", str);
   return (0);
}
