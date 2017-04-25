#ifndef KWIC_HPP
#define KWIC_HPP
#include "linerotation.hpp"
#include "split.hpp"

// Takes a text file and returns all ways to partition the lines into two
// partitions each, sorted by the second partition's first word alphabetically.
std::vector<lineRotation> kwic(std::string filename);

#endif  // KWIC_HPP
