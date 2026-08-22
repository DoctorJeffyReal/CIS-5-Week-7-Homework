#include <iostream>

// Practice 7 — Your Name
// CIS 5 Week 07 · Menu replay

int main() {
  int choice = 0;
  do {
    std::cout << "1) Greet  2) Countdown  3) Quit\n";
    std::cout << "Choice: ";
    std::cin >> choice;

    // TODO: action 1, action 2, quit, else "Not a choice."
    // TODO: at least one for-loop in an action
  } while (choice != 3);

  std::cout << "Bye.\n";
  return 0;
}
