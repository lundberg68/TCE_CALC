/*
 * Calculator.cpp
 *
 *  Created on: Aug 14, 2015
 *      Author: DEMO1
 */
#include "../include/Calculator.h"

float CalculatorInAction(float x, float y)
{
	char brks, meto;
	char opr;
	Calculator myCal(1.0,2.0);

	// Perform Add Operation
	opr = '+';
	return myCal.getCalcResult(x, y, opr);

} // End of Cal In Action

int main()
{
	float myValue = 0.0f;

	Calculator();					// Object Constructor
	Calculator(0.0, 0.0);
	Calculator myCal(1.0, 2.0);
	myValue = CalculatorInAction(3.0,4.0);
	Calculator(myValue,myValue);

	return 0;
}



