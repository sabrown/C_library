#include<stdio.h>

int main()
{
//Declare input variable
	float inputvalue;

//Read in the value input from the keyboard and screen
	system("clear");
	printf("Please input a numeric value: ");
	scanf("%f", &inputvalue);

//multiply the input value by 10 and print to the screen
	inputvalue = inputvalue*10;
	printf("Input Value x 10 = %f\n",inputvalue);
	
	const pi = 3.14159;
	char result;

//Select whether inputvalue is >, <, or = to pi
	printf("\nPlease select the correct answer:\n");
	printf("a)Greater than pi\n");
	printf("b)Less than pi\n");
	printf("c)Equal to pi\n");
	scanf("%c", &result);

/*check the value and print the correct message
	switch (result)
	{
	case 'a':
	if(inputvalue > pi) 
		{
		printf("Correct!\n");
		}
		break;
	case 'b':
	if(inputvalue < pi)
		{
		printf("Correct!\n");
		}
		break;
	case 'c':
	if(inputvalue = pi)
		{
		printf("Correct!\n");
		}
		break;
	default:
	printf("NOT correct!!\n");
	break;
	} */

/* Check the value against pi and change the output message accordingly
	if (inputvalue > 3.14159)
	{
		printf("The value is greater than PI.\n");
		printf("Closing program\n");
	}
	else
	{
		printf("The value is less than or equal to PI.\n");
		printf("Closing program\n");
	} */

	return 0;
}
