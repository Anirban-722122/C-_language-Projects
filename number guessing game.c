//creating a number guessing game//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int random,guess;
  int no_of_guess=0;
  srand(time(NULL));
printf("\n Welcome to the World of Guessing Numbers");
random= rand() % 100+1;//generating between 0 t0 100
do{
printf("\nplease Enter your guess between (0 to 100):");
scanf("%d",&guess);
no_of_guess++;

if(guess<random){
  printf("guess a larger number.\n");
}else if(guess>random){
  printf("guess a smaller number.\n");
}else{
  printf("congratulation you have successfully guessed the right number in %d attempts",no_of_guess);
}
}while(guess!= random);

printf("\n !!BYE,BYE!! Thanks For Playing this game");
printf("\n Developed By:Anirban Dey");




  return 0;
}