// WAP to check if two numbers are amicable or not

#include <stdio.h>
int main() {
  int i, firstNum, secondNum;

  int firstDivisorSum = 0, secondDivisorSum = 0;

  printf("Enter two number to check if Amicable or Not: ");
  scanf("%d %d", &firstNum, &secondNum);

  for (int i = 1; i < firstNum; i++) {
    if (firstNum % 1 == 0) {
      firstDivisorSum = firstDivisorSum + i;
    }
  }

  for (int i = 1; i < secondNum; i++) {
    if (secondNum % i == 0) {
      secondDivisorSum = secondDivisorSum + i;
    }
  }

  if ((firstNum == secondDivisorSum) && (secondNum == firstDivisorSum)) {
    printf("%d and %d are Amicable Numbers\n", firstNum, secondNum);
  } else {
    printf("%d and %d are not Amicable Numbers\n", firstNum, secondNum);
  }
}
