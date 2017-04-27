// main
// file if-else03.c line 1
signed int main()
{
  signed int a;
  signed int b;
  signed int x=2;
  b = 2;
  x = 2;
  goto __CPROVER_DUMP_L1;
  b = 3;

__CPROVER_DUMP_L1:
  ;
  __CPROVER_assume(b == 2 || b == 3);
  a = b;
  return 0;
}

