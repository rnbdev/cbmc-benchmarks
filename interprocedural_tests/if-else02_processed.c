#include <assert.h>

// assert
// file if-else02.c line 11 function main
signed int assert(void);

// main
// file if-else02.c line 1
signed int main()
{
  signed int x;
  signed int y;
  signed int z;
  signed int b;
  if(x == 2)
  {
    y = 2;
    x = 5;
  }

  else
  {
    x = 5;
    y = 3;
  }
  __CPROVER_assume(y == 2 || y == 3);
  z = y;
  __CPROVER_assume(z == 2 || z == 3);
  /* assertion z == 2 */
  assert(z == 2);
  return 0;
}

