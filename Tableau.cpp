#include "Tableau.h"

Tableau::Tableau(int ta)
{
	this->taille = ta;
	this->tab = new float[ta];
	for (int i = 0; i < this->taille; i++)
	{
		this->tab[i] = 0;
	}
}

Tableau::~Tableau()
{
	delete[] this->tab;
	this->tab = 0;

}

Tableau::Tableau(const Tableau & tab)
{
	this->taille = tab.taille;
	this->tab = new float[this->taille];
	for (int i = 0; i < this->taille; i++)
	{
		this->tab[i] = tab.tab[i];
	}
}

Tableau& Tableau::operator=(const Tableau& ta)
{
	if (this != &ta) {
		this->taille = ta.taille;
		this->tab = new float[this->taille];
		for (int i = 0; i < this->taille; i++)
		{
			this->tab[i] = ta.tab[i];
		}

		return *this;


	}
	else
	{
		return *this;
	}
	
}

float & Tableau::operator[](int c)
{

	return this->tab[c] ;
}

void Tableau::m_print()const
{
	for (int i = 0; i < this->taille; i++)
	{
		cout << "[" << i << "]=" << this->tab[i] << endl;
	}
}

void Tableau::m_in()
{
	for (int i = 0; i < this->taille; i++)
	{
		cout << "donner la valeur ["<<i<<"]=" << endl;
		cin >> this->tab[i];
	}

}
