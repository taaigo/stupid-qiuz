#include <stdio.h>

void grader(int wins, int turns) {
  int perc = (wins * 100) / turns;
  printf("\nGood: %d\nBad: %d\nScore percentage: %d%\nTotal: %d\n\n", wins, turns - wins, perc, turns);
  if (perc < 1) {
    printf("Grade: Every single fucking question wrong\n");
  } else if (perc < 25) {
    printf("Grade: Stupid fucking idiot grade");
  } else if (perc < 50) {
    printf("Grade: Still fucking stupid but not idiot stupid\n");
  } else if (perc < 65) {
    printf("Grade: Very bad lol\n");
  } else if (perc < 80) {
    printf("Grade: OK, just decent\n");
  } else if (perc < 90) {
    printf("Grade: Alright.\n");
  } else if (perc < 100) {
    printf("Grade: Almost everything, really good!\n");
  } else if (perc == 100) {
    printf("Grade: ALL PERFECT! (still tho don't forget you are in idiot mode)\n");
  }
}
