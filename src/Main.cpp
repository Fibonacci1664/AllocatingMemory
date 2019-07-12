/*
 * Main.cpp
 *
 *  Created on: 12 Jul 2019
 *      Author: Dave
 */

#include<iostream>
#include"Object.h"

using namespace std;

int main()
{
//	int *pInt = new int;		// Create a new int object manually using the 'new' operator
//
//	*pInt = 8;					// Assign it a value
//	cout << *pInt << endl;		// Dereference to get the value stored at the mem address
//	delete pInt;				// Remembering to manually deallocate the mem as we have manually
//								// assigned mem because we invoked the 'new' operator.
//
//	cout << endl;
//	cout << "################################" << endl;
//	cout << endl;
//
//
//	Object *pObject_1 = new Object();	// This allocates mem and instantiates and object into that mem
//
//	delete pObject_1;		// Manually deallocate the memory (delete the object).
//
//	cout << endl;
//	cout << "################################" << endl;
//	cout << endl;
//
//	Object *pObject_2 = new Object[10];	// This allocates mem and instantiates 10 objects into that mem
//
//	pObject_2[5].setType("Magic Sword!");
//	pObject_2[5].objectDescription();
//
//	delete [] pObject_2;		// Manually deallocate ALL of the mem for ALL of the objects in the array
//
//	cout << endl;
//	cout << "################################" << endl;
//	cout << endl;
//
//	char *pMem = new char[1000];		/*
//	 	 	 	 	 	 	 	 	 	 * Because a char is equal to 1 byte, this array actually
//	 	 	 	 	 	 	 	 	 	 * allocated 1000 bytes of memory
//	 	 	 	 	 	 	 	 	 	 */
//	delete [] pMem;



	// Challenge

	int arrLength = 26;
	Object *pObjArr = new Object[arrLength];
	char letter = 'a';

	for(int i = 0; i < arrLength; i ++)
	{
		string alphaLetter(1, letter);

		pObjArr[i].setType(alphaLetter);
		pObjArr[i].objectDescription();

		//cout << letter << endl;

		letter++;
	}

	delete [] pObjArr;


	return 0;
}


