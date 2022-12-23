/**/
/*Due Dec 4*/
/*Lab8*/
/*CS216*/

#include <iostream>
//for sqrt
#include <cmath>
using namespace std;

//given
class GeometricObject
{
	public:
		string color;
		int isfilled;
		GeometricObject()
		{
			color ="";
			isfilled = 0;
		}
		GeometricObject(string color2, int isfilled2)
		{
			color = color2;
			isfilled = isfilled2;
		}
};


/*inheriting*/

//s1 = side1
//s2 = side2
//s3 = side3

class Triangle 
: public GeometricObject
{
	public:

		//note-edit the no-arg constructor//

		/*side1*/
		double s1;

		/*side2*/
		double s2;

		/*side3*/ 
		double s3;

		/*no-arg*/
		Triangle():GeometricObject()
	{
		s1 = 1.0; 
		s2 = 1.0;
		s3 = 1.0;
	}
		/*rec*/
		Triangle(double a, double b, double c, string color1, int isfilled2)
			:
				GeometricObject(color1, isfilled2)
	{
		s1 = a; 
		s2 = b;  
		s3 = c;
	}

		double getArea()
		{

			/*using herons formula*/

			double area;
			double halfarea = (( s1 + s3 + s3 ) / 2) ;
			area = sqrt(halfarea * ( halfarea - s1 ) * ( halfarea - s2 ) * ( halfarea - s3 ));
			return(area);

		}

		double getPerimeter()
		{
			double perimeter = ( s1 + s2 + s3);
			return(perimeter);
		}

		//not necessary
		float side1()
		{
			return(s1);
		}

		float side2()
		{
			return(s2);
		}

		float side3()
		{
			return(s3);
		}

};


int main()
{
	string trigcolor;

	int fill;

	double s1 , s2 , s3 ;

	cout << "Enter a color: ";
	cin >> trigcolor;
	cout << endl;
	cout << "Is triangle filled? (Enter 0/1)(1==True, 0==False) ";
	cin >> fill;
	cout << endl;
	cout << "Enter the 3 sides: ";

	cin >> s1;
	cin >> s2;
	cin >> s3;

	cout << endl;



	Triangle triangle(s1 , s2 , s3 , trigcolor , fill);

	/*perimeter*/
	cout << " Perimter: " << triangle.getPerimeter() << endl;

	/*area*/
	cout << "\n Area: " << triangle.getArea() << endl;

	/*color*/
	cout << " Color: " << trigcolor;


	if (fill == 1)
	{
		cout << "\n Tringle Filled: True";
        return(0);
	}
	else if (fill == 0 )
	{
		cout << "\n Triangle Filled: False";
        return(0);
	}
	else 
	{
		cout << "\n Triangle Filled: That is not a valid input, Try again!";
		exit(1);
	}


	return 0;
}


/*
   Output

   Enter a color: Blue

   Is triangle filled? (Enter 0/1)(1==True, 0==False) 1

   Enter the 3 sides: 4 5 6

Perimter: 15

Area: 13.8564
Color: Blue
Is triangle filled? True

 */
