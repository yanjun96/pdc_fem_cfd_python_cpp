#include <iostream>

int main()

{
	std::cout<<"Please input your first name and age\n";
	std::string first_name = "???";
        double age = 0;
	std::cin>>first_name>>age;
	std::cout<<"Hello, "<<first_name<<"  (age of month "<<age*12<<" )\n";

return 0;}
