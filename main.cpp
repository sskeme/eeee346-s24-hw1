#include "stats.h"
#include <iostream>

int main() {
  int x;
  int y;
  int z;

  // set the precision for cout
  std::cout.precision(2);

  // get three integers
  std::cin >> x >> y >> z;

  // output Average (show in fixed point)
  std::cout << "Average: " << std::fixed << average(x, y, z) << std::endl;

  // output Median, Min, Max

  return 0;
}
