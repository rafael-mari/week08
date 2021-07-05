/********************************************************
 * Ex12.1 -- Mailing list. *
 * *
 * Author: Rafael Marí. *
 * *
 * Purpose: Design a structure to hold the data for a mailing list. *
 * *
 * Usage: *
 * Run the program and the list with the data will appear. *
 ********************************************************/
#include <stdio.h>

int main()
{
	int size; //to check how many times we are going do the for loop
	int people; // counter of people

	struct list {
	char email[30];
	char name[50];
	char gender[20];
    	char major[50];
    	char number[40];
    	//The structure of the list of data
	};
  	//We enter the data of the members of the list
	struct list receiver[] = {
		{
		"2009083@upy.edu.mx",
		"Rafael Marí Reyna",
		"Male",
		"Computational Robotics Engineering",
      		"9992304870",
		},
		{
		"2009107@upy.edu.mx",
		"Jesus Irael Prado Pineda",
		"Male",
		"Computational Robotics Engineering",
      		"9991198737",
		},
    		{
		"2009084@upy.edu.mx",
		"Pablo Iván Martín Enriquez",
		"Male",
		"Computational Robotics Engineering",
     		"9994753579",
		},
    		{
		"2009138@upy.edu.mx",
		"Cesia Esther Tzuc Alonzo",
		"Female",
		"Embedded Systems Engineering",
		"9991678534",
 		}
		};

	size = sizeof(receiver) / sizeof //The number of persons that are in the mailing list
  (receiver[0]);

	for (people = 0; people < size; ++people) {
		printf("Person %d\n", (people + 1));
		printf("Email: %s\n", receiver[people].email);
		printf("Name: %s\n", receiver[people].name);
		printf("Gender: %s\n", receiver[people].gender);
		printf("Major: %s\n", receiver[people].major);
    printf("Phone number: %s\n",receiver[people].number);      
      //Doing a for loop it will keep showing the data of all the people whose information has been provided and stored within the program, until there is no more people there.
		printf("\n");
	}

	return 0;
}
