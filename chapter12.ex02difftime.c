#include <stdio.h>
#include <string.h>
struct time {
   int hour; //hours
   int min; //minutes
};

void DiffTime(struct time t1, struct time t2, struct time *diff);
//Difference between the 2 times

int main() {
  char bvb[1000]; //for the fgets and sscanf
  int m; // total minutes
  struct time iTime, fTime, diff; //initial time, final time, difference between those times

   printf("Enter the largest time in this format HH:MM \n"); //I ask for the largest time
   fgets(bvb, sizeof(bvb), stdin); //I read it
   sscanf(bvb,"%d:%d",&iTime.hour,&iTime.min);

   printf("Enter the smallest time in this format HH:MM \n"); //I ask for the smallest time
   fgets(bvb, sizeof(bvb), stdin); // I read it
   sscanf(bvb,"%d:%d",&fTime.hour,&fTime.min);

   DiffTime(iTime, fTime, &diff); //The variable difference between those times
   printf("\nDifference: %dh:%dm - ", iTime.hour, iTime.min);
   printf("%dh:%dm ", fTime.hour, fTime.min);
   printf("= %dh:%dm\n", diff.hour, diff.min); //These are the new values for hours and minutes

   m=diff.hour*60+diff.min; //I convert them into minutes only

   printf("In minutes this is %d min\n",m); //I show the total amount of minutes
               
   return 0;
}

void DiffTime(struct time tInitial, struct time tFinal, struct time *diff) {
   while (tFinal.min > tInitial.min) {
      --tInitial.hour;
      tInitial.min+=60; //while the final time minutes are bigger than the initial time minutes add 60 minutes to the initial time minutes and substract one hour from the initial time hours
   }
   diff->min = tInitial.min - tFinal.min; //The difference between the minutes
   diff->hour = tInitial.hour - tFinal.hour; //The difference between the hours
}
