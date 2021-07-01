#include <stdio.h>
#include <string.h>

int main(void) {
  char sen[1000]; //sentence
  char sen2[2000]; //sentence2
  
  printf("Enter a sentence.\n"); //I ask for the sentence
  fgets(sen, sizeof(sen), stdin); //It reads the sentence
  sscanf(sen,"%[^\n]s",sen2);
  int words = 0; //Variable for the amount of words
  printf("\nThe sentence: %s\n", sen2); //it prints again the sentence entered
words = amountwords(sen2);//it reads the sentence and returns an integer number
printf("Has the following amount of words: %d\n",words);
  } //It returns the amount of words


  int amountwords(char *sent)//I use the variable amountwords to define it, the asterisk in the variable sent is for it to read character by character the sentence.
   {
     int num = 0; //The number starts with the count in 0
char currentchar; //This variable is for the current character that the word has
char previouschar = ' '; //This is for the previous character of the word, it is a blank space
while (*sent != '\0') //while the variable sent is different from the last character
{
  currentchar=*sent;  //the asterisk reads the individual characters
 if (currentchar == ' ' && previouschar !=' '){
    num=num+1; //This restriction is for avoiding that if the user enter more than one space between two words the program doesn't read it as multiple words
  }
  previouschar = currentchar;
  sent++; //Each character is retrieved and returned
}
if (currentchar != ' '){
  num=num+1; //If in the final word there is no space at the end it still counts as another word
}
return num; 
  }
