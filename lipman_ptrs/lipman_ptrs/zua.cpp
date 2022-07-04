#include <iostream>
#include <limits>
int main()
{
	// lipman 2.14
	/*int i = 100, sum = 0;
	std::cout << i << " " << sum << std::endl;
	for (int i = 0; i != 10; ++i)
		sum += i;
	std::cout << i << " " << sum << std::endl;*/

	// lipman p87
	//int i = 42;
	//int &r = i; // & follows a type and is part of a declaration; r is a reference
	//int *p; // * follows a type and is part of a declaration; p is a pointer
	//p = &i; // & is used in an expression as the address-of operator
	//*p = i; // * is used in an expression as the dereference operator
	//int &r2 = *p; // & is part of the declaration; * is the dereference operator

	// lipman p89
	//int i = 42;
	//int* pi = 0; // pi is initialized but addresses no object
	//int* pi2 = &i; // pi2 initialized to hold the address of i
	//int* pi3; // if pi3 is defined inside a block, pi3 is uninitialized
	//pi3 = pi2; // pi3 and pi2 address the same object, e.g., i
	//pi2 = 0; // pi2 now addresses no object

	// cosecha propia
	//typedef int* PTI;
	//PTI hist[20]{ 0 };
	//int hdt[20]{0};
	//int cont(0);
	//int jan = 550;
	//PTI ja = &jan;
	//hist[0] = ja;
	//hdt[0] = jan;
	//int jes = -44;
	//if (&jes != ja)
	//{
	//	ja = &jes;
	//	cont++;
	//	hist[cont] = ja;
	//	hdt[cont] = jes;
	//}
	//int jsa = 7;
	//if (&jsa != ja)
	//{
	//	ja = &jsa;
	//	cont++;
	//	hist[cont] = ja;
	//	hdt[cont] = jsa;
	//}
	//int jna = 507;
	//if (&jna != ja)
	//{
	//	ja = &jna;
	//	cont++;
	//	hist[cont] = ja;
	//	hdt[cont] = jna;
	//}
	//int jal = 0;
	//if (&jal != ja)
	//{
	//	ja = &jal;
	//	cont++;
	//	hist[cont] = ja;
	//	hdt[cont] = jal;
	//}
	//int jok = 0;
	//if (&jok != ja)
	//{
	//	ja = &jok;
	//	cont++;
	//	hist[cont] = ja;
	//	hdt[cont] = jok;
	//}
	//jsa = 232323;
	//if (&jsa != ja)
	//{
	//	ja = &jsa;
	//	cont++;
	//	hist[cont] = ja;
	//	hdt[cont] = jsa;
	//}
	//int jer = 404390548;
	//if (&jer != ja)
	//{
	//	ja = &jer;
	//	cont++;
	//	hist[cont] = ja;
	//	hdt[cont] = jer;
	//}

	// lipman p90 void pointers
	//double obj = 3.14, * pd = &obj;
	//// ok: void* can hold the address value of any data pointer type
	//void* pv = &obj; // obj can be an object of any type
	//pv = pd; // pv can hold a pointer to any type


	// Exercise 2.18: Write code to change the value of a pointer. Write code to change the value to which the pointer points.

	const char *pch = nullptr;
	const char *kpp = "kagonputapoli";
	pch = kpp;
	
	long long te = 626011550;
	long long* pt = &te;
	long long tea = 49404390548;
	pt = &tea;

	double rho = 19.0004713;
	double* prho = &rho;
	*prho = -0.0023;
	*pt = 19620927;

 	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();

}