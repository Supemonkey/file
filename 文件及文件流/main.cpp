#include<iostream>
#include<fstream>
#include<string>
#include"Student.h"
using namespace std;
void Creatfile(Student stu[])
{
	ofstream outfile("test.txt");
	outfile.write((char *)&stu,sizeof(stu[5]));
	outfile.close();
}

void display()
{

}

void Deletfile()
{

}
int main()
{
	Student stu[]={ Student("Zhang","001",18),
		         Student("Li","002",19),
		         Student("Liu","003",20),
		         Student("Hu","004",21),
		         Student("Sun","005",22) };
	Creatfile(stu);
}