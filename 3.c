#include <stdio.h>
int func(int n){

  if(n==2){
    return 1;
  }
  else if(n==3){
    return 3;
  }
  else if(n==4){
    return 5;
  }
  else
    return func(n-1)+func(n-2);
}

int main(void) {
  int n;
  scanf("%d",&n);

  int answer = func(n);
  printf("%d\n",answer);
  return 0;
}
