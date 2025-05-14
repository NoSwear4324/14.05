#pragma once
#include "Violation.h"

struct Driver {
	char name[100] = "";  //Ім'я водія
	char carNumber[10] = ""; //Номер автомобіля
	int size_viol = 0; //Кількість порушень = розмір масиву
	Violation* arr_viol = nullptr; //Список порушень = масив

	void fillDriver() {
		cout << "Введіть повне ім'я порушника: ";
		cin.getline(name, 100);
		cout << "Введіть номер автомобіля (AX0000AX): ";
		cin >> carNumber;

		cout << "Введіть інформацію по його порушенню: ";
		size_viol = 1;
		arr_viol = new Violation[1];
		arr_viol[0].fillViol();
	}

	void printDriver() {
		cout << "Водій: " << name << endl;
		cout << "Автомобіль: " << carNumber << endl;
		cout << "Порушеннь: " << endl;
		for (int i = 0; i < size_viol; i++)
		{
			cout << i + 1 << ". ";
			arr_viol[i].printViol();
		}
		cout << endl;
	}
};