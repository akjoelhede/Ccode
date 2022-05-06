#include <iostream>
#include <string>
#include <cmath>

int main(int argc, char* argv[] )

{
 
	std::string First_name;
	std::string Last_name;

	std::cout << "Enter your FIRST NAME and then hit ENTER\n";
	std::getline(std::cin, First_name);
	std::cout << "And now your LAST NAME followed by ENTER\n";
	std::getline(std::cin, Last_name);
	std::cout << "Your name is\t" << First_name << Last_name << "\n";


return 0;       
}
