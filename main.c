#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "include/modes.h"

int main(int argc, char** argv) {
  srand(time(NULL));
  int r = rand();

  if (argc < 2) {
    printf("No arguments passed, defaulting to idiot mode\n\n");
    idiot_mode(r);
  }
  else {

  }
}
