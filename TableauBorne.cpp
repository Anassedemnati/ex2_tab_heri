#include "TableauBorne.h"

TableauBorne::TableauBorne(int ta, float boi, float bos) : Tableau(ta)
{
	this->borne_inf = boi;
	this->borne_sup = bos;
}
