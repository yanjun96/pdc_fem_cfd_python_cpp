#include<stdio.h>
int main()
{
int i;
for(i = 100; i<= 300; i++) {
  if( i % 3 != 0)
    continue;
  printf("%d ", i);
}

}
