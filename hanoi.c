#include <stdio.h>

void hanoi(int n, int a, int b, int c) // we add the third par. (c)
{
  if (n == 1) 
    printf("move stone 1 from %d to %d\n", a, b);
  else
  {
    // move n-1 stone from a to c using b as support
    hanoi(n - 1, a, c, b); 

    // we move n-th stone from a to b
    printf("move stone %d from %d to %d\n", n, a, b); 

    // Move n-1 stones from c to b, using a as supporter
    hanoi(n-1, c, b, a); 
    
  }
}
//

int main()
{
  int n = 4;

  hanoi(n, 1, 2);
  return 0;
}
