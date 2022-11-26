#include <stdio.h>
#include <string.h>
#include "create_project/create.h"

int main( int argc, char *argv[] ) {

  if ( strcmp(argv[1], "create_project") == 0 ) {
    if ( argv[2] != NULL ) {
      create_project(argv[2]);
    } else {
      printf("Pass a second argument as the directory name\n");
      return 1;
    }
  }
}
