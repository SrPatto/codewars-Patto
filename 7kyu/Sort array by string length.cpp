// Description:

// Write a function that takes an array of strings as an argument and returns a sorted array containing the same strings, ordered from shortest to longest.

// For example, if this array were passed as an argument:

// ["Telescopes", "Glasses", "Eyes", "Monocles"]

// Your function would return the following array:

// ["Eyes", "Glasses", "Monocles", "Telescopes"]

// All of the strings in the array passed to your function will be different lengths, so you will not have to decide how to order multiple strings of the same length.

//My solution
#include <vector>
#include <string>


std::vector<std::string> sortByLength(std::vector<std::string> array){
  sort(array.begin(), array.end(), [](std::string& a, std::string& b) {
          return a.length() < b.length();
        });
  return array;    
}