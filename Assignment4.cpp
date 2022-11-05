#include <iostream>
#include "emp.h"
#include "ha.h"
#include "hl.h"
using namespace std;

int main() {
	emp mina("mina", 30, 10000, 4);emp fawzy("fawzy", 45, 5000, 8);
	emp yara("yara", 19, 2000, 0);emp mariam("mariam", 32, 8000, 2);
	emp ayman("ayman", 33, 4000, 8);emp roshdy("roshdy", 28, 9000, 3);
	emp aya("aya", 26, 6000, 3);emp abdallah("abdallah", 29, 7000, 4);
	emp fatma("fatma", 21, 4000, 1);
	ha h1(9);
	hl h2(9);
	h1.insert(mina); h1.insert(fawzy); h1.insert(yara); h1.insert(mariam);
	h1.insert(ayman); h1.insert(roshdy); h1.insert(aya); h1.insert(abdallah);
	h1.insert(fatma);
	h2.insert(mina); h2.insert(fawzy); h2.insert(yara); h2.insert(mariam);
	h2.insert(ayman); h2.insert(roshdy); h2.insert(aya); h2.insert(abdallah);
	h2.insert(fatma);
	h1.print();
	h2.print();
	return 0;
}