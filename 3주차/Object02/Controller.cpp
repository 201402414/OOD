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

	appIO.AppIO_print_startMessage(); // 이차방적식 계산 시작
	solvingIsRequested = appIO.AppIO_input_solvingRequest(); 

	while (solvingIsRequested)
	{
		appIO.AppIO_input_equationCoefficient(&equationCoefficient); //이차항 계수 입력
		if (appIO.AppIO_input_quadraticTermlsZero(equationCoefficient)) { // 이차항이 0이면 2차방정식이 아니라고 출력하고 0이 아니면 식 출력
			appIO.AppIO_print_isNotQuadraticEquationMessage();
		}
		else {
			appIO.AppIO_print_equation(equationCoefficient.a, equationCoefficient.b, equationCoefficient.c);//식 출력

			if (!quadraticEquation.QuardraticEquation_calulateDisciminant(equationCoefficient)) { // 근을 구한다
				 // appIO.AppIO_print_noResultMessage(); //이렇게 하면 알수없는 요류가 떠서 그냥 출력하였음
				cout << "해가 없습니다" << endl;
			}
			else {
				quadraticEquation.QuadraticEquation_calcuateQuadraticEquation(&equationCoefficient); //근의공식 실행
				equationResult = quadraticEquation.QuadraticEquation_calcuateQuadraticEquation(&equationCoefficient);
				appIO.AppIO_print_eqationResult(equationResult); //결과 출력
			}
			
		}

		solvingIsRequested = appIO.AppIO_input_solvingRequest(); //반복
	}
	appIO.AppIO_print_endMessage(); //끝내는 메시지 출력

	return 0;
}