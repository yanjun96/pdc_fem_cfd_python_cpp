# include <iostream>
int main(){
  int i;
  std::cout <<"Enter an integer: ";
  std::cin >> i;
  std::cout <<"You entered " << i;
  std::cout <<"     PLease enter an integer again: ";
  std::cin >> i;
  std::cout <<"You entered " << i;
  std::cout <<"     You entered sum is " << 2*i
  << std::endl;
}