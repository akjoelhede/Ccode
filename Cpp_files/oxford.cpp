#include <iostream>
#include <string>

int main(int argc, char* argv[])

{

	std::string city;
	city = "Oxford";
	std::cout << "string length = " << city.length() << "\n";
	std::cout << "Third character = " << city.at(2) << "\n";
	std::cout << "Third character = " << city[2] << "\n";
	std::cout << city << "\n";
	std::cout << city.c_str() << "\n";

return 0;

}
