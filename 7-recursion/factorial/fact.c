#include<stdio.h>
unsigned fact(unsigned n){
  if ( n == 1 || n == 0){
    return 1;
  }
  else{
    return n * fact(n-1);
  }
}
  int main(){
    int n;
    printf("Input n\n");
    scanf("%d",&n);
    printf("the factorial of %d is %d", n, fact(n));
  }
  
