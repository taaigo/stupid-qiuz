#include <stdio.h>
#include <stdlib.h>
#include "include/func.h"

char gen_opr() {
  int opr_int = rand() % 100;
  if (opr_int < 75) {
    return '+';
  } else {
    return '-';
  }
}

int calc_ans(int n1, int n2, char opr) {
  if (opr == '+') {
    return n1 + n2;
  } else {
    return n1 - n2;
  }
}

int check_answer(int* nums, int turns) {
  int wins = 0;
  for (int i = 0; i < turns * 2; i++) {
    if (i % 2 == 0) {
      i++;
    }
    int buffer;
    int n1 = nums[i];
    int n2 = nums[i + 1];
    char opr_char = gen_opr();
    calc_ans(n1, n2, opr_char);
    int ans = calc_ans(n1, n2, opr_char);
    printf("%d %c %d = ", n1, opr_char, n2);
    scanf("%d", &buffer);
    if (buffer == ans) {
      printf("nice!\n");
      wins++;
    } else {
      printf("fucking idiot\n");
    }
  }
  return wins;
}

void idiot_mode(int r) {
  int turns;
  int loopon = 0;

  printf("How many questions do you want to get?\n(int): ");
  while (loopon == 0) {
    scanf("%d", &turns);
    if (turns < 1) {
      printf("You need at minimum 1 question\n(int): ");
    } else if (turns > 1046999) {
      printf("The maximum is 1046999\n(int): ");
    } else {
      loopon = 1;
    }
  }
  int nums[turns * 2] = {};
  for (int i = 0; i < turns * 2 + 1; i++) {
    srand(r + i * 346474353 + 100 * 243238263 / 7 / r);
    int ran = rand() % 11;
    nums[i] = ran;
  }
  int wins = check_answer(nums, turns);
  grader(wins, turns);
  return;
}
