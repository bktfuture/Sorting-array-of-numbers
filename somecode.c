#include <stdio.h>

void sorting(int numbers[], int size)  // return type is void ! because we are returning nothing
{
 for(int i = 0; i < size - 1; i++)
 {
      for(int j = 0; j < size  - i - 1; j++)
      {
       if(numbers[j] > numbers[j+1])     // +1  because we are checking the element directly after current element
       {
       int temp = numbers[j];
       numbers[j] = numbers[j+1];
       numbers[j+1] = temp;
       }
      }
 }

}
 /* size - 1, thus to that array starts with a 0
 Example:
Let int array[] = {9, 1, 8}, a list of size=3
In the loop, if u had strict inequality, "j" goes from 0 to 2, so when j=2, in the IF conditional u'd be saying:
if(array[2] > array[3])
But array[3] doesnt exist, so it'd present an error
  */
void printNumbers(int numbers[], int size)
{
 for(int i = 0; i < size; i++)
 {
     printf("%d ", numbers[i]);
 }
}

int main()
{
    int numbers[] = {5,4,9,7, 1,6,8};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    sorting(numbers, size);
    printNumbers(numbers, size);

    return 0;
}