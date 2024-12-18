#include <iostream>
#include <string>
#include <vector>
#include <numeric>


//1. ask for the name and age of the user -- print to console


//
//int main()
//{
//	std::string Input;
//	
//	std::cout << "What is your name: " << std::endl;
//	std::cin >> Input;
//	std::cout << "Your name is: " << Input << std::endl;
//
//	std::cout << "What is your age: " << std::endl;
//	std::cin >> Input;
//	std::cout << "Your age is: " << Input << std::endl;
// 
//	return 0;
//}

//2. a. ask the user for a temperature in C and convert to F -- print to console

//int main()
//{
//	float celsius;
//	float fahrenheit;
//	std::cout << "Please enter a temperature in Celsius: " << std::endl;
//	std::cin >> celsius;
//	fahrenheit = (celsius * 9 / 5) + 32;
//	std::cout << "The temperature in Fahrenheit is: " << fahrenheit << std::endl;
// 
//	return 0;
//}

//2. b. km to miles

//int main()
//{
//	std::string Input;
//	
//
//	std::cout << "Please enter a distance in kilometers: " << std::endl;
//	std::cin >> Input;
//
//	float km = std::stof(Input);
//	float miles = km * 0.621371;
//	std::cout << "The distance in miles is: " << miles << std::endl;
//
//	return 0;
//}

//2. c. pounds to kg
//int main()
//{
//	std::string Input;
//
//
//	std::cout << "Please enter an amount in kilograms: " << std::endl;
//	std::cin >> Input;
//
//	float kg = std::stof(Input);
//	float pounds = kg * 2.20462;
//	std::cout << "The weight in pounds is: " << pounds << std::endl;
//
//	return 0;
//}

//2. d. dollars to euro
//int main()
//{
//	std::string Input;
//
//
//	std::cout << "Please enter an amount in dollars: " << std::endl;
//	std::cin >> Input;
//
//	float dollars = std::stof(Input);
//	float euros = dollars * 0.95;
//	std::cout << "The amount in euros is: " << euros << std::endl;
//
//	return 0;
//}



//3. Create a vector of 4 float numbers -- print to console
//  a. Compute the average of the 4 numbers -- print to console
//int main()
//{
//	float num1, num2, num3, num4;
//	std::vector<float> numbers;
//
//	std::cout << "Please enter the first number: ";
//	std::cin >> num1;
//	numbers.push_back(num1);
//
//	std::cout << "Please enter the second number: ";
//	std::cin >> num2;
//	numbers.push_back(num2);
//
//	std::cout << "Please enter the third number: ";
//	std::cin >> num3;
//	numbers.push_back(num3);
//
//	std::cout << "Please enter the fourth number: ";
//	std::cin >> num4;
//	numbers.push_back(num4);
//
//	/*float sum = num1 + num2 + num3 + num4;
//	float average = sum / 4;*/ (or this...)
//	float average = std::accumulate(numbers.begin(), numbers.end(), 0.0f) / numbers.size();
//
//	std::cout << "The average of the numbers is: " << average << std::endl;
//
//	return 0;
//}



