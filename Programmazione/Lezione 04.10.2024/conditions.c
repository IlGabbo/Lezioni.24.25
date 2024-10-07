#include <stdio.h>
#include <stdbool.h>

bool checkEquality(int _a1, int _a2) {
  if (_a1 == _a2) {
    return true;
  }
  return false;
}

bool checkGreater(int _a1, int _a2) {
  if (_a1 > _a2) {
    return true;
  }
  return false;
}

int main() {
  int num1 = 0;
  int num2 = 0;

  printf("Enter two numbers: \n");
  scanf("%d%d", &num1, &num2);

  bool equal = checkEquality(num1, num2);
  if (equal) {
    printf("The numbers are equal\n");
  } else {
    printf("The numbers are not equal\n");
    printf("The first number is %s than the second number\n", checkGreater(num1, num2) ? "greater" : "not greater");
  }
}
