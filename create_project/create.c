#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>

int create_project( char* project_name ) {
  if (mkdir(project_name, 0777) == 0) {
    // Create file structures
    chdir(project_name);
    mkdir("bin", 0777);
    mkdir("docs", 0777);
    mkdir("lib", 0777);
    mkdir("src", 0777);
    mkdir("tests", 0777);
    chdir("..");
    // Git initialize the repo
    char git_command[100] = "git init ";
    strcat(git_command, project_name);
    system(git_command);

    return 0;
  } else {
    printf("Error creating directory");
    return 1;
  }
}
