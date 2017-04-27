int main() {
  int a0, a1, a2, a3, a4;
  a0 = a1 = a2 = a3 = a4 = 0;
  for(int i = 0; i < 5; ++i) {
    if(a3 == 1) {
      a4 = 1;
    }
    if(a2 == 1) {
      a3 = 1;
    }
    if(a1 == 1) {
      a2 = 1;
    }
    if(a0 == 1) {
      a1 = 1;
    }
    a0 = 1 + a0;
  }
}