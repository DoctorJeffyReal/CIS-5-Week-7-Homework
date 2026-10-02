#include <iostream>
#include <cstdlib>
#include <ctime>

// Homework 7 — Your Name
// CIS 5 Week 07 · Odd and Even

int main() {
  const int N = 20;
  int values[N];

  srand(static_cast<unsigned>(time(nullptr)));
  for (int i = 0; i < N; ++i) {
    values[i] = rand() % 100;
  }

  return 0;
}
