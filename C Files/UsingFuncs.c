#include <stdio.h>

void birthday(char name[], int age)
{
  printf("\n happy birthday dear %s!", name);
  printf("\nyou are %d years old", age);

};

int main()
{
  char name[] ="daniel";
  int age = 23;

birthday(name, age);
  return 0;
};