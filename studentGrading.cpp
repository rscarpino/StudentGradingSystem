#include"studentGrading.h"
#include<iostream>
using namespace std; 

void studentInfo(Student studentList[], int listSize) {

	Student s;

	cout<<"Please enter your name"<<endl;
	cin>>s.name;
	
	cout<<"Please enter your id"<<endl;
	cin>>s.id;

	cout<<"Please enter the number of courses"<<endl;
	cin>>s.numCourse;
}
	

void courseInfo(Course courseList[],int listSize) {

//Populate list
	for(int i = 0; i<listSize;i++)
	{
		cout<<"Enter course info "<<i+1<<" (info: name credit)"<<endl;
		Course c; //temp course
		cin>>c.nameCourse;
		cin>>c.credit;
		
		cout<<"Enter how many percent your grade weighs for: attendance assignment quiz exams"<<endl;
		cin>>c.attendance;
		cin>>c.assignment;
		cin>>c.quiz;
		cin>>c.exam;
		courseList[i] = c; //output course into list
		//int calcStudentGrade(Course courseList, int listSize);
	}
	
}


int calcStudentGrade(Course courseList[], int listSize) {
	
		
	Course c;

	courseInfo(courseList, listSize);
	
	int attendancePercent; 
	int attendanceScore; //attendanceScore- what student got 
	
	int assignmentPercent;
	int assignmentScore;
	
	int quizPercent;
	int quizScore;

	int examPercent;
	int examScore;

	cout<<"Enter your score for attendance. The result will be the percent of it in your grade"<<endl;		
	cin>>attendanceScore;
	attendancePercent=(attendanceScore*c.attendance)/100;
	
	cout<<"Enter your score for assignment. The result will be the percent of it in your grade"<<endl;		
	cin>>assignmentScore;	
	assignmentPercent=(assignmentScore*c.assignment)/100;

	cout<<"Enter your score for quiz. The result will be the percent of it in your grade"<<endl;		
	cin>>quizScore;	
	quizPercent=(quizScore*c.quiz)/100;
	
	cout<<"Enter your score for exams. The result will be the percent of it in your grade"<<endl;		
	cin>>examScore;	
	examPercent=(examScore*c.exam)/100;

	int overall;
	overall=examPercent+assignmentPercent+quizPercent+attendancePercent;
	
	cout<<overall<<endl;

	return 0; 
}

int displayStudentGrade(Course courseList[], int listSize) {
	
}
