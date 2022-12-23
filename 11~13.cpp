/*
   Excersie 11.13(Course.cpp)
PROMPT:
-When adding a new student to course, if array capacity is exceeded, increase the array size
by creating a new larger array and copying the contents of the current array to it.
-Implement the dropStudent function.
-Add a new function named clear() that removes all students from the course. 
-Implement the destructor and copy constructor to perform a deep copy in the class
 */

~~~~~~~~~Course.h~~~~~~~~~~~

#ifndef COURSE_H
#define COURSE_H
#include <string>

using namespace std;
class Course{
    
    public:
        Course(const string &courseName,int capacity);
        //copy constructor
        Course(const Course &c);
        ~Course();
        string getCourseName() const;
        void addStudent(const string& studentName);
        void dropStudent(const string& studentName);
        string* getStudents() const;
        int getNumberOfStudents() const;
        //clear method
        void clear();

    private:
    string courseName;
    string* students;
    int numberOfStudents;
    int capacity;
};

#endif

~~~~~~~~~Course.cpp~~~~~~~~~~~~

#include <iostream>
#include "Course.h"

using namespace std;

Course::Course(const string &courseName,int capacity)
{
	this->numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	this->students = new string[capacity];
}


//copy constructors
Course::Course(const Course &c)
{
	this->numberOfStudents = c.numberOfStudents;
	this->courseName = c.courseName;
	this->capacity = c.capacity;
	this->students = c.students;

}

Course::~Course()
{
	delete [] students;
}

string Course::getCourseName() const
{
	return courseName;
}

void Course::addStudent(const string& name)
{
	//increasing the capacity and array size , if array capacity is exceeded 
	if(numberOfStudents == capacity)
	{
		capacity = capacity * 2;
		string* newStudentsArray = new string[capacity]; //create student array with double the current capacity
		for(int i=0;i<capacity/2;i++){
			newStudentsArray[i] = students[i];
		}
		students = newStudentsArray;
	}

	students[numberOfStudents] = name;
	numberOfStudents++;
}

void Course::dropStudent(const string& name)
{
	// Search name in array
	int i;
	for (i=0; i<numberOfStudents; i++)
		if (students[i] == name)
			break;

	// If name found in array
	if (i < numberOfStudents)
	{
		// reduce size of array and move all
		// elements on space ahead
		numberOfStudents = numberOfStudents - 1;
		for (int j=i; j<numberOfStudents; j++)
			students[j] = students[j+1];
	}
}

string* Course::getStudents() const
{
	return students;
}

int Course::getNumberOfStudents() const
{
	return numberOfStudents;
}

//clear function - deletes the names in students array
void Course::clear()
{
	for(int i=0;i<numberOfStudents;i++)
	{
		delete (students+i);
	}
}


~~~~~~~~~~main.cpp~~~~~~
#include<iostream>
#include"Course.cpp"
#include"Course.h"

int main()
{
	const string courseName = "Mathematics";
	//create course
	Course *course = new Course(courseName,30);

	//adding one student
	course->addStudent("Alexander the Great");

	//adding second student
	course->addStudent("Benjamin Franklin");

	//adding third student
	course->addStudent("John HanCock");

	//drop jerry
	course->dropStudent("George Washington");

	//display students 
	string* students = course->getStudents();
	int numberOfStudents = course->getNumberOfStudents();

	for(int i=0;i<numberOfStudents;i++){
		cout << students[i]<< endl;
	}
}

