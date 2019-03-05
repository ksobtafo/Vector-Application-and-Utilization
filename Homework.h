
/////////////////////////
// Ben Greenwood and Karen Sobtafo
// CS273 Project 2
// last date modified: 3/4/2019
/////////////////////////
#include <iostream>
#include  <vector>
#include <string>
#ifndef Homework_h
#define Homework_h
#include "Assignment.h"


using std::cout;
using std::endl;
using std::vector;
using std::string;
class Homework {

	vector<Assignment*> assignments;		//initializes and vector of assignment pointers

	void acceptAssignment(Assignment* assign)		//takes a assignment pointer and adds it to the vector of assignments
	{
		assignments.push_back(assign);
	}
	void removeAssignment(Assignment* assign)		//removes a specific assignmnet from the vector
	{
		for (int i = 0; i < assignments.size(); i++)		// iterates through the vector until the one that is supposed
		{													// to be deleted is found
		//if (assignments[i]->getName() == assign->getName())
		//	assignments.erase(i);
			cout << " place holder" << endl;
		}
	}
	void printAssignments() {
		for (int i = 0; i < assignments.size(); i++)
		{
			assignments[i]->displayInfo();
		}
	}

	int getNextDue()
	{
		int locationOfClosestDate = 0;
		for (int i = 0; i < assignments.size(); i++)
		{
			if (assignments[i]->getDueDate() < locationOfClosestDate)
				locationOfClosestDate = i;
		}
		return locationOfClosestDate;
	}

};
#endif