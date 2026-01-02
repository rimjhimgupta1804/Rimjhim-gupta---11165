#include <stdio.h>

int main(){
  int n = 25;
  int count = 5;
  int find;

  printf("welcome to guess the number game\n");
  printf("you will get %d chances to guess the number\n",count);
  
  for(int i = 1;i<=count;i++){
    printf("enter your number\n");
    scanf("%d",&find);
    
    if(find == n){
      printf("WOAHHOOO U GUESSED IT RIGHT 😁\n");
      return 0;
    }
    else if(find>n){
      printf("HINT : guess a smaller number\n");
    }
    else{
      printf("HINT : guess a larger number\n");
    }
    if(i==count){
      printf("You have exhausted all the attempts, better luck next time , THE NUMBER WAS %d😔🥹",n);
    }
  }
  return 0;
}