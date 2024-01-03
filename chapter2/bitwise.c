#include <stdio.h>

int main(void)
{
  //Using conjuction and disjunction connectives

  /*Truth table for conjuction
  1 & 1 = True (1)
  1 & 0 = False (0)
  0 & 1 = False (0)
  0 & 0 = False (0)
  */

  printf("%d\n", 1 & 1); 
  printf("%d\n", 1 & 0); 
  printf("%d\n", 0 & 1); 
  printf("%d\n", 0 & 0);
  
  /*Truth table for disjunction
  1 | 1 = True (1)
  1 | 0 = True (1)
  0 | 1 = True (1)
  0 | 0 = False (0)
  */

  printf("%d\n", 1 | 1); 
  printf("%d\n", 1 | 0); 
  printf("%d\n", 0 | 1); 
  printf("%d\n", 0 | 0);
  
  /*Truth table for negation (two's complement bit model)
  ~ -1 = 0
  ~ 0 = -1
  */

  printf("%d\n", ~(-1));
  printf("%d\n", ~0);

 /*Shifting Left and Right
  1 << 1 (from 1 to 2)
  2 >> 1 (from 2 to 1)
 */

  printf("%d\n", 1 << 1);
  printf("%d\n", 2 >> 1);

  return 0;
}