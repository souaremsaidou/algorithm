#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main() {
  int L;
  cin >> L;
  cin.ignore();
  int H;
  cin >> H;
  cin.ignore();
  string T;
  getline(cin, T);
  transform(T.begin(), T.end(), T.begin(), ::toupper);

  for (int i = 0; i < H; i++) {
    string ROW;
    getline(cin, ROW);

    string result;
    for (unsigned i = 0; i < T.length(); ++i) {
      char c = T[i];
      if (c < 'A' || c > 'Z') {
        result += ROW.substr(L * ('Z' - 'A' + 1), L);
      } else {
        result += ROW.substr(L * (c - 'A'), L);
      }

      cout << result << endl;
    }
  }
}
