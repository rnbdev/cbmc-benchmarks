// func
// file loop-with-function-call.c line 1
signed int func(signed int a);

// func
// file loop-with-function-call.c line 1
signed int func(signed int a)
{
  signed int z=1 + a;
  return z;
}

// main
// file loop-with-function-call.c line 6
signed int main()
{
  signed int x;
  signed int y;
  signed int z;
  signed int w;
  signed int t;
  x = 0;
  w = 0;
  t = 0;
  for( ; !(t >= 5); t = 1 + t)
    x=func(x);
  z = x;
  y = 0;
  x = t;
}

