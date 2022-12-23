#include <cctype>
#include <iostream>
#include <string>
#include <exception>

using namespace std;

// Converts a hex number as a string to decimal
int hex2Dec(const string& hex);
// Converts a hex character to a decimal value
int hexCharToDecimal(char ch);


//defining HexFormatException exception class
class HexFormatException: exception{
	public:
		//overriding what method to return an error message
		const char* what(){
			return "Not a hex number";
		}
};


int hex2Dec(const string& hex)
{
	int decimalValue = 0;
	for (unsigned i = 0; i < hex.size(); i++){
		//checking if current char is a digit or lower/upper case hex char
		if(isdigit(hex[i]) || (hex[i]>='A' && hex[i]<='F') || 
				(hex[i]>='a' && hex[i]<='f')){
			//valid
			decimalValue = decimalValue * 16 + hexCharToDecimal(hex[i]);
		}else{
			//if not valid, throwing HexFormatException
			throw HexFormatException();
		}

	}
	return decimalValue;
}


int hexCharToDecimal(char ch)
{
	ch = toupper(ch); // Change it to uppercase
	if ('A' <= ch && ch <= 'F')
		return 10 + ch - 'A';
	else // ch is '0', '1', ..., or '9'
		return ch - '0';
}


int main()
{
	// Prompt the user to enter a hex number as a string
	cout << "Enter a hex number: ";
	string hex;
	cin >> hex;
	//calling hex2dec method inside a try block
	try{

		auto dec = hex2Dec(hex);
		cout << "The decimal value for hex number " << hex << " is " << hex2Dec(hex)
			<< endl;
	} 
	catch(HexFormatException& e)
	{
		//in case if HexFormatException occur, printing error message.
		cout<<e.what()<<endl;
	}

	return 0;
}
