#include <stdio.h>
int FindLargest(int Num1, int Num2)
{
  return (Num1 > Num2 ? Num1 : Num2);
}
int main(void)
{
  int i, MyArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}, LargeElement, ArraySize;
  ArraySize = sizeof(MyArray) / sizeof(MyArray[0]);
  for (i = 0; i < ArraySize; i += 2)
  {
    LargeElement = FindLargest(MyArray[i], MyArray[i + 1]);
    printf("%d ", LargeElement);
  }
  return 0;
}
