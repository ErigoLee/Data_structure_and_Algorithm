#include <stdio.h>
int func(int n){

  if(n==3){
    return 2;
  }
  else if(n==2){
    return 1;
  }
  else if(n==1){
    return 1;
  }
  else
    return func(n-1)+func(n-2)+func(n-3);
}

int main(void) {
  int n;
  scanf("%d",&n);

  int sum = func(n);
  printf("%d\n",sum);
  return 0;
}
