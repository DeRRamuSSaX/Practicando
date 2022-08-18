#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int jugar;
  FILE *fp;
  int c;
  char line[1000];
  while (1) {
    printf("Quieres jugar a la trivia?\n");
    printf("(1)Si.      (2)No. \n");
    scanf("%d", &jugar);
  }
  return 0;
}
