#ifndef _CALCULATOR_HPP_
#define _CALCULATOR_HPP_
#include <iostream>
#include <Windows.h>
#include <string>
float number1 = 0;
float number2 = 0;
wchar_t znak = 0;
void Calculator(float number1, float number2, wchar_t znak) {
	std::wcout << L"\n\n\n\t\t\tВведите 1 число\n";
	std::wcin >> number1;
	std::wcout << L"\n\n\n\t\t\tВведите 2 число\n";
	std::wcin >> number2;
	std::wcout << L"\n\n\n\t\t\tВведите знак(+ - * /)\n";
	std::wcin >> znak;
	if (znak == L'*') {
		system("cls");
		std::wcout << number1 << " * " << number2 << " = " << number1 * number2 << L"\n";
	}
	else if (znak == L'/') {
		if (number1 == 0 || number2 == 0) {
			system("cls");
			std::wcout << L"\n\n\n\t\t\tДелить на 0 нельзя!!!\n\n\n";
		}
		system("cls");
		std::wcout << number1 << " / " << number2 << " = " << number1 / number2 << L"\n";
	}
	else if (znak == L'+') {
		system("cls");
		std::wcout << number1 << " + " << number2 << " = " << number1 + number2 << L"\n";
	}
	else if (znak == L'-') {
		system("cls");
		std::wcout << number1 << " - " << number2 << " = " << number1 - number2 << L"\n";
	}
	else {
		system("cls");
		std::wcout << L"\n\n\n\t\t\tНеправильный знак!!!\n\n\n\n\n";
	}
}

#endif // !_CALCULATOR_HPP_