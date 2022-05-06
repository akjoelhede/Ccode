#include <iostream>
#include <string>
#include <cmath>

int main(int argc, char* argv[] )

{
	double array1[3] = {5.0,1.0,2.0};
	double array2[3] = {2.0,8.0,3.0};
		


	std::cout << "Vector one is " << array1[0] << "\t" << array1[1] << array1[2] << "\n";
	std::cout << "vector two is " << array2[0] << "\t" << array2[1] << array2[2] << "\n";
	
	
	std::cout << "The dotproduct of the two vectors are\t" << array1[0]*array2[0]+ array1[1]*array2[1]+ array1[2]*array2[2] << "\n";

	std::cout << "And the Euclidean norm of vector 1 is\t" << sqrt(pow(array1[0],2)+pow(array1[1],2)+pow(array1[2],2)) << "\n";
	std::cout << "And the Euclidean norm of vector 2 is\t" << sqrt(pow(array2[0],2)+pow(array2[1],2)+pow(array2[2],2)) << "\n";

return 0;





}
