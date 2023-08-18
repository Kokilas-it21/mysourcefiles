#include <stdio.h>
int factorial(int n) { 
  if (n==1 || n==0) {
     return 1;
     }
  else  {
    return  factorial(n-1)*n;
    }
 }
int main() { 
   int n;
   printf("Enter a value:");
   scanf("%d" ,&n);
   printf("The factorial value n is:%d",factorial(n));


}
