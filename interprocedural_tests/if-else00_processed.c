#include <assert.h>

// main
// file if-else00.c line 1
signed int main()
{
  signed int x;
  signed int y;
  signed int b;
  if(!(b == 0))
    x = 2;

  else
    x = 3;
  __CPROVER_assume(x == 2 || x == 3);
  /* 1 */
  assert(104 + x + y >= 1 || !(b == 0));
  /* 2 */
  assert((_Bool)1);
  __CPROVER_assume(x == 2 || x == 3);
  /* 3 */
  assert(y >= x ? y >= x : !(y >= x));
  return 0;
}

