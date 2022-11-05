#include "emp.h"
emp::emp() {
	name = "";
	age = -1;
	sal = -1;
	xp = -1;
}
emp::emp(string n, int a, int s, int x) {
	name = n;
	age = a;
	sal = s;
	xp = x;
}
bool emp::operator == (emp e) {
	if (name == e.getname() && age == e.getage() && sal == e.getsal() && xp == e.getxp()) {
		return true;
	}
	return false;
}
void emp::setname(string n) {
	name = n;
}
void emp::setage(int a) {
	age = a;
}
void emp::setsal(int s) {
	sal = s;
}
void emp::setxp(int x) {
	xp = x;
}
string emp::getname() {
	return name;
}
int emp::getage() {
	return age;
}
int emp::getsal() {
	return sal;
}
int emp::getxp() {
	return xp;
}