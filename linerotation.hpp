#ifndef LINEROTATION_HPP
#define LINEROTATION_HPP
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <boost/algorithm/string.hpp>

using std::vector;
using std::string;
using boost::algorithm::to_lower;

typedef std::vector<std::string>::iterator it;

struct lineRotation
{
    vector<string> firstHalf;
    vector<string> secondHalf;
};

// for sorting the partitions alphabetically by the second partition's first
// word.
bool compare(const lineRotation& x, const lineRotation& y);

#endif  // LINEROTATION_HPP
