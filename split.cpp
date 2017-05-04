#include "split.hpp"
//Create a function that behaves like python's split()

template <typename Out> 
void split(
    const std::string& s,
    char delim,
    Out result)  // why do I need to use a template here and not a vector?
{
    std::stringstream ss;
    ss.str(s);  
    std::string item;
    while (std::getline(ss, item, delim))
        *(result++) = item;  // what's going on here in the context of back_inserter?
}

std::vector<std::string> split(const std::__cxx11::string& s, char delim)
{
    std::vector<std::string> elems;
    split(s, delim, std::back_inserter(elems));  // back_inserter?  Is this feeding split an iterator?
    return elems;
}
