int func(int a) {
  int z = a + 1;
  return z;
}

int main() {
  int x, y, z, w, t;
  // __CPROVER_assume((x == 0 || x == 1));
  x = 0;
  w = 0;
  for(t = 0;t < 5;t++) {
    if(z>5)
      x = func(x);
    else
      x = func(x + 1);
  }
  z = x;
  y = w;
  x = t;
}
