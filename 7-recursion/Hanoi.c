#include<stdio.h>

void Move(int n, char a, char b){
  printf("Move %d from c% to c%", n, a, b);
}

void Hanoi(int n, char a, char b, char c){
  if(n == 1){
    Move(n, a, b);
  }
  else{
    Hanoi(n - 1, a, c, b);
    Move(n, a, b);
    Hanoi(n - 1, c, b, a);
  }
}

int main(){
  int n;
  printf("Input the numbers of disks");
  scanf("%d", &n);
  printf("Steps of Moving %d disks from A to B by means of C:\n", n);
  Hanoi(n, 'A', 'B', 'C');
}

