// Jason Khau
// khaujason@csu.fullerton.edu
// @JasonDaRuler
// Partners: @themariodude

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() <= 1) {
    std::cout << "Error: you must supply at least one number\n";
    return 1;
  }

  bool first{true};
  int argu{0};
  double sum{0};
  for (std::string& count : arguments) {
    if (first) {
      first = false;
      continue;
    }
    argu++;
    sum += stod(count);
  }

  double average{sum / argu};
  std::cout << "average = " << average << "\n";

  return 0;
}
