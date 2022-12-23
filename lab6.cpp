/*

CS216
Lab 6
Due November 20
*/
#include <iostream>
#include <string>
using namespace std;

template <typename T>
class biggest
{
	public:
		T static findLargest(T a, T b, T c){
			T largest;
			if(a > b)
				largest = a;
			else
				largest = b;

			if(c > largest)
				largest = c;
			return largest;
		}
};


int main(){
	double numb1;
	double numb2;
	double numb3;

	int n1;
	int n2;
	int n3;


	string strl1;
	string  strl2;
	string strl3;


	cout << "What is ineteger 1? ";
	cin >> n1;

	cout << "\nWhat is integer 2? ";
	cin >> n2;

	cout << "\nWhat is integer 3? ";
	cin >> n3;


	cout << "\nWhat is double 1? ";
	cin >> numb1;
	cout << "\nWhat is double 2 ";
	cin >> numb2;
	cout << "\nWhat is double 3 ";
	cin >> numb3;


	cout << "\nWhat string 1? ";
	cin >> strl1;

	cout << "\nWhat string 2? ";
	cin >> strl2;

	cout << "\nWhat string 3? ";
	cin >> strl3;

	cout << "\nLargest integer = " << biggest<int>::findLargest(n1, n2, n3) << endl;
	cout << "\nLargest double = " << biggest<double>::findLargest(numb1, numb2, numb3) << endl;
	cout << "\nLargest string = " << biggest<string>::findLargest(strl1, strl2, strl3) << endl;

	return (0);
	
}

/*
Output

What is ineteger 1? 4

What is integer 2? 5

What is integer 3? 9

What is double 1? 1.5

What is double 2 8.7

What is double 3 9.8

What string 1? Mango 

What string 2? Fruit

What string 3? Avacado

Largest integer = 9

Largest double = 9.8

Largest string = Mango

*/

