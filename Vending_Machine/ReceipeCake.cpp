#include "ReceipeCake.h"
#include "Cake.h"

string ReceipeCake::getName()
{
	// TODO: Add your implementation code here.
	return this->name;
}

int ReceipeCake::getTime() {
	return this->time;
}

Cake ReceipeCake::cake(string name, int time) {
	return new Cake(name);
}

ReceipeCake::ReceipeCake(string name, int time) {
	this->name = name;
	this->time = time;
}