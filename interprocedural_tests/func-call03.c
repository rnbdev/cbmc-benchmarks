int func(int x, int y) {
  int z = 0;
  if(x == 2 && y == 3) {
    z = 5;
  } else {
    z = 6;
  }
  return z;
}

int main() {
  int a, b;
  a = 2; b = 3;
  a = func(a, b);
  b = func(a, b);
  b = func(a, b);
  return 0;
}
