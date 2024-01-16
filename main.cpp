#include "stats.h"
#include <iostream>

/*
 *  Main function
 */
int main() {
  int x;
  int y;
  int z;

  // Set the precision for cout
  std::cout.precision(2);

  // Get three integers
  std::cin >> x >> y >> z;

  // Output Average (Show in fixed point)
  std::cout << "Average: " << std::fixed << average(x, y, z) << std::endl;

  // Output Median, Min, Max

  return 0;
}
