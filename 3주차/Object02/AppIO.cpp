#include "stdafx.h"
#include "AppIO.h"

void	AppIO::AppIO_print_startMessage(void)
{
	cout << "::이차방정식 계산 시작::" << endl;
}

void	AppIO::AppIO_print_endMessage(void)
{
	cout << "::이차방정식 계산 종료::" << endl;
}
bool	AppIO::AppIO_input_solvingRequest(void)
{
	char input[100];
	bool result = false;

	cout << endl;
	cout << "이차방적식을 계산하시겠습니까? 수행하려면 'Y'/'y'/'예' 입력: " << endl;
	cout << ">>";
	cin >> input;

	if (strcmp(input, "Y") == 0)
	{
		result = true;
	}
	else if (strcmp(input, "y") == 0)
	{
		result = true;
	}
	else if (strcmp(input, "예") == 0)
	{
		result = true;
	}
	return result;
}

void AppIO::AppIO_input_equationCoefficient(EquationCoefficient*equation_coefficient)
{
	cout << "이차항의 계수를 입력하시오: ";
	cin >> equation_coefficient->a;
	cout << endl;

	cout << "일차항의 계수를 입력하시오: ";
	cin >> equation_coefficient->b;
	cout << endl;

	cout << "상수항의 계수를 입력하시오: ";
	cin >> equation_coefficient->c;
	cout << endl;
}

bool AppIO::AppIO_input_quadraticTermlsZero(EquationCoefficient equation_coefficient)
{
	bool result = false;

	if (equation_coefficient.a == 0)
	{
		result = true;
	}
	return result;
}

void AppIO::AppIO_print_equation(double a, double b, double c)
{
	bool iszero = true;
	if (a != 0) 
	{	iszero = false;
		cout << a << "x*x";	}
	if (b != 0)
	{
		if (b > 0) {
			cout << "+";
		}
			iszero = false;
			cout << b << "x";
		}
	if (c != 0) {
		if (c > 0) { cout << "+"; }
		iszero = false;
		cout << c;
	}
	cout << "=0" << endl;
}

void AppIO::AppIO_print_eqationResult(EquationResult equation_result) 
{
	if (equation_result.result1 == equation_result.result2) {
		cout << "중근"<< equation_result.result1 <<"을/를 해로 가진다." <<endl;
	}
	else {
		cout << equation_result.result1 << "," << equation_result.result2 << "을/를 해로 갖는다." << endl;
	}
}

void AppIO::AppIO_print_isNotQuadraticEquationMessage(void) 
{
	cout << "이차방정식이 아닙니다" << endl;
}

void AppIO_print_noResultMessage(void) 
{
	cout << "해가 존재하지 않습니다." << endl;
}
