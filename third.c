#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int r1,r2,sum;
  char name[100];

  printf("Rolling the dice...\n");
  srand(time(NULL));
  r1 = rand() % 6 + 1;
  srand(time(NULL)*time(NULL));
  r2 = rand() % 6 + 1;

  printf("Die 1: %d\nDie 2: %d\n",r1,r2);

  sum = r1+r2;
  printf("Total value: %d\n",sum);
  if(sum > 7) printf("You won!\n");
  else printf("You lost!\n");

  return 0;
}
