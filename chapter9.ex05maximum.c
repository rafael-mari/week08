#include <stdio.h>

int max(int *array, int length); //The variables I will be using within this program

int main()
{
	int numbers[10] = {3, 9, 4, 7, 2, 8, 12, 10, 1, 5};  //I define the amount of numbers and enter all of them to see which one is the maximum value
	
	printf("Maximum number = %d\n", max(numbers, 10)); //I print that the maximum number is equal to and then I show the maximum number among the ones that I input before

	return 0;
}

int max(int *array, int length) //The same variables than before
{
	int max = 0; // intialize maximum, defaults to 0
	int counter;

  //I create a for loop where, if a value is bigger than the previous value then the new value is now the maximum one, and it does it until there is not any other number.
	for (counter = 0; counter < length; ++counter) {
		if (array[counter] > max)
			max = array[counter];
	}

	return max;
}
