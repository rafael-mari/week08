/********************************************************
 * Ex06 -- Help for spanish-learning students *
 * *
 * Author: Rafael Marí *
 * *
 * Purpose: Write a program which helps spanish-learning students to type characters they don't have in their keyboards, like the ñ, ¿, ¡ or the accent mark by replacing characters they do have (But aren't too necessary) with the wanted ones. *
 * *
 * Usage: *
 * Run the program, enter your text with the correct codes and the final text will appear  *
 ********************************************************/

#include <stdio.h>
#include <string.h>
char bvb[200]; 
int main(void) //Define my global variables
{
    char st[400]; 
    //I tell the user which character to type depending on the character they want
    printf("If you want a (ñ) write (~)\n");
    printf("If you want a (¿) write (_)\n");
    printf("If you want a (¡) write (|)\n");
    printf("If you want a (á) write ({)\n");
    printf("If you want a (é) write (})\n");
    printf("If you want a (í) write ([)\n");
    printf("If you want a (ó) write (])\n");
    printf("If you want a (ú) write (#)\n\n");
    printf("Enter a text using the code characters where needed:\n\n"); //I ask the user for their text
    fgets(st,sizeof(st),stdin);
    sscanf(st,"%[^\n]s",bvb);  //I read the array the user entered
    salto(bvb); //we take this to another block
}
    int salto(char *ext) //Extract and read character by character the array entered by the user
    {
    char replacesmthg;  
    char prev =' ';
    int m=0,n=0; 
    printf("\nYour final text is: \n\n"); //It tells the user what the program is about to do
    while (*ext!='\0') 
    {
    replacesmthg=*ext; //read character by character the array entered by the user
      if(replacesmthg=='~'){ //If the character is a (~) print a (ñ)
        printf("ñ");
      }
      else if(replacesmthg=='_'){ //If the character is a (_) print a (¿)
        printf("¿"); 
      }
      else if(replacesmthg=='|'){ //If the character is a (|) print a (¡)
        printf("¡"); 
      }
      else if(replacesmthg=='{'){ //If the character is a ({) print a (á)
        printf("á"); 
      }
      else if(replacesmthg=='}'){ //If the character is a (}) print a (é)
        printf("é"); 
      }
      else if(replacesmthg=='['){ //If the character is a ([) print a (í)
        printf("í"); 
      }
      else if(replacesmthg==']'){ //If the character is a (]) print a (ó)
        printf("ó"); 
      }
      else if(replacesmthg=='#'){ //If the character is a (#) print a (ú)
        printf("ú"); 
      }
      else {printf("%c",replacesmthg);} //else, don't change anything
      ext++;
      
    }
    return 0;
    }
