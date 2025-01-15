#include "Maths.h" 

int add(int number1, int number2)
{
	return number1 + number2;
}
int subtr(int number1, int number2)
{
	return number1 - number2;
}
int multi(int number1, int number2)
{
	return number1 * number2;
}
int delen(int number1, int number2)
{
	return number1 / number2;
}
int power(int number1, int number2)
{
	int s = 1;
	for (int i = 1; i <= number2; i++)
	{
		s = s * number1;
	}
	return s;
}