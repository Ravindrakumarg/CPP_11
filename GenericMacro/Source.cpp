#include <iostream>

#define INC(I) ++I

int main()
{
	int a = 10;
	const char * name = "ravindra";

	std::cout << INC(a) << std::endl;
	std::cout << INC(name) << std::endl;

	getchar();

	return 0;
}