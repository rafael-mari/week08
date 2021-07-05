#include <stdio.h>
#include <string.h>

int begins(char *string1, char *string2);

int main()
{
	char st1[1000]; /* first string */
	char st2[1000]; /* second string */

	printf("Enter first string:\n"); //I ask the user for the first string
	fgets(st1, sizeof(st1), stdin); //I read the string
	st1[strlen(st1)-1] = '\0'; 	//remove return line break input last character
	
	printf("Enter second string:\n"); //I ask the user for the second string
	fgets(st2, sizeof(st2), stdin); //I read the string
	st2[strlen(st2)-1] = '\0';

	if (begins(st1, st2) != 0) //if the the string 1 begins with the string 2 returns not 0, print that it does.
		printf("The first string starts with the second string\n");
	else //If it returns a 0 print that it doesn't starts with the second one. It returns 1 if string 1 starts with string 2
		printf("The first string doesn't start with the second string\n");

	return 0;
}

int begins(char *string1, char *string2)
{
	int counter;

	for (counter = 0; counter < strlen(string2); ++counter) {
		if (string1[counter] != string2[counter])
			return 0;
      //If string 1 is different from the string 2 return a 0
	}

	return 1;
}
