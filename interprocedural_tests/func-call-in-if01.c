int func(int a) {
  int z;
  z = a + 2;
  return z;
}

int main() {
  int x, y, b, c;
  x = 3;
  if(b)
    y = func(x);
  else
    y = func(x+1);
  y = func(y);
  return 0;
}