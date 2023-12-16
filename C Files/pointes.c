#include <stdio.h>

int main(){

  int age = 23;
  int *pAge = NULL;
  pAge = &age;

  int x = 2;
  int y = 5;

  int result  = y%x;


//  printf("address of age : %p \n", &age);
//  printf("value of age : %d \n", age);

//  printf("address of pAge : %p \n", pAge);
//  printf("value of pAge : %d \n", *pAge);
  printf("value of result : %d \n", result);


  return 0;
};