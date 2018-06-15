#pragma once
#include<string>
using namespace std;

class Student
{
public:
	Student(string name, string Id, int age);
	~Student();
private:
	string name;
	string Id;
	int age;
};

