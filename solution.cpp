/** solution.cpp
* The listhelpers.hpp file has been provided by the instructor as starter code
* and contains the following procedures to work with lists:
* display, append, insert, remove, length
*/
#include "listhelpers.hpp"

#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

void display(const std::vector<std::string>& titles, const std::vector<std::string>& artists, const std::vector<int>& durations) {
  std::cout << "Total duration: " << totalDuration << "\n";
  std::cout << "Average duration: " << averageDuration << "\n";
  std::cout << "Longest song: " << titles[longestIndex] << " by " << artists[longestIndex] << " for " << durations[longestIndex] << " seconds\n";
  std::cout << "Shortest song: " << titles[shortestIndex] << " by " << artists[shortestIndex] << " for " << durations[shortestIndex] << " seconds\n";
}

int main()
{
  std::vector<std::string> songTitles;
  std::vector<std::string> songArtists;
  std::vector<int> songDurations;
  
  return 0;
}
