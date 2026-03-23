#pragma once
#define MAX 10
#include <iostream>
#include <string>
using namespace std;

class Vector
{
private:
	string dato[MAX];
	int n;
public:
	Vector();
	void cargar(int tam);
	void mostrar();
	void setDato(int pos, string valor);
	string getDato(int pos) const;
	void setN(int tam);
	int getN() const;

};

