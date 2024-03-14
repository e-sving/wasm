#include <iostream>
#include <vector>
#include <cmath>

int main()
{
  // Create a vector to hold the two parameters (percentages)
  std::vector<double> parameters = {50.0, 50.0};

  // Calculate the total sum of parameters
  double total = parameters[0] + parameters[1];

  // Calculate the angles for each parameter
  double angle1 = (parameters[0] / total) * 360;
  double angle2 = (parameters[1] / total) * 360;

  // Display the pie chart
  std::cout << "Pie Chart:" << std::endl;
  std::cout << "Parameter 1: " << parameters[0] << "% (" << angle1 << " degrees)" << std::endl;
  std::cout << "Parameter 2: " << parameters[1] << "% (" << angle2 << " degrees)" << std::endl;

  return 0;
}
