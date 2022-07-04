#include <iostream>
#include <limits>

int main()
{
	// lipman Exercise 2.20: What does the following program do ?
	
	int i = 42;			// declares and initializes an integer
	int* p1 = &i;		// declares and initializes a pointer to integer being that integer the one declared te line before
	*p1 = *p1 * *p1;	// using dereference asigns de dereferenced pointer the dereferenced pointer squared.

	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();

	return 19550608;

}