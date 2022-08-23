#include "stdafx.h"
#include "AppIO.h"

void	AppIO::AppIO_print_startMessage(void)
{
	cout << "::���������� ��� ����::" << endl;
}

void	AppIO::AppIO_print_endMessage(void)
{
	cout << "::���������� ��� ����::" << endl;
}
bool	AppIO::AppIO_input_solvingRequest(void)
{
	char input[100];
	bool result = false;

	cout << endl;
	cout << "������������ ����Ͻðڽ��ϱ�? �����Ϸ��� 'Y'/'y'/'��' �Է�: " << endl;
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
	else if (strcmp(input, "��") == 0)
	{
		result = true;
	}
	return result;
}

void AppIO::AppIO_input_equationCoefficient(EquationCoefficient*equation_coefficient)
{
	cout << "�������� ����� �Է��Ͻÿ�: ";
	cin >> equation_coefficient->a;
	cout << endl;

	cout << "�������� ����� �Է��Ͻÿ�: ";
	cin >> equation_coefficient->b;
	cout << endl;

	cout << "������� ����� �Է��Ͻÿ�: ";
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
		cout << "�߱�"<< equation_result.result1 <<"��/�� �ط� ������." <<endl;
	}
	else {
		cout << equation_result.result1 << "," << equation_result.result2 << "��/�� �ط� ���´�." << endl;
	}
}

void AppIO::AppIO_print_isNotQuadraticEquationMessage(void) 
{
	cout << "������������ �ƴմϴ�" << endl;
}

void AppIO_print_noResultMessage(void) 
{
	cout << "�ذ� �������� �ʽ��ϴ�." << endl;
}
