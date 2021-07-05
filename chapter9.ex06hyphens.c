#include <stdio.h>
#include <string.h>
char bvb[200]; 
int main(void) //Define my global variables
{
    char st[400]; 
    printf("Enter an array using hyphens (-):\n"); //I ask the user for an array using hyphens because that is what I want to replace
    fgets(st,sizeof(st),stdin);
    sscanf(st,"%[^\n]s",bvb);  //I read the array the user entered
    salto(bvb); //we take this to another block
}
    int salto(char *ext) //Extract and read character by character the array entered by the user
    {
    char replacesmthg;  
    char prev =' ';
    int m=0,n=0; 
    printf("Replacing hyphens with underscores: \n"); //It tells the user what the program is about to do
    while (*ext!='\0') 
    {
    replacesmthg=*ext; //read character by character the array entered by the user
      if(replacesmthg=='-'){ //If the character is a hyphen (-) do the following
        printf("_"); //print an underscore (_) wherever there is a hyphen 
      }
      else {printf("%c",replacesmthg);} //else, don't change anything
      ext++;
      
    }
    return 0;
    }
