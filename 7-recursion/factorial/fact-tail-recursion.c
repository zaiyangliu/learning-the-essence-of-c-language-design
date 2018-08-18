#include<stdio.h>

unsigned fact(unsigned n, unsigned ans){
  if (n == 1 || n == 0){
    return ans;
  }
  else{
    return fact(n-1, n*ans);
  }
}

int main(){
  int n;
  printf("Input n\n");
  scanf("%d", &n);
  printf("the %d factorial is %d", n, fact(n, 1));
}
  
