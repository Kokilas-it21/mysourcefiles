#include <stdio.h>
int add(int x,int y) {
   if(y==0 )
     return x;
   else
     return(1+add(x,y-1));

}
int main() {
  int x,y,z;
    printf("Enter two values : ");
    scanf("%d %d",&x,&y);
    z=add(x,y);
    printf("The sum of : %d",z);
  return 0;
}
