int func(int a) {
  int z;
  z = a + 2;
  return z;
}

int main() {
  int x, y, b, c;
  x = 3;
  y = func(x);
  y = func(y);
  y = func(y);
  return 0;
}
