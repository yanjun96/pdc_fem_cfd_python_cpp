int step_f(int x){
  int result = 0;
  if (x < 0) {result = -1;}
  else if (x > 0) {result = 1;}
  return result;
}

#include <cstdio>

int main(){
int value1 = step_f(100);
printf("%d\n",value1);
int value2 = step_f(0);
printf("%d\n",value2);
int value3 = step_f(-100);
printf("%d\n",value3);
}
