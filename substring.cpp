// swapping ostringstream objects
#include <iostream>  // std::cout
#include <sstream>   // std::stringstream
#include <string>    // std::string, // string::size

int main() {
  std::string str("ab cd ef  g");

  std::stringstream ss;

  std::string::iterator it = str.begin();
  std::string::iterator end = str.end();

  size_t count_empty_char = 0;

  for (std::string::iterator it = str.begin(); it != end; ++it) {
    size_t count = 0;

    while (true) {
      if (it == end) {
        break;
      }

      if (*it == ' ') {
        ++count_empty_char;
      } else {
        ++count;
        if (count == 3) {
          ss << *it << '\n';
          break;
        } else {
          ss << *it;
        }
      }

      ++it;
    }

    if (it == end) {
      break;
    }
  }

  std::string s = ss.str();
  std::cout << s << "\nempty: " << count_empty_char << '\n';
  //   std::cout << "abc\ndef\ng";

  return 0;
}
