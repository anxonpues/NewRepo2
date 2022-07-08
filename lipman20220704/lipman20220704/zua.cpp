#include <iostream>
#include <limits>

void errorHandler(int* errNum) 
{
	if(*errNum)
		std::cout << "\nFor same reason errNum != 0 and I need to tell you what happens.  errNum = " << *errNum << std::endl;
	else
		std::cout << "\nNow errNum= 0 and I'm sure you can calm down.  errNum = " << *errNum << std::endl;
}

const int get_size()
{
	return 1;
}

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

	//int i = 42;
	//const int& r1 = i; // we can bind a const int& to a plain int object
	//const int& r2 = 42; // ok: r1 is a reference to const
	//const int& r3 = r1 * 2; // ok: r3 is a reference to const
	////int& r4 = r * 2; // error: r4 is a plain, non const reference, r is not defined
	//int r = -7;
	//int& r4 = r; // only a legal lvalue can be initializer of a ref
	//r4 = -r + i;	// as neither i or r are const, specially r

	/* when use a const in more than one file, as const can't be asigned a value once, both in declaration and definition
	must be preceded by extern because linker needs to know that is used or defined in another file */

	// lipman p 98 const references make the reference blocked to change the value
	//int i = 42;
	//int& r1 = i; // r1 bound to i
	//const int& r2 = i; // r2 also bound to i; but cannot be used to change i
	//r1 = 0; // r1 is not const; i is now 0
	//// r2 = 0; // error: r2 is a reference to const

	//// lipman 99 pointer to const that can't change de value they point
	//const double pi = 3.14; // pi is const; its value may not be changed
	//// double* ptr = &pi; // error: ptr is a plain pointer
	//const double* cptr = &pi; // ok: cptr may point to a double that is const
	//// *cptr = 42; // error: cannot assign to *cptr

	//double dval = 3.14; // dval is a double; its value can be changed
	//cptr = &dval; // ok: but can't change dval through cptr

	// lipman p 100 const ptr that can't be changed the address they point
	//int errNumb = 7;
	//int* const curErr = &errNumb; // curErr will always point to errNumb
	//const double pi = 3.14159;
	//const double* const pip = &pi; // pip is a const pointer to a const object

	//// *pip = 2.72; // error: pip is a pointer to const
	//			    // if the object to which curErr points (i.e., errNumb) is nonzero
	//if (*curErr) {
	//	errorHandler(curErr);
	//	*curErr = 0; // ok: reset the value of the object to which curErr is bound
	//	errorHandler(curErr);
	//}

////Exercise 2.27: Which of the following initializations are legal ? Explain why.
//// int i = -1, &r = 0; ilegal a ref can't be initialized with a non lhv
//// int* const p2 = &i2; ilegal because i2 is not defined / declared before
//int i2(0);	// finally initialize it to be more honest
//int* const p2 = &i2;	// now declared i2 makes the sentence good even if not initialized or defined
// const int i = -1, & r = 0;		// looks like ok because is a reference to a constant int ???
//	/*In particular, we can bind a reference to
//	const to a nonconst object, a literal,
//	or a more general expression*/
// const int* const p3 = &i2;		// const ptr to a const int
// const int* p1 = &i2;			// ptr to a const int initialized with the address of i2 ( still not initialized)
//// const int& const r2;		// as reference to const int must be initialized at declare time
// const int& r2 = i2;	// like now but using & const r2 ... is an anachronism
// // const int i2 = i, & r = i;	// finally i2 is redefined !!! and initialized   maybe it'll crash ad ejecution time ???
//							// let's see what happens ... also was a redefinition of r !!
//							// got compile error so can not redefine i2 as const having before int alone ( 137 )
// const int i3 = i, & ri = i;	// make new variables now all works   would debug line by line to look over variables 

// Exercise 2.28: Explain the following definitions.Identify any that are illegal.
// int i, * const cp;   i is not initiallized as cp ang as const ptr must be initiallized at definition time
//int i, val, * const cp = &val;
//// int* p1, * const p2;    same as before a const ptr must be initializad at declared time like that
//int* p1 = nullptr, * const p2 = &val;
///* giving value to val through p2 would change val as is not const */
//*cp = 27;
////const int ic, & r = ic;    everything that has const must be initialized at declaration time
//const int ic(99), & r = ic;
//const int* const p3 = &ic; // same as before
//const int* p(nullptr);	//	better with the nullptr 
//		// well let's see it ?? all worked as expected once corrected
//
//// Exercise 2.29: Uing the variables in the previous exercise, which of the
//// following assignments are legal ? Explain why.
//i = ic;
////p1 = p3;		a ptr to an const int can not be assigned to an ptr to an int 
////p1 = &ic;		a ptr to an const int can not be assigned to an ptr to an int 
//// p3 = &ic;    p3 is a const ptr  so can not be reasigned 
////p2 = p1;		p2 is a const ptr  so can not be reasigned 
//// ic = *p3;	ic is a cont int and can not be an left_val



