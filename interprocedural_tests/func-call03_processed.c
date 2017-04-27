// func
// file func-call03.c line 1
signed int func(signed int x, signed int y);

// func
// file func-call03.c line 1
signed int func(signed int x, signed int y)
{
  signed int z=0;
  if(x == 2 && y == 3)
    z = 5;

  else
    z = 6;
  __CPROVER_assume(z == 5 || z == 6);
  return z;
}

// main
// file func-call03.c line 11
signed int main()
{
  signed int a;
  signed int b;
  a = 2;
  b = 3;
  a=func(2, 3);
  __CPROVER_assume(a == 5 || a == 6);
  b=func(a, 3);
  b=func(a, 6);
  return 0;
}

