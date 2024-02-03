// Description:

// You will be given an array a and a value x. All you need to do is check whether the provided array contains the value.

// Array can contain numbers or strings. X can be either.

// Return true if the array contains the value, false if not.

//My solution
#include <vector>
#include <string>

bool check(const std::vector<std::string>& seq, const std::string& elem) {
  for(int i=0; i<seq.size(); i++){
    if(elem==seq[i]){return true;}
  }  
  return false;
}
