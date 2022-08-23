#include "stdafx.h"
#include "QuadraticEquation.h"
#include "AppIO.h"

int main(void)
{
	bool solvingIsRequested;

	QuadraticEquation quadraticEquation;
	EquationResult equationResult;
	EquationCoefficient equationCoefficient;
	AppIO	appIO;

	appIO.AppIO_print_startMessage(); // ���������� ��� ����
	solvingIsRequested = appIO.AppIO_input_solvingRequest(); 

	while (solvingIsRequested)
	{
		appIO.AppIO_input_equationCoefficient(&equationCoefficient); //������ ��� �Է�
		if (appIO.AppIO_input_quadraticTermlsZero(equationCoefficient)) { // �������� 0�̸� 2���������� �ƴ϶�� ����ϰ� 0�� �ƴϸ� �� ���
			appIO.AppIO_print_isNotQuadraticEquationMessage();
		}
		else {
			appIO.AppIO_print_equation(equationCoefficient.a, equationCoefficient.b, equationCoefficient.c);//�� ���

			if (!quadraticEquation.QuardraticEquation_calulateDisciminant(equationCoefficient)) { // ���� ���Ѵ�
				 // appIO.AppIO_print_noResultMessage(); //�̷��� �ϸ� �˼����� ����� ���� �׳� ����Ͽ���
				cout << "�ذ� �����ϴ�" << endl;
			}
			else {
				quadraticEquation.QuadraticEquation_calcuateQuadraticEquation(&equationCoefficient); //���ǰ��� ����
				equationResult = quadraticEquation.QuadraticEquation_calcuateQuadraticEquation(&equationCoefficient);
				appIO.AppIO_print_eqationResult(equationResult); //��� ���
			}
			
		}

		solvingIsRequested = appIO.AppIO_input_solvingRequest(); //�ݺ�
	}
	appIO.AppIO_print_endMessage(); //������ �޽��� ���

	return 0;
}