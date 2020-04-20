//my professor solution
#include <stdio.h>
int ssum(int n){
  if(n==1) return 1;
  
  return n * n + ssum(n-1);
}

int main(){
  int n;
  scanf("%d",&n);
  printf("%d\n",ssum(n));
  return 0;
}
