#include <iostream>
using namespace std;

struct Node {
  int d;
  Node *n = nullptr;
  Node *p = nullptr;

  bool search(int n) {
    Node *tmp = new Node;
    tmp = this;

    while (tmp != nullptr) {
      if (tmp->d == n) return true;
      tmp = tmp->n;
    }

    return false;
  }
};

int main() {
  Node *n = new Node;
  n->d = 10;

  // create the first node
  Node *first = new Node;
  first->d = 8;

  // create the last node
  Node *second = new Node;

  // init list
  n->n = first;
  n->p = second;

  // print
  std::cout << std::boolalpha << n->search(8) << "\n";
  return 0;
}
