#include <climits>
#include <cmath>
#include <random>
#include "windchillindex.h"
#include <iostream>
using edu::vcccd::vc::csv13::computeWindChillIndex;
int main()
{
	std::cout << computeWindChillIndex(1.0, 2.0);
}
