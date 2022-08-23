#pragma once
#ifndef APPIO_H_
#define APPIO_H_

#include <iostream>
#include "QuadraticEquation.h"

using namespace std;

class AppIO
{
public:
	void AppIO_print_startMessage(void);

	void AppIO_print_endMessage(void);

	bool AppIO_input_solvingRequest(void);

	void AppIO_input_equationCoefficient(EquationCoefficient*equation_coefficient);

	bool AppIO_input_quadraticTermlsZero(EquationCoefficient equation_coefficient);

	void AppIO_print_equation(double a, double b, double c);

	void AppIO_print_eqationResult(EquationResult equation_result);

	void AppIO_print_isNotQuadraticEquationMessage(void);

	void AppIO_print_noResultMessage(void);

};
#endif