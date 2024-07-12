#include<stdio.h>
#include<math.h>
int prime(int m);
int main() {

int i;

for (i=1; i<=100; i++){
  if (i%10 == 0){
  printf("\n");
  }
  if (prime(i) == 1) { 
  printf("%6d",i);
  }
}

return 0;
}


int prime(int m){
int i;
if (m == 1){ 
return 0;
}

for (i=1; i<=sqrt(m); i++){
  if (m%i == 0){
  return 0;
  }
}
return 1;

}
