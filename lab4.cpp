/*

Lab 4
CS216
Due Novemeber 11
Program a program that ouputs a state 
and asks a user for the capital. (Using a 2 dimensional Array)
*/

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{

	string input = "begin";

	string state[50][50]= { 
		{ "Alabama", "Alaska",  "Arizona",  "Arkansas",  "California",  "Colorado",  "Connecticut" , "Delaware" , "Florida" , "Georgia" ,  "Hawaii", "Idaho", "Illinois", 
	 "Indiana",  "Iowa" ,  "Kansas", "Kentucky" ,  "Louisiana" , "Maine" ,  "Maryland" ,  "Massachusetts" ,  "Michigan" ,  "Minnesota" ,  "Mississippi" ,  "Missouri",  "Montana",  "Nebraska", 
	  "Nevada",  "New Hampshire", "New Jersey", "New Mexico",  "New York",  "North Carolina",  "North Dakota", "Ohio", "Oklahoma",  "Oregon",  "Pennsylvania", "Rhode Island",  "South Carolina",  
	  "South Dakota",  "Tennessee", "Texas",  "Utah",  "Vermont",  "Virginia",  "Washington",  "West Virginia" "Wisconsin", "Wyoming"},
	   { "Montgomery", "Juneau", "Phoneix", "Little rock", "Sarcramento", "Denver", "Hartford", "Dover", "Tallahassee", "Atlanta","Honolulu", "Boise", "Springfield", "Indianapolis", "Des Moines", 
	   "Topeka", "Frankfort", "Baton Rouge", "Augusta", "Annapolis", "Boston", "Lansing", "Saint Paul", "Jackson", "Jefferson City", "Helena", "Lincoln", "Carson City", "Concord", "Trenton", "Albany",
	   "Santa Fe", "Raleigh", "Bismarck", "Columbus", "Oklahoma City", "Salem", "Harrisburg", "Providence", "Columbia", "Pierre", "Nashville", "Austin", "Salt Lake City", "Montpelier", "Richmond", 
	   "Olympia", "Charleston", "Madison", "Cheyenne"} 
		};


	for (int i = 0; i < 10; ++i)

	{

		int index = rand()%49;
		cout << "What is the capital of " << state[0][index] << "? ";

		cin >> input;
		if ( input == state[1][index])
		{
			cout << "Your answer is correct.\n";
		}
		else 
		{
			cout << "The capital of " << state[0][index] << " is " << state[1][index] << endl;

		}



	}


	return 0;        
}

/*
OUTPUT
What is the capital of Delaware? Dover
Your answer is correct.
What is the capital of Wyoming? Cheyenne
Your answer is correct.
What is the capital of Mississippi? Jackson
Your answer is correct.
What is the capital of Florida? Miami
The capital of Florida is Tallahassee
What is the capital of New York? Albany
Your answer is correct.
What is the capital of Minnesota? Saint Paul
The capital of Minnesota is Saint Paul
What is the capital of Vermort? Albanio
The capital of Vermort is Montpelier
What is the capital of New Hampsire? Concord
Your answer is correct.
What is the capital of Mississippi? Jackson
Your answer is correct.
What is the capital of Georiga? Los Angles
The capital of Georiga is Atlanta

PROGRAM ENDS ONLY LOOPING 10 TIMES

*/
