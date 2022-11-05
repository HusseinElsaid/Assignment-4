#include "ha.h"
ha::ha(int n) {
	s = n;
	h = new emp*[n]{nullptr};
	cr = 0;
}
int ha::hash(emp e) {
	return e.getxp() % s;
}
void ha::insert(emp e) {
	int k = hash(e);
	if (h[k] == nullptr) {
		h[k] = new emp(e);
	}
	else {
		int i = k + 1;
		while (i != k) {
			if (h[i] == nullptr) {
				h[i] = new emp(e);
				cr++;
				return;
			}
			i = (i + 1) % s;
		}
	}
}
void ha::remove(emp e) {
	for (int i = 0; i < s; i++) {
		if (*h[i] == e) {
			delete(h[i]);
			return;
		}
	}
}
void ha::print() {
	for (int i = 0; i < s; i++) {
		cout << "Name: " << h[i]->getname() << " Age: " << h[i]->getage() << " Salary: " << h[i]->getsal() << " Experience: " << h[i]->getxp() << endl;
	}
}
int ha::colrate() {
	return cr;
}