#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include "DateMac.h"
#include "ArrayTemplate.h"
using namespace std;


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(0, "");
    Date my_date = { 15, 8, 2000 };
    Date now; //0 0 0
	now.getNowDate();

	my_date.printDate();
	now.printDate();
	cout << "==============================\n";
	cout << my_date.toString() << endl;
	cout << my_date.toString("%y-%m-%d") << endl;
	cout << my_date.toString("%d %b %Y") << endl;
}