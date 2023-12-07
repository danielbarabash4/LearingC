#include <stdio.h>
#include <stdbool.h>

int main(){

    printf("I like pizza \n");
    printf("its really good\n");
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");

    int x;
    x = 123;
    
    int age = 23;
    float gpa = 2.05;
    char grade = 'C';
    char name[] = "Daniel";

    printf("hello %s \n", name);
    printf("you %d age years old \n", age);
    printf("your average grade is %c \n", grade);
    printf("your gpa is %f", gpa);
    return 0;
}

int main();