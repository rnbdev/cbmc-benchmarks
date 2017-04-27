// f
// file func-call-with-if.c line 1
signed int f(signed int a);

// f
// file func-call-with-if.c line 1
signed int f(signed int a)
{
  signed int b;
  signed int z;
  if(!(b == 0))
  {
    __CPROVER_assume(a == 2 || a == 3);
    return 10 + a;
    __CPROVER_assume(a == 2 || a == 3);
  }

  return 12 + a;
}

// main
// file func-call-with-if.c line 7
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
  y=f(x);
  __CPROVER_assume(y == 12 || y == 13 || y == 14 || y == 15);
  y = y;
  return 0;
}

