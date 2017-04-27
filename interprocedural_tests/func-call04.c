int func(int p){
  int k = p + 1;
  return k;
}

int main(){
  int x, y, z;
  if(y) x = 2;
  else x = 3;
  if(y) y = 3;
  else y = 4;
  z = func(y);
  y = func(x);
  z = y;
  return 0;
}
