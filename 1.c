#include <stdio.h>
void func(int n,int* sum){
  *sum += (n*n);
  if (n==1)
    return;
  func(n-1,sum);
}


int main(void) {
  int n;
  int sum=0;
  scanf("%d",&n);

  func(n,&sum);
  printf("%d\n",sum);

  return 0;
}
