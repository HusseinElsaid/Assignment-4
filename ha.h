#pragma once
#include "emp.h"

class ha
{
private:
	int s;
	emp** h;
	int cr;
public:
	ha(int n);
	int hash(emp e);
	void insert(emp e);
	void remove(emp e);
	void print();
	int colrate();
};

