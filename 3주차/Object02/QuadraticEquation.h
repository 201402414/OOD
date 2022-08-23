#pragma once
#ifndef QuadaticEquation_H_
#define QuadaticEquation_H_

#include <cmath>

typedef struct
{
	double result1, result2;
}EquationResult;

typedef struct
{
	double a, b, c;
}EquationCoefficient;

class QuadraticEquation
{
public:
	EquationResult	result;
	EquationCoefficient	coefficient;
public:
	bool	QuardraticEquation_calulateDisciminant(EquationCoefficient eqution_coefficient);
	EquationResult	QuadraticEquation_calcuateQuadraticEquation(EquationCoefficient* equation_coefficient);

};
#endif
