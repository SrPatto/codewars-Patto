// Description:

// Write function RemoveExclamationMarks which removes all exclamation marks from a given string.

//My solution
#include <string>

std::string removeExclamationMarks(std::string str){
  str.erase(remove(str.begin(), str.end(), '!'), str.end());
  return str;
}