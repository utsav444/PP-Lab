#include <stdio.h>

struct complex
{
	float real;
	float imag;
};

struct 	complex add(struct complex a1, struct complex a2)
{
	struct complex result;
	result.real = a1.real + a2.real;
	result.imag = a1.imag + a2.imag;
	
	return result;
}

struct complex sub(struct complex a1, struct complex a2)
{
	struct complex result;
	result.real = a1.real - a2.real;
	result.imag = a1.imag - a2.imag;
	
	return result;
}

struct complex mult(struct complex a1, struct complex a2)
{
	struct complex result;
	result.real = (a1.real*a2.real) - (a1.imag*a2.imag);
	result.imag = (a1.real*a2.imag) - (a1.imag*a2.real);
	
	return result;
}

struct complex div(struct complex a1, struct complex a2)
{
	struct complex result;
	result.real = (a1.real*a2.real + a1.imag*a2.imag) / (a2.real*a2.real + a2.imag*a2.imag);
	result.imag = (a2.imag*a2.real - a1.real*a2.imag) / (a2.real*a2.real + a2.imag*a2.imag);
	
	return result;
}

int main()
{
	struct complex a1, a2, result;
	int n;
	{
		printf("Enter Real Part of 1st Number : ");
		scanf("%f", &a1.real);
		printf("Enter Imaginary Part of 1st Number :");
		scanf("%f", &a1.imag);
		printf("Enter Real Part of 2st Number : ");
		scanf("%f", &a2.real);
		printf("Enter Imaginary Part of 2st Number :");
		scanf("%f", &a2.imag);
		printf("\nEnter 1 for addition. \nEnter 2 for Substraction. \nEnter 3 for Multiplication. \nEnter 4 for Division. \nEnter 5 for Exiting the Program : ");
		scanf("\n%d", &n);
		
		switch(n)
		{
			case 1:
			result = add(a1,a2);
			break;
			case 2:
			result = sub(a1,a2);
			break;
			case 3:
			result = mult(a1,a2);
			break;
			case 4:
			result = div(a1,a2);
			break;
			case 5:
				exit(1);
			default:
				printf("\n Invalid Input. Try again");
				break;
		}
		printf("Result = %f + %fi", result.real, result.imag);
		return 0;
	}
}






	













































