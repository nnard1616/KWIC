#include "kwic.hpp"
#include <algorithm>

vector<lineRotation> kwic(string filename)
{
    std::fstream infile(filename);
    string line;  // string to read in each line
    vector<lineRotation> rotations;
    // read and partition each line of text file
    while (!infile.eof())
    {
        std::getline(infile, line);
        vector<string> lineWords =
            split(line, ' ');   // brings line into vector of words
        lineRotation rotation;  // working partition
        for (it i = lineWords.begin(); i != lineWords.end(); ++i)
        {
            if (i == lineWords.begin())  // whole line is the only partition
            {
                vector<string> firstHalf;
                rotation.firstHalf = firstHalf;  // empty vector
                rotation.secondHalf = lineWords;
            }
            else  // need to split the line into two partitions
            {
                vector<string> firstHalf(lineWords.begin(), i);
                vector<string> secondHalf(i, lineWords.end());
                rotation.firstHalf = firstHalf;
                rotation.secondHalf = secondHalf;
            }
            // finished partitioning line, add it to our vector of partitions
            rotations.push_back(rotation);
        }
    }
    // partitioning of all lines in all ways is now done.
    infile.close();
    std::sort(rotations.begin(), rotations.end(),
              compare);  // alphabetize by second partition's first word
    return rotations;
}
