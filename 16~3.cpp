/*
CS216
Lab9
Due Dec 11
*/
#include <iostream>
#include "Course.h"
using namespace std;
Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
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

	if (numberOfStudents >= capacity){
		throw runtime_error("Error: Too many students");
	} 
	else 
	{
		students[numberOfStudents] = name;
		numberOfStudents++;
	}

}
void Course::dropStudent(const string& name)
{
	/*leave as is*/
}
string* Course::getStudents() const
{
	return students;
}
int Course::getNumberOfStudents() const
{
	return numberOfStudents;
}
