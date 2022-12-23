

#include <iostream>
using namespace std;
// Define the maximum size of the arrays
const int MAX = 11;

// Returns true if the two arrays are strictly identical, false otherwise.
bool identicalTwins(const int abc[], const int xyz[], int size) {
	// Check if the two arrays have the same size.
	if (size != MAX) return false;

	// Check if all the elements in the two arrays are equal.
	for (int i = 0; i < MAX; i++) {
		if (abc[i] != xyz[i]) return false;
	}

	// If we reach this point, the two arrays are strictly identical.
	return true;
	
}

int main ()

{
	// Define a variable to store the size of the arrays
	int size;

	// Define the first array
	int abc[MAX];
	// Define the second array
	int xyz[MAX];

	//Tell the user the array size
	cout << "Assume that the array is 11 elements" << endl;

	// Prompt the user to enter the first array
	cout << "Enter the first arrary: ";
	// Read in the first array from the user
	for (int i = 0; i < MAX; i++)
	{
		cin >> abc[i];

	}

	// Prompt the user to enter the second array
	cout << "Enter the second array: ";
	// Read in the second array from the user
	for (int i = 0; i < MAX; i++)
	{
		cin >> xyz[i];

	}

	// Check if the two arrays are strictly identical
	if (identicalTwins(abc, xyz, MAX))
	{
		cout << "The two arrays are strictly identical " << endl;
	}
	//if the function is not fullfilled then it must be NOT strictly identical
	else
	{
		cout << "The two arrays are NOT strictly identical " << endl;
	}



	// Return from the main function
	return(0);
}

/*
Output

Test 1:
Enter the first arrary: 1 2 3 4 5 6 7 8 10 11 1
Enter the second array: 1 2 3 4 5 6 7 8 10 11 12
The two arrays are NOT strictly identical 

Test 2: 
Enter the first arrary: 1 2 3 4 5 6 7 8 9 10 11
Enter the second array: 1 2 3 4 5 6 7 8 9 10 11
The two arrays are strictly identical 

*/

