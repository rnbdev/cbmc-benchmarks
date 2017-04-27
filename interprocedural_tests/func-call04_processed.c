// func
// file func-call04.c line 1
signed int func(signed int p);

// func
// file func-call04.c line 1
signed int func(signed int p)
{
  signed int k;
  __CPROVER_assume(p == 2 || p == 3 || p == 4);
  k = 1 + p;
  __CPROVER_assume(k == 3 || k == 4 || k == 5);
  return k;
}

// main
// file func-call04.c line 6
signed int main()
{
  signed int x;
  signed int y;
  signed int z;
  if(!(y == 0))
    x = 2;

  else
    x = 3;
  if(!(y == 0))
    y = 3;

  else
    y = 4;
  __CPROVER_assume(y == 3 || y == 4);
  z=func(y);
  __CPROVER_assume(x == 2 || x == 3);
  y=func(x);
  __CPROVER_assume(y == 3 || y == 4);
  z = y;
  return 0;
}

