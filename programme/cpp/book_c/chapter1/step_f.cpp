int step_f(int x){
  int result = 0;
  if (x < 0) {result = -1;}
  else if (x > 0) {result = 1;}
  return result;
}

#include <cstdio>

int main(){

int num1 = 100;
int num2 = 0;
int num3 = -100;

int value1 = step_f(num1);
printf("Numble1: %d,Step: %d\n ",num1, value1);
int value2 = step_f(num2);
printf("Numble2: %d,Step: %d\n ",num2, value2); 
int value3 = step_f(num3);
printf("Numble3: %d,Step: %d\n ",num3, value3); 

}
