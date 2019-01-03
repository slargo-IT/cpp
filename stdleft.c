#include <iostream>
#include <iomanip>

// STD::LEFT = right / Right = Left

using namespace std;

int main()
{

  std::cout << std::left << std::setfill('A') << std::setw(10) << "W" << std::endl;
  
  return 0;
  
}

