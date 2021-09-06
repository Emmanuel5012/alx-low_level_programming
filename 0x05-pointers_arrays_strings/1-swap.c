#include "main.h"

/**
 *swaps the values of two integers
 *@a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 */
void swap_int(int *a, int *b)
{
  int y = *a;
  *y = *a;
  *a = *b;
  *b = *y;
}
