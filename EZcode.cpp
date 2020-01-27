##include <iostream>
using namespace std;

uint32_t sum(uint32_t a, uint32_t b){
  uint32_t c=0;
  c= (a + b);
  return c;
}

double prod(int x[], int n) {
  double a = 1;
  for(int i=0; i<n; i++){
    a=a * x [i];
  }
  return a;
}

int main() {
  int x[] = {1,2,3,4,5,6}
  cout << prod(x,6) << endl;
}
