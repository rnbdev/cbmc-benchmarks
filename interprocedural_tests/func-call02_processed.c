// func
// file func-call02.c line 1
signed int func(signed int x);

// func
// file func-call02.c line 1
signed int func(signed int x)
{
  signed int k;
  __CPROVER_assume(k == 2 || k == 3);
  __CPROVER_assume((k == 2 || k == 3) && (x == 1 || x == 2 || x == 4 || x == 5 || x == 6));
  return k + x;
}

// main
// file func-call02.c line 7
signed int main()
{
  signed int a;
  signed int b;
  signed int x;
  signed int y;
  signed int z;
  __CPROVER_assume(a == 1 || a == 2);
  __CPROVER_assume(a == 1 || a == 2);
  x=func(a);
  __CPROVER_assume(b == 3 || b == 4);
  __CPROVER_assume(x == 3 || x == 4 || x == 5);
  y=func(1 + x);
  z = 1 + x;
  return 0;
}

