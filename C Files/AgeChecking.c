#include <stdio.h>

int main()
{
  char grade;

  printf("\nEnter a letter grade: ");
  scanf("%c", &grade);

  switch(grade){
    case 'A':
      printf("Perfect\n");
      break;
    case 'B':
      printf("You did good\n");
      break;
    case 'C':
      printf("You did Okey\n");
      break;
    case 'D':
      printf("At least its not an F!\n");
      break;
    case 'F':
      printf("You failed, damn\n");
      break;

    default: 
    printf("please enter only  valid grades");
  };

  return 0;
}