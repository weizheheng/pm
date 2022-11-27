#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main( int argc, char *argv[] ) {
  if (argc == 1) {
    printf("Usage:\n");
    printf("pm create_project project_name\n");
    printf("pm add_feature feature_name\n");
    printf("pm add_tag tag_name\n");

    return 0;
  }

  if ( strcmp(argv[1], "create_project") == 0 ) {
    if ( argv[2] != NULL ) {
      char create_command[100] = "./create_project ";
      strcat(create_command, argv[2]);
      system(create_command);
    } else {
      printf("Pass a second argument as the project name\n");
      return 1;
    }
  } else if ( strcmp(argv[1], "add_feature") == 0 ) {
    if ( argv[2] != NULL ) {
      char add_feature_command[100] = "./add_feature ";
      strcat(add_feature_command, argv[2]);
      system(add_feature_command);
    } else {
      printf("Pass a second argument as the fetaure name\n");
      return 1;
    }
  } else if ( strcmp(argv[1], "add_tag") == 0 ) {
    if ( argv[2] != NULL ) {
      char add_tag_command[100] = "./add_tag ";
      strcat(add_tag_command, argv[2]);
      system(add_tag_command);
    } else {
      printf("Pass a second argument as the fetaure name\n");
      return 1;
    }
  }
}
