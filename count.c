#include <stdio.h>
#include <string.h>
#include <ctype.h>

void counts(char* str, int* upper, int* lower, int* digits);

int main(int argc, char* argv[]){

  FILE *fp = fopen(argv[1], "r");
  char str[100];
  fscanf(fp, "%s", str);
  while (!feof (fp)){
    int upper, lower, digit;
    counts(str, &upper, &lower, &digit);
    printf("%s has %d uppercase, %d lowercase, and %d digits\n", str, upper, lower, digit);
    fscanf(fp, "%s", str);
  }

  return 0;
}

void counts(char* str, int* upper, int* lower, int* digits){
  int a;
  *upper = 0;
  *lower = 0;
  *digits = 0;
  for(a = 0; a < strlen(str); a++){
    if(isupper(str[a])){
      *upper = *upper + 1;
    }
    else if(islower(str[a])){
      *lower = *lower + 1;
    }
    else if(isdigit(str[a])){
      *digits = *digits + 1;
    }
  }
  return;
}
