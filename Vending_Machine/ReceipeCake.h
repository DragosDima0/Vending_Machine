#pragma once
#include<string>
#include "Cake.h"
using namespace std;

class ReceipeCake
{
private:
	string name;
	int time;

public:
	ReceipeCake(string, int);
	Cake cake(string, int);
	string getName();
	int getTime();
};

