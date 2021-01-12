#pragma once
#include<iostream>
using namespace std;
class Tableau
{
public:
	Tableau(int);
	~Tableau();
	Tableau(const Tableau&);
	Tableau& operator=(const Tableau&);
	float& operator[](int);
	void m_print()const;
	void m_in();


protected:
	int taille;
	float* tab;
};

