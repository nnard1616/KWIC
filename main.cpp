#include "linerotation.hpp"
#include "kwic.hpp"

int main()
{
    typedef vector<lineRotation>::iterator lit;
    string filename = "../text.txt";
    // rotations is a vector of lineRotation structs.  Each struct contains two
    // vectors of strings,  the firstHalf contains the words of the first
    // partition of a line from text.txt, while secondHalf contains the words of
    // the second partition of that same line.  This vector of structs contains
    // all ways to partition the lines of text.txt into two partitions, sorted
    // by the second partition's first word alphabetically.
    vector<lineRotation> rotations =
        kwic(filename);  // kwic === "Key Word In Context"
    for (lit i = rotations.begin(); i != rotations.end(); ++i)
    {
        for (it j = i->firstHalf.begin(); j != i->firstHalf.end(); ++j)
            std::cout << *j << ' ';
        std::cout << "   ";  // separator for the two partitions
        for (it j = i->secondHalf.begin(); j != i->secondHalf.end(); ++j)
            std::cout << *j << ' ';
        std::cout << std::endl;
    }
    return 0;
}
