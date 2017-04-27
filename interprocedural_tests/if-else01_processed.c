// main
// file if-else01.c line 1
signed int main()
{
  signed int x;
  signed int y;
  signed int b;
  signed int c=5;
  if(!(b == 0))
    x = 2;

  else
    x = 3;
  if(!(b == 0))
    y = 10;

  else
    y = 13;
  __CPROVER_assume((x == 2 || x == 3) && (y == 10 || y == 13));
  b = 5 + x + y;
  __CPROVER_assume(b == 17 || b == 18 || b == 20 || b == 21);
  x = b;
  y = 5;
  return 0;
}

