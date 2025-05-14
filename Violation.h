#pragma once
#include "Date.h"

struct  Violation
{
	Date date_viol;			
	char info[100] = "";	
	float fine = 0;			

	void fillViol() {
		cout << "Введіть дату порушення: (dd mm yyyy) ";
		cin >> date_viol.day >> date_viol.month >> date_viol.year;
		cout << "Введіть опис (максимум 99 символів): ";
		//Ігноруємо попередній символ ентер
		cin.ignore();
		cin.getline(info, 100);
		cout << "Введіть суму штрафу (грн.): ";
		cin >> fine;
	}
	void printViol() {
		cout << "\t" << date_viol.toString("%d.%m.%Y") << " Штраф: " << fine << " грн. => " << info << endl;
	}
};