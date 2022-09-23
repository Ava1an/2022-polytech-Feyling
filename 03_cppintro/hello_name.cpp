#include <iostream>
int main()
{
	char name[10];
	std::cout << "Enter your name:";
	std::cin >> name;
	std::cout << "Hello, " << name;
	return 0;
}