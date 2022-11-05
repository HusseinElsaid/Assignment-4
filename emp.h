#pragma once
#include <iostream>
using namespace std;

class emp
{
private:
	string name;
	int age;
	int sal;
	int xp;
public:
	emp();
	emp(string n, int a, int s, int x);
	bool operator == (emp e);
	void setname(string n);
	void setage(int a);
	void setsal(int s);
	void setxp(int x);
	string getname();
	int getage();
	int getsal();
	int getxp();
};

