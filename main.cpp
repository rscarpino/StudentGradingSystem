#include<iostream>
#include "studentGrading.h"
using namespace std;



int main() {

	cout<<"------Welcome to the grade and gpa calculator!------"<<endl;
		
	int listSize=0;	
	Student *studentList= new Student[listSize];
	Course *courseList= new Course[listSize];
	
	//asks user for studentInfo
	studentInfo(studentList, listSize);
		
	//asks user for courseInfo	
	courseInfo(courseList, listSize);

	//calculations
	calcStudentGrade(courseList, listSize);		

	return 0;
}
