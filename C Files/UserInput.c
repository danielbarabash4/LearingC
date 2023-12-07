#include <stdio.h>
#include <string.h>

int main()
{
  int age;
  char name[25];

  printf("\nWhats your name?\n");
  fgets(name,25,stdin);
  name[strlen(name)-1] = '\0';

  printf("How old are you?\n");
  scanf("%d", &age);

  printf("hello %s",name);
  printf("you are %d years old", age);
  
}