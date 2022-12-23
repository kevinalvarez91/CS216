/*

   Lab3
Due: November 6, 2022
CS216  
 */

#include <iostream>
using namespace std;


class EvenNumber{
	private: int value;

	public:
		 EvenNumber();
		 EvenNumber(int val);
		 int getValue();
		 EvenNumber getNext();
		 EvenNumber getPrevious();

};
EvenNumber :: EvenNumber() : value(0) {}
EvenNumber :: EvenNumber(int val){
	if ( val%2== 0) value = val;
	else value = 0;

}
int EvenNumber :: getValue() {return value; }
EvenNumber EvenNumber :: getNext(){
	EvenNumber n (value+2);
	return n;
}
EvenNumber EvenNumber::getPrevious(){
	EvenNumber n (value-2);
	return n;
}

int main(){

	EvenNumber sixteen(16);
	EvenNumber prev = sixteen.getPrevious();
	EvenNumber next = sixteen.getNext();

	cout << "16" << endl;
	cout << next.getValue() << endl;
	cout << prev.getValue() << endl;

	return 0;
}

/*
   OUTPUT

   Your program is correct from running on both VC++ and GCC. If the same program is incorrect in   Revel, email Dr. Liang (y.daniel.liang@gmail.com) your code along with the screen shot in  
   Revel. Please show the entire code and error message in the Revel screen shot.

   16
   18
   14

 */
