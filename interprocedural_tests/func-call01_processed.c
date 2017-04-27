// func
// file func-call01.c line 1
signed int func(signed int a);

// func
// file func-call01.c line 1
signed int func(signed int a)
{
  signed int z;
  __CPROVER_assume(a == 3 || a == 5 || a == 7);
  z = 2 + a;
  return z;
}

// main
// file func-call01.c line 7
signed int main()
{
  signed int x;
  signed int y;
  signed int b;
  signed int c;
  x = 3;
  y=func(3);
  y=func(5);
  y=func(7);
  return 0;
}

