#include<iostream>
#include<string>
#include<list>
#include<iterator>
#include "Cake.h"
#include "ReceipeCake.h"
using namespace std;

int main() {
	Cake* c;
	Cake* c2 = NULL;
	ReceipeCake* c1;
	c = new Cake("DragosD");
	c1 = new ReceipeCake("Dima", 5);
	cout << c1->getName() << endl;
	cout << c1->getTime() << endl;
	//c2 = (c1->cake("Dima", 5));
	*c2 = c1->cake("Ionut", 3);
	cout << c->getName();
	return 0;
}