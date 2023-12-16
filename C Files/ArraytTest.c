#include <stdio.h>
#include <assert.h>

int stringToInt(const char *str) {

  int result = 0;
  int test = *str ;
  int test2 = '0';

if (*str >= '0' && *str <= '9')
  {
    printf("str is string :%s\n",str);
    printf("test is int :%d\n",test);
    printf("test2 is int of 0 :%d\n",test2);
    result = result * 10 + (*str - '0');
    str++;

  }
  return result;
}

/* I LOVE SOPHIA GORNOSTI */

int main()
{
  const char str[] = "1";
  int num = stringToInt(str);
  return 0;
}