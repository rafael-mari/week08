#include <stdio.h>

int count(int num, int *array, int lg); //Define the variables that will be used

int main()
{
	int array[100] = {1,2,3,4,3,4,2,4,6,5,7,5,0,9,6,4,5,2,3,5,7,8,5,6,4,5,7,8,9,7,5,5,4,3,3,5,4,5,6,8,7,9,9,7,6,5,4,4,3,3,9}; //I enter the value of all the numbers that I want, with a maximum amount that I define, in this case a maximum total of 100 numbers
	int num = 5; //I enter the number that I want to find within the array

	printf("The entered array has %d times the number %d\n", count(num, array, 100), num); //I show how many times the wanted number appears

	return 0;
}
int count(int num, int *array, int lg) //the same variables than before
{
	if (lg == 0) //If the value returns 0, come back to the beginning
		return 0;

	return (*array == num) + count(num, array+1, lg-1); // If the scanned number is equal to the wanted number I add 1 to the count
}
