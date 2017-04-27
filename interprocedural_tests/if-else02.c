int main() {
    int x, y, z, b;
    if(x == 2){
      y = x;
      x = 5;
    } else {
      x = 5;
      y = 3;
    }
    z = y;
    assert(z == 2);
    return 0;
}
