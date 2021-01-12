#pragma once
#include "Tableau.h"
class TableauBorne : public Tableau
{
public:
	TableauBorne(int, float, float);
	float& operator[](int)=delete;

private:
	float borne_inf;
	float borne_sup;
};

