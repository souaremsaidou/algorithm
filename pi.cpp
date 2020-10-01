#include <math.h>
#include <stdlib.h>  // srand, RAND_MAX
#include <time.h> // time

#include <iostream>
#include <sstream> // stringstream
#include <string> //
#define SEED time(NULL)

using namespace std;

int main() {
  srand(SEED);
  int i, n;
  double x, y, z, pi;

  string mystr;
  getline(cin, mystr);
  stringstream(mystr) >> n;

  int count = 0;
  for (i = 0; i < n; ++i) {
    x = (double)rand() / RAND_MAX;
    y = (double)rand() / RAND_MAX;
    z = x * x + y * y;
    if (z <= 1) {
      count++;
    }
  }

  pi = (double)count / n * 4;

  std::cout << pi;

  return 0;
}
