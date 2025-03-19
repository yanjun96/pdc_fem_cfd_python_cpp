int absolute_v(int x){
if (x > 0) {x = x; }
else { x = x*(-1);}
return x;
}


#include <cstdio>

int main() {
 int c = -20;
 int d = absolute_v(c);

 printf("Origin: %d, absolute: %d\n", c, d);

}
