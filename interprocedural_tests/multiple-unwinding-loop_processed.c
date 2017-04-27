// main
// file multiple-unwinding-loop.c line 1
signed int main()
{
  signed int a0;
  signed int a1;
  signed int a2;
  signed int a3;
  signed int a4=0;
  a3 = 0;
  a2 = 0;
  a1 = 0;
  a0 = 0;
  signed int i=0;
  for( ; !(i >= 5); i = 1 + i)
  {
    __CPROVER_assume(a3 == 0 || a3 == 1);
    if(a3 == 1)
      a4 = 1;

    if(a2 == 1)
      a3 = 1;

    __CPROVER_assume(a1 == 0 || a1 == 1);
    if(a1 == 1)
      a2 = 1;

    if(a0 == 1)
      a1 = 1;

    a0 = 1 + a0;
  }
}

