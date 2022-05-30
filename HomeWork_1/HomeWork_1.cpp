#include<iostream>
#include<cmath>
int main()
{
	double number_1;
	double number_2;
	double number_3;
	std::cout << "Please enter three number:\nNumber_1: ";
	std::cin >> number_1;
	std::cout << "Number_2: ";
	std::cin >> number_2;
	std::cout << "Number_3: ";
	std::cin >> number_3;
	std::cout << "Geometric mean is: " << cbrt(number_1 * number_2 * number_3) << std::endl;
}


