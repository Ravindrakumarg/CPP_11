/*Note; this will compile with C11 compiler not with c++ 11 compiler */

#include <iostream>

#define INC_SIMPLE(I) ++I  // this is not a generic macro. It handles string and int in same way.
							// macro is no type checked. so this is error prone as unexpected result.

// this macro can take anything as argument and detect the type and work accordingly.
#define INC(x) _Generic((x), int: ++x, \
							 float: ++x, \
							 default: INCS(x))
#define INCS(x)	x

#define geeks(T) _Generic((T), char: 5, int: 2, long: 3, const char*: 7, default: 0)

int main()
{
	int a = 10;
	const char * name = "ravindra";

	std::cout << INC_SIMPLE(a) << std::endl;
	std::cout << INC_SIMPLE(name) << std::endl;

	std::cout << INC(a) << std::endl;
	std::cout << INC(name) << std::endl;

	// char returns ASCII value which is int type. 
	printf("%d\n", geeks('A'));

	// Here A is a string. 
	printf("%d", geeks("A"));

	getchar();

	return 0;
}