﻿#include"BinaryTree.h"

int main() {

	//there are no equal elements in binary tree!!!
	Btree<int> t;
	//t.add(1);//structure depends on root, because this btree is unbalanced
	t.add(5);
	t.add(3);
	t.add(2);
	t.add(4);
	t.add(6);
	t.add(7);
	//t.add(1);

	t.print();

	//cout << endl;
	//cout << t.search(100) << endl;
	//cout << t.search(12) << endl;

	//cout << t.search(7) << endl;
	//cout << t.search(6) << endl;
	//cout << t.search(4) << endl;
	//cout << t.search(2) << endl;
	//cout << t.search(3) << endl;
	//cout << t.search(5) << endl;

	//cout << t.search(0) << endl;
	//cout << t.search(1) << endl;

	//cout << endl << endl;
	////returning pointer
	//cout << t.search_ptr(100) << endl;
	//cout << t.search_ptr(12) << endl;

	//cout << t.search_ptr(7) << endl;
	//cout << t.search_ptr(6) << endl;
	//cout << t.search_ptr(4) << endl;
	//cout << t.search_ptr(2) << endl;
	//cout << t.search_ptr(3) << endl;
	//cout << t.search_ptr(5) << endl;

	//cout << t.search_ptr(0) << endl;
	//cout << t.search_ptr(1) << endl;

	cout << endl << "DELETE" << endl;
	//t.del(5);
	t.del(3);
	t.del(2);
	t.del(6);
	t.del(4);

	t.del(5);
	t.del(7);
	//t.del(5);

	t.print();
	//t.~Btree(); //почему явный вызов деструктора конфликтует, т.е. является повторным после неявного?

	system("pause");
	return 0;
}