// lipman p 101 top and low level of const

int i = 0;
//int* const p1 = &i; // we can't change the value of p1; const is top-level
const int ci = 42; // we cannot change ci; const is top-level
//const int* p2 = &ci; // we can change p2; const is low-level
//const int* const p3 = p2; // right-most const is top-level, left-most is not
const int& r = ci; // const in reference types is always low-level
i = ci; // ok: copying the value of ci; top-level const in ci is ignored
//p2 = p3; // ok: pointed-to type matches; top-level const in p3 is ignored
// int *p = p3; // error: p3 has a low-level const but p doesn't
//p2 = p3; // ok: p2 has the same low-level const qualification as p3
//p2 = &i; // ok: we can convert int* to const int*
//int &r = ci; // error: can't bind an ordinary int& to a const int object
//const int &r2 = i; // ok: can bind const int& to plain int

/*
		ci	42	const int
		i	0	int
+		p1	0x000000f50c5af7f4 {0}	int * const
+		p2	0x000000f50c5af834 {42}	const int *
+		p3	0x000000f50c5af834 {42}	const int * const
		r	42	const int &

		ci	42	const int
		i	42	int
+		p1	0x000000e3da4ff5f4 {42}	int * const
+		p2	0x000000e3da4ff634 {42}	const int *
+		p3	0x000000e3da4ff634 {42}	const int * const
		r	42	const int &


 
 The distinction between top-level and low-level matters when we copy an object.
 When we copy an object, top - level consts are ignored :
 
 Copying an object doesn’t change the copied object. As a result, it is immaterial
 On the other hand, low-level const is never ignored. When we copy an object,
 both objects must have the same low-level const qualification or there must be a
 conversion between the types of the two objects. In general, we can convert a
 nonconst to const but not the other way round:
 whether the object copied from or copied into is const.
*/

/*
	Exercise 2.30: For each of the following declarations indicate whether the
	object being declared has top - level or low - level const.
*/
const int v2 = 0;	// v2 is top level
int v1 = v2;		//  I think v1 here is not cont before stay in same text line with previous but with ; in between
					// so there were two logical lines at my oppinion
int* p1 = &v1, & r1 = v1;	// first here has no const so v2 vas top-level and doesn't copy that to v1
							// same happens with r1 a ref to int doesn't receive const from v2 as that was top-level
const int* p2 = &v2, * const p3 = &i, & r2 = v2;
		// p2 can be low-level and receive adress value from v2 that was high-level that is not copied
		// i was declared as int so no const but this can be p3 a const ptr to a const int initialized with value of address of i
		// finally r2 is a reference to a cont int and gets the value of a top-level that's not copied looks ok...
		// let's see how compiles ?
		// well need to coment previous lines where appear p1 p2 p3 and r
/*
		ci	42	const int
		i	42	int
+		p1	0x000000b3b94ff8f4 {0}	int *
+		p2	0x000000b3b94ff8d4 {0}	const int *
+		p3	0x000000b3b94ff874 {42}	const int * const
		r	42	const int &
		r1	0	int &
		r2	0	const int &
		v1	0	int
		v2	0	const int
*/

/*
	Exercise 2.31: Given the declarations in the previous exercise determine
	whether the following assignments are legal.Explain how the top - level or
	low - level const applies in each case.
*/
r1 = v2;		// ilegal a reference can not be reasigned NOT!!!!!   line (224) makes v1 = v2 
				// so r1 at the end doesn't change value so it's not reasigned anyway
//p1 = p2;		// ilegal p2 points to a const int   and p1 points to an int    this would be wrong
p2 = p1;		// p2 points to const int and p1 points to an int  but top level is not copied
//p1 = p3;		// p1 points to an int and p3 points to a const int low-level so if doesn't fit
p2 = p3;		// both are low-lewel const and the top-level of p3 isn't copied so it fits
				// let's see if all works...?

constexpr int max_files = 20; // max_files is a constant expression
constexpr int limit = max_files + 1; // limit is a constant expression
int staff_size = 27; // staff_size is not a constant expression
const int sz = get_size(); // sz is not a constant expression


	std::cin.clear(); 
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::cin.get();

	return 19550608;

}