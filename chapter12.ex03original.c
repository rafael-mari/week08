/********************************************************
 * Ex12.3 -- Registration list for COVID-19 vaccine. *
 * *
 * Author: Rafael Marí. *
 * *
 * Purpose: Design a structure to hold the data for a registration for the COVID-19 vaccine and shows the list of the people with their respective data. *
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
	char name[30];
	char curp[50];
	char gender[20];
  char age[50];
  char number[40];
  char email[50];
  char folio[40];
  //The structure of the list of data
	};
  //Enter the data of the members of the list
	struct list receiver[] = {
		{
		"Rafael Marí Reyna",
		"MARR020831HYNRYFA9",
		"Male",
		"18",
    "9992304870",
    "rafa.mari.rio@hotmail.com",
    "40395506",
		},
		{
		"Andrea Hernández Borja",
		"HEBA951027MYNRRD04",
		"Female",
		"26",
    "9991456780",
    "andyhebo@outlook.com",
    "39456032",
		},
    {
		"Enrique Pérez Valdéz",
		"PEVE810716HYNRLR02",
		"Male",
		"40",
    "9993345324",
    "henryperval@hotmail.com",
    "39230561",
		},
    {
		"Cecilia Sevilla Rodríguez",
		"SERC870212MYNVDC00",
		"Female",
		"34",
    "9999226734",
    "ceci-sevilla@gmail.com",
    "41247853",
		},
    {
		"Gabriel López Mendoza",
		"LOMG020116HYNPNB06",
		"Male",
		"19",
    "9993654356",
    "gabolome.10@gmail.com",
    "42546890",
		},
		};

	size = sizeof(receiver) / sizeof //The number of persons that are in the data of the volunteer who is registering
  (receiver[0]);

	for (people = 0; people < size; ++people) {
		printf("Person %d\n", (people + 1));
    printf("Name: %s\n", receiver[people].name);
    printf("CURP: %s\n", receiver[people].curp);
    printf("Gender: %s\n", receiver[people].gender);
    printf("Age: %s\n", receiver[people].age);
    printf("Phone number: %s\n",receiver[people].number);
		printf("Email: %s\n", receiver[people].email);
    printf("Folio: %s\n",receiver[people].folio);      
      //Doing a for loop it will keep showing the data of all the people whose information has been provided and stored within the program, until there is no more people there.
		printf("\n");
	}

	return 0;
}
