/*

   CS216
   Due November 13
   Use pointers to write a function that finds the largest element in an array of integers. Use {6, 7, 9, 10, 15, 3, 99, -21} to test the function. (4 points)
 */

#include <iostream> 
#include <string>
using namespace std;

int bigest(int arrary[], int n)
{
	return *max_element(arrary, arrary+n);
}


int main()
{

	int arrary[] = {6, 7, 9, 10, 15, 3, 99, -21};
	int n = sizeof(arrary) / sizeof(arrary[0]);
	cout << "The largest element is " << bigest(arrary, n);
	return 0;

}

/*
   OUTPUT

   The largest element is 99

 */
