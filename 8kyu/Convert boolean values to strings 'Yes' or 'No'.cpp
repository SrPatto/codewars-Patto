// Description:

// Complete the method that takes a boolean value and return a "Yes" string for true, or a "No" string for false.

//My solution
#include <string>

std::string bool_to_word(bool value)
{
  std::string str; 
  
  if (value){str = "Yes";}
  else{str = "No";}
  
  return str;
}