/* echo the user input */

#include<stdio.h>
#include<string.h>
int ARG_MAX = 2097152;
main()
{
  char cmd[ARG_MAX];
  int res;
  printf("Welcome to my shell\n");
  do {
    res = scanf("%s", cmd);
    if(res != EOF)
      printf("%s\n", cmd);
  } while (res != EOF && strcmp(cmd, "exit"));
}
