// func
// file func-call-in-if01.c line 1
signed int func(signed int a);

// func
// file func-call-in-if01.c line 1
signed int func(signed int a)
{
  signed int z;
  __CPROVER_assume(a == 3 || a == 4 || a == 5 || a == 6);
  z = 2 + a;
  return z;
}

// main
// file func-call-in-if01.c line 7
signed int main()
{
  signed int x;
  signed int y;
  signed int b;
  signed int c;
  x = 3;
  if(!(b == 0))
    y=func(3);

  else
    y=func(4);
  __CPROVER_assume(y == 5 || y == 6);
  y=func(y);
  return 0;
}

