#include <stdio.h>
#include <string.h>

int main( int argc, char* argv[] ) {
  if ( argc == 1 ) {
    printf("Pass a second argument as the tag_name\n");
    return 0;
  }

  if ( argv[1] != NULL ) {
    // Add the implementation logic here
    printf("Creating tag: %s\n", argv[1]);
    return 0;
  } else {
    printf("Usage: ./add_feature feature_name");
    return 1;
  }
}
