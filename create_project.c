#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>

int main( int argc, char* argv[] ) {
  if ( argc == 1 ) {
    printf("Pass a second argument as the project name\n");
    return 0;
  }

  if ( argc == 2 && argv[1] != NULL ) {
    if (mkdir(argv[1], 0777) == 0) {
      // Create file structures
      chdir(argv[1]);
      mkdir("bin", 0777);
      mkdir("docs", 0777);
      mkdir("lib", 0777);
      mkdir("src", 0777);
      mkdir("tests", 0777);
      chdir("..");
      // Git initialize the repo
      char git_command[100] = "git init ";
      strcat(git_command, argv[1]);
      system(git_command);

      return 0;
    } else {
      printf("Error creating directory");
      return 1;
    }
  } else {
    printf("Usage: ./create_project project_name");
    return 1;
  }
}
