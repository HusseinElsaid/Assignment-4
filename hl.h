#pragma once
#include "emp.h"
using namespace std;

class hl
{
private:
	struct node {
		emp em;
		node* next;
	};
	int s;
	node** h;
	int cr;
public:
	hl(int n);
	int hash(emp e);
	void insert(emp e);
	void remove(emp e);
	void print();
	int colrate();
};

