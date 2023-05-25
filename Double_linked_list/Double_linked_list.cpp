#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int noMhs;
	string name;
	Node* next;
	Node* prev;
};

class DoubleLinkedList {
private:
	Node* START;
public:

	DoubleLinkedList();
	void addNode();
	bool search(int ro11No, Node** previous, Node** current);
	bool deleteNode(int ro11No);
	bool listEmpty();
	void ascending();
	void descending();
	void hapus();
	void searchData();
};