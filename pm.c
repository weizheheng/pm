#include <stdio.h>
#include <string.h>
#include "create_project/create.h"
#include "add_feature/add_feature.h"
#include "add_tag/add_tag.h"

int main( int argc, char *argv[] ) {

  if ( strcmp(argv[1], "create_project") == 0 ) {
    if ( argv[2] != NULL ) {
      create_project(argv[2]);
    } else {
      printf("Pass a second argument as the project name\n");
      return 1;
    }
  } else if ( strcmp(argv[1], "add_feature") == 0 ) {
    if (argv[2] != NULL) {
      add_feature(argv[2]);
    } else {
      printf("Pass a second argument as the feature name\n");
      return 1;
    }
  } else if ( strcmp(argv[1], "add_tag") == 0 ) {
    if (argv[2] != NULL) {
      add_tag(argv[2]);
    } else {
      printf("Pass a second argument as the tag name\n");
      return 1;
    }
  }
}
