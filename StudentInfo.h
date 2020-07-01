#pragma once
#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#ifndef STUDENTINFO_H_
#define STUDENTINFO_H_
using namespace std;

class Date
{
public:
	string year;
	string month;
	string day;
	Date() { year = "2001", month = "1", day = "1"; }
	Date(string y,string m,string d):year(y),month(m),day(d){}
	~Date(){}
    inline void print();
};
 
void Date::print()
{
	cout << year << "/" << month << "/" << day;
}

class StudentInfo
{
public:
	string name;
	string sex;
	Date birthday;
	string id;
	string school_year;
	string birthday_place;
	StudentInfo(){}
	StudentInfo(string n,string s,Date b,string i,string sy,string bp):name(n),sex(s),birthday(b),id(i),school_year(sy),birthday_place(bp){}
	~StudentInfo() {}
	inline void show();
};

void StudentInfo::show() 
{
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
	cout << "birthday:";
	birthday.print();
	cout << "id:" << id << endl;
	cout << "schoolyear:" << school_year << endl;
	cout << "birthplace:" << birthday_place << endl;
}

#endif STUDENTINFO_H_