#pragma once
#include<iostream>
#include"Student.h"
#include<fstream>
using namespace std;

int main()
{
	ifstream SC;
	SC.open("StudentCourse.txt");
	ifstream SI;
	SI.open("StudentInfo.txt");
	Student s;
	s.readinfo(SI);
	s.readcourse(SC);
	s.SortbyId();
	s.find();
	return 0;
}