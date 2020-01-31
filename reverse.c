#include <stdio.h>
#include <string.h>

// This program was written by Andrew Lawson

void reverse(char* argv);

int main(int argc, char *argv[]){
  int a;
  for(a = 1; a < argc; a++){
    printf("%s becomes ", argv[a]);
    reverse(argv[a]);
    printf("%s\n", argv[a]);
  }
  return 0;
}

void reverse(char* argv){
  char temp[100];
  int a;
  int len = strlen(argv);
  for(a = 0; a < len; a++){
    temp[a] = argv[strlen(argv) - (a+1)];
  }
  for(a = 0; a < len; a++){
    argv[a] = temp[a];
  }
  return;
}
