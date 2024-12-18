//#include <iostream>
//#include <string>
//
//
//// And and Or
//// && or ||
//
//void PrintInput(std::string Name, int Age) 
//{
//	if (Name.empty() || Age <= 0) {
//		std::cout << "Data is empty" << std::endl;
//		return;
//	}
//
//	std::cout << "Name is " << Name << " and Age is " << Age << std::endl;
//	if (Age < 18) {
//		std::cout << "Ah ou are a minor ! Good luck on your schooling" << std::endl;
//	}
//	else if ((Age >= 18) && (Age < 30)) {
//		std::cout << "You are a young adult" << std::endl;
//	}
//	else if ((Age >= 30) && (Age < 50)) {
//		std::cout << "You are an adult" << std::endl;
//		if (Age == 38) {
//			std::cout << "You're the same age as my dog!" << std::endl;
//		}
//	}
//	else {
//		std::cout << "You are an old adult" << std::endl;
//
//	}
//
//}
//
//int main()
//{
//	std::string InputName;
//	int InputAge;
//		std::getline(std::cin, InputName);
//		std::cin >> InputAge;
//
//		PrintInput(InputName, InputAge);
//
//	return 0;
//}