#pragma once
#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#ifndef STUDENTCOURSE_H_
#define STUDENTCOURSE_H_
using namespace std;

class StudentCourse
{
public:
	string id;
	string course;
	double credits;
	double score;
	inline void show();
	StudentCourse() { id = "0", course = "0"; }
	StudentCourse(string a, string b, double c, double d) :id(a), course(b), credits(c), score(d) {}
};
void StudentCourse::show() 
{
	cout << "course:" << course << endl;
	cout << "credits:" << credits << endl;
	cout << "score:" << score << endl;
}

#endif STUDENTCOURSE_H_
