#ifndef STUDENTGRADING_H
#define STUDENTGRADING_H
#include<string>

const int MaxNameLen = 128;

struct Student
{
	char name [MaxNameLen];
	unsigned long id;
	unsigned long numCourse;
};

struct Course
{
	unsigned short credit;
	
	int attendance; 
	int assignment;
	int quiz;
	int exam;
	char nameCourse [];

};

void studentInfo(Student studentList[], int listSize);
void courseInfo(Course courseList[],int listSize);
int calcStudentGrade(Course courseList[], int listSize);

#endif //STUDENTGRADING_H
