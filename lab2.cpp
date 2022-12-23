/*

   Lab2
Due: November 3, 2022
CS216
Program a program that outputs which lockers are open, using a bool array.  
 */
#include <iostream>
using namespace std;

int main() 
{
	// Array to store whether lockers are opened (true) or closed (false)
	bool lockers[101] = {false};

	// For every student

	for (int s = 1; s <= 100; s++)



		// Every student that starts to change their locker

		for (int l = s; l <= 100; l += s)

			// everytime a locker is changed
			lockers[l] =! lockers[l];


	// Print all opened lockers
	for (int l = 1; l <= 100; l++)
		if (lockers[l])
			cout << l << " ";
	cout << endl;
	return 0;
}


/* OUTPUT

   Your program is correct from running on both VC++ and GCC. If the same program is incorrect in   Revel, email Dr. Liang (y.daniel.liang@gmail.com) your code along with the screen shot in  
   Revel. Please show the entire code and error message in the Revel screen shot.

   1 4 9 16 25 36 49 64 81 100 

 */
