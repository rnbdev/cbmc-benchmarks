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
    x = func(x);
  }
  z = x;
  y = w;
  x = t;
}
