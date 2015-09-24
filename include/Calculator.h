/*
 * Calculator.h
 *
 *  Created on: Aug 14, 2015
 *      Author: DEMO1
 */

#ifndef CALCULATOR_H_
#define CALCULATOR_H_

#include <iostream>
#include <string>
using namespace std;

class Calculator {
private:
	float firstNumber;
	float secondNumber;

public:

	// constructor with default values for data members
	Calculator(float a, float b, char calcOper){
		firstNumber= a;
		secondNumber= b;
		calcOper = '+';
	};

	// constructor with default values for data members
	Calculator(float d, float e){
		firstNumber= d;
		secondNumber= e;
	};


	Calculator(){
		firstNumber= 0;
		secondNumber= 0;
	};

    ~Calculator(){
		cout << "Calculator-Destructor Object is being deleted" << endl;
	};

	float getCalcResult(float a, float b, char calcOperation){
		float finalResult= 0;

		switch(calcOperation)
		{
		case '+':	finalResult= a + b;
					break;

		case '-':	finalResult= a - b;
					break;

		case '*':	finalResult= a * b;
					break;

		case '/':	if (b == 0){
						return -1;
					} else {
						finalResult= a / b;
					}
					break;

		default:	finalResult= -1;	// Bad operation
					break;
		}

		return finalResult;
	} // end of get calculation result
};  // end of class declaration

#endif /* CALCULATOR_H_ */
