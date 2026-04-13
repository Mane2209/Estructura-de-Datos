#pragma once
#include <iostream>
#include "nodo.h"
using namespace std;
class pila
{
	nodo* inicio;
public:
	pila();
	void push();
	void pop();
	void show();
	void top();
	void size();
};

