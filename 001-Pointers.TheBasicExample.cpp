#include "pch.h"
#include "tchar.h"

#include <iostream>

// If you are not using Microsoft Visual C++, you may need some code changes.
auto _tmain(int argc, _TCHAR** argv) -> int
{
	int x_int_value = 10;

	/*
	 * A basic example of how to declare a pointer.
	 * 
	 * And now, if you think: "Omgf! did we use the multiplication operator to
	 * declare a pointer?". I say: Yes! We use, however, when it is used to declare
	 * a pointer, the operator loses its multiplier function.
	 *
	 */
	int *ptr;

	/*
	 * This is an example of the new explicit cast style in C++. Basically, I'm talking 
	 * to the compiler: "Ok! Now this memory address will be the value of a pointer that
	 * will point to an integer type...".
	 */
	ptr = static_cast<int *>(&x_int_value);

	/*
	 * You have to know three basic rules:
	 * 
	 * 1° - If you call a pointer without "*" (referencing) or "&" (dereference), it will return
	 * the value contained in it (usually the memory address of some variable).
	 * 
	 * 2° - Now, if you call the pointer with the "*" (referencing) operator, it will return the
	 * value contained in the memory address to which it points.
	 * 
	 * 3° - And, if you call the pointer using the & operator (dereference), it will return its 
	 * own memory address.
	 * 
	 * Here are some examples below:
	 */

	printf("\nThe value of variable \"x_int_value\" is %i!", x_int_value);
	printf("\nThe memory address of variable \"x\" is 0x%p!\n", &x_int_value);

	printf("\nThe memory address of pointer \"ptr\" is 0x%p!", &ptr);
	printf("\nThe memory address that the \"ptr\" pointer points to is 0x%p!", ptr);
	printf("\nThe value contained in the memory address at which the \"ptr\" pointer points is %i!\n", *ptr);

	return 0;

	// Written in 19/10/18.
}