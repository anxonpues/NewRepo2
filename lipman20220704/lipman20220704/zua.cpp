#include <iostream>
#include <limits>

int main()
{
	// lipman Exercise 2.20: What does the following program do ?
	
	//int i = 42;			// declares and initializes an integer
	//int* p1 = &i;		// declares and initializes a pointer to integer being that integer the one declared te line before
	//*p1 = *p1 * *p1;	// using dereference asigns de dereferenced pointer the dereferenced pointer squared.

	//Exercise 2.21: Explain each of the following definitions.Indicate whether any are illegaland, if so, why.
	//int i = 0;
	//double* dp = &i;		// wrong a ptr to double can't be initialized with the address of a integer type
	//int* ip = i;			// wrong a ptr to an integer can't be initialized with an integer
	//int* p = &i;


	//Exercise 2.23: Given a pointer p, can you determine whether p points to a valid object ? If so, how ? If not, why not?

	//int ak47 = 47;
	//long long bigg = 49404390548;
	//int* ptr1 = nullptr;
	//if(ptr1)
	//	std::cout << ptr1 << "  " << *ptr1 << "   " << sizeof(ptr1) << std::endl;
	//else
	//	std::cout << ptr1  << "   " << sizeof(ptr1) << std::endl;
	//int* ptr2 = &ak47;
	//if(ptr2)
	//	std::cout << ptr2 << "  " << *ptr2 << "   " << sizeof(ptr2) << std::endl;
	//else
	//	std::cout << ptr2  << "   " << sizeof(ptr2) << std::endl;
	//long long* ptr3 = &bigg;
	//if(ptr3)
	//	std::cout << ptr3 << "  " << *ptr3 << "   " << sizeof(ptr3) << std::endl;
	//else
	//	std::cout << ptr3  << "   " << sizeof(ptr3) << std::endl;
	//long long** ptr4 = &ptr3;
	//if (ptr4)
	//	std::cout << ptr4 << "  " << *ptr4 << "   " << sizeof(ptr4) << std::endl;
	//else
	//	std::cout << ptr4 << "   " << sizeof(ptr4) << std::endl;

	//// i is an int; p is a pointer to int; r is a reference to int
	//int ii = 1024, * p = &ii, & r = ii;

	////lipman p 93
	//int i = 42;
	//int* p; // p is a pointer to int
	//int*& r = p; // r is a reference to the pointer p
	//r = &i; // r refers to a pointer; assigning &i to r makes p point to i
	//*r = 0; // dereferencing r yields i, the object to which p points; changes i to 0

	////Exercise 2.25: Determine the types and values of each of the following variables.
	//int vz = 5;
	//int* ip0 = &vz;		// ip0 puntero a entero
	//int& r = *ip0;		// r referencia a entero
	//int* ip1 = 0;		// ip1 ptr to int
	//int* ip2 = nullptr, ip3(0);		// ip2 ptr to int, ip3 int


	//// lipman p94
	//const int bufSize = 512; // input buffer size
	//const int& rbs = bufSize;	// ref to int const
	//const int* pbs = &bufSize;	// ptr to int const
	//const int* const cpbs = &bufSize;	// const ptr to int const
	//int pg = 8;
	//int* const ppg = &pg;

	////Exercise 2.26: Which of the following are legal ? For those that are illegal, explain why.
	//const int buf = 8;		// before puting = 8 was ilegal bcs don't stay initialized
	//int cnt = 0;
	//const int sz = cnt;
	//++cnt;
	//// ++sz;		sz declared as const so can't modify it anyway

	// lipman p97
	//const int ci = 1024;
	//const int& r1 = ci; // ok: both reference and underlying object are const
	//r1 = 42; // error: r1 is a reference to const
	//int& r2 = ci; // error: non const reference to a const object

	int i = 42;
	const int& r1 = i; // we can bind a const int& to a plain int object
	const int& r2 = 42; // ok: r1 is a reference to const
	const int& r3 = r1 * 2; // ok: r3 is a reference to const
	//int& r4 = r * 2; // error: r4 is a plain, non const reference, r is not defined
	int r = -7;
	int& r4 = r; // only a legal lvalue can be initializer of a ref
	r4 = -r + i;	// as neither i or r are const, specially r

	//// lipman p97
	//std::cin.clear(); 
	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	//std::cin.get();

	return 19550608;

}