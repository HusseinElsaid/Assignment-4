#include "hl.h"
hl::hl(int n) {
	s = n;
	h = new node*[n]{nullptr};
}
int hl::hash(emp e) {
	return e.getxp() % s;
}
void hl::insert(emp e) {
	int k = hash(e);
	if (h[k] == nullptr) {
		h[k] = new node{ e,nullptr };
	}
	else {
		cr++;
		node* q;
		q = h[k];
		while (q->next != nullptr) {
			q = q->next;
		}
		q->next = new node{ e,nullptr };
		
	}
}
void hl::remove(emp e) {
	int k = hash(e);
	node* q = h[k]->next;
	node* p = h[k];
	while (!(q->em == e)) {
		q = q->next;
		p = p->next;
	}
	p->next = q->next;
	delete(q);
}
void hl::print() {
	for (int i = 0; i < s; i++) {
		node* q = h[i];
		while (q != nullptr) {
			cout << "Name: " << q->em.getname() << " Age: " << q->em.getage() << " Salary: " << q->em.getsal() << " Experience: " << q->em.getxp() << endl;
			q = q->next;
		}
		delete(q);
	}
}
int hl::colrate() {
	return cr;
}