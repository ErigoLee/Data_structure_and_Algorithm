//my professor solution
#include <stdio.h>

int fibo(int n){
  if(n==1) return 1;
  if(n==2) return 2;
  
  return fibo(n-1)+fibo(n-2);
}

int main(){
  int n;
  scanf("%d",&n);
  printf("%d\n",fibo(n));
  return 0;
}
