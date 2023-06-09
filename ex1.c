#include <stdio.h>
#include <stdlib.h>

int main(){
  int a, b, sum;
  
  //experimental
  char str[0];
  printf("What is you name?");
  scanf("%s", str);
  printf("Hello, %s\n", str);
  //experimental
  
  printf("サイコロを振る...\n");
  
  a = rand() % 6 +1;
  b = rand() % 6 +1;
  sum = a+b;
  
  printf("サイコロ1: %d\n", a);
  printf("サイコロ2: %d\n", b);
  printf("合計値: %d\n", sum);
  
  return 0;
}
    
  
