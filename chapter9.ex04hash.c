#include <stdio.h>
#include <string.h>

int stringtotal(char *string); 
void hex(int num);
char array1[1000];
char str1 [2000];
int main()
{
  printf("Enter an array\n"); //I ask for an array, it can be words, random letters, capital letters or numbers
  fgets(array1, sizeof(array1), stdin);
  sscanf(array1,"%[^\n]s",str1); //I read the entered array by the user

	hex(stringtotal(str1));
  //We now go to a function
	return 0;
}

int stringtotal(char *readstring) //We take the stored data to the function
{
	int count;
	int total = 0;

	for (count = 0; count < strlen(readstring); ++count) { //create a for loop reading every character until there isn't any
		total += str1[count];
	}
  //We finish this and go to the next and final function
	return total;
}

void hex(int result) //This is to assign a hash code for the entered array
{
	printf("%#x\n", result); //it shows the hash code of the entered array
}
