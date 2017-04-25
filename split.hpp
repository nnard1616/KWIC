#ifndef SPLIT_HPP
#define SPLIT_HPP
#include <vector>
#include <string>
#include <sstream>

template <typename Out>
void split(const std::string& s, char delim, Out result);
std::vector<std::string> split(const std::string& s, char delim);

#endif  // SPLIT_HPP
