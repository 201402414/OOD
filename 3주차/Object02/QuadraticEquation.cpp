#include "stdafx.h"
#include "QuadraticEquation.h"

bool QuadraticEquation::QuardraticEquation_calulateDisciminant(EquationCoefficient equation_coefficient)
{
	if (((equation_coefficient.b*equation_coefficient.b)-4*(equation_coefficient.a*equation_coefficient.c)) < 0) {
		return false;
	} //판별식이 0보다 작으면 false로 리턴
}

EquationResult QuadraticEquation::QuadraticEquation_calcuateQuadraticEquation(EquationCoefficient* equation_coefficient)
{
	EquationResult result;
	double d = ((equation_coefficient->b) * (equation_coefficient->b)) - (4.0 * (equation_coefficient->a)*(equation_coefficient->c));
	result.result1 = (-(equation_coefficient->b) + sqrt(d)) / (2.0 * (equation_coefficient->a));
	result.result2 = (+(equation_coefficient->b) + sqrt(d)) / (2.0 * (equation_coefficient->a));
	
	return result; // 근의공식;
}