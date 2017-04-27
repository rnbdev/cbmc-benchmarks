int func(int x){
  int k;
  __CPROVER_assume(k == 2 || k == 3);
  return x + k;
}

int main(){
  int a, b, x, y, z;
  __CPROVER_assume(a == 1 || a == 2);
  x = func(a);
  __CPROVER_assume(b == 3 || b == 4);
  y = func(x+1);
  z = x + 1;
  return 0;
}
