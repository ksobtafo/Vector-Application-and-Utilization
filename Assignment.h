/////////////////////////
// Ben Greenwood and Karen Sobtafo
// CS273 Project 2
// last date modified: 3/4/2019
/////////////////////////
#include <iostream>
#include <vector>
#include <string>
#ifndef Assignment_h
#define Assignment_h

using std::cout;
using std::endl;
using std::string;
using std::to_string;
class Assignment {
private:
	int dueDate;
	string course;
	string name;
public:
	Assignment(string name_, string course_, int date)
	{
		dueDate = date;
		course = course_;
		name = name_;
	}
	void displayInfo()
	{
		cout << "Assignment name: " + name + ", course: " + course + ", due date: " + to_string(dueDate) << endl;
	}
	string getName() { return name; }
	int getDueDate() { return dueDate; }
	string getCourse() { return course; }

};

#endif
