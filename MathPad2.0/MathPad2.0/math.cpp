#include <iostream>
#include <string>
#include "math.h"
using namespace std;

// The data system.
int result;
int mathNum[3];	
int mode;
int opr;
char mathOp;
bool mathx = false;


// Used to clean the stuff out.
void clearMath ()
{
	result = 0; 
	mode = 1;
	mathNum[1] = 0;
	mathNum[2] = 0;
	opr = 0; 
	mathOp = 0;
	mathx = false;
};

// Sets the math.
void setMathSystem ()
{
	if(!mathx)
	{
		clearMath ();
		mathx = true;
	}
};

// Used to inject maths in the array.
int injectMath (int val)
{
	// This is here to make sure nothing breaks.
	if(mathNum[mode] >= 999999999)
	{
		return 0;
	}
	else
	{
	// Yeah this part might need some cleaning later.
	unsigned long long math1 = mathNum[mode];
	unsigned long long math2 = val;
	unsigned long long mathDX = stoull( to_string(math1) + to_string(math2) ) ;
	mathNum[mode] = mathDX;
	//setText(mathNum[mode]);
	return mathNum[mode];
	}
};

// The Mode function is used to change between numbers.
void setMode (int val)
{
	if(val == 1)
	{
		mode = 1;
	}
	if(val == 2)
	{
		mode = 2;
	}
};

// Sets the math op.
void setMathOp (char math)
{
	mathOp = math;
	setMode (2);
};

// Op system.
int process ()
{
	switch(mathOp)
	{
		case '+':
			result = mathNum[1] + mathNum[2];
		break;
		case '-':
			result = mathNum[1] - mathNum[2];
		break;
		case '*':
			result = mathNum[1] * mathNum[2];
		break;
		case '/':
			result = mathNum[1] / mathNum[2];
		break;
	}
	// Putting this here just in case.
	if(result >= 999999999)
	{
		return 0;
	}
	else
	{
		return result;
	}
};

