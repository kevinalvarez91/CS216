/*

October 25, 2022
Object Oreientated Programming in C++ */

#include <iostream>

using namespace std;

int main ()
{

	string year;

	string stud_type[4] = {"Freshman", "Softphmore", "Junior", "Senior"};

	cout << "Enter Two Characters: ";
	cin >> year;

	int major = year[1] - '0' -1 ;

	if ( year[1] > '4' || year[1] < '1')
	{
		cout << "Invaild Status Code";
	} 
	
	else {
		switch(year[0])
	
		{	
			case 'M': cout << "\nMathematics " << stud_type[major];
              break;
       		case 'm': cout << "\nMathematics " << stud_type[major];
			  break;
			case 'C': cout << "\nComputer Science " << stud_type[major];
			  break;
        	case 'c': cout << "\nComputer Science " << stud_type[major];
              break;
			case 'I': cout << "\nInformation Tech " << stud_type[major];
			  break;
        	case 'i': cout << "\nInformation Tech " << stud_type[major];
              break;
			default: cout << "Invaild Major Code ";

		} 
	}

	return 0;

}

/* 

Your program is correct from running on both VC++ and GCC. If the same program is incorrect in   Revel, email Dr. Liang (y.daniel.liang@gmail.com) your code along with the screen shot in  
Revel. Please show the entire code and error message in the Revel screen shot.

OUTPUT EXAMPLES

Enter Two Characters: M2

Mathematics Softphmore

Enter Two Characters: M4

Mathematics Senior

Enter Two Characters: M5

Invaild Status Code

Enter Two Characters: D2

Invaild Major Code

*/
