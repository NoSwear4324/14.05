#pragma once
#include "Date.h"

struct Violation
{
	Date date_viol;
	char info[100] = "";
	float fine = 0;


};