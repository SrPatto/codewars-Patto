// Description:

// Write a function to convert a name into initials. This kata strictly takes two words with one space in between them.

// The output should be two capital letters with a dot separating them.

// It should look like this:

// Sam Harris => S.H

// patrick feeney => P.F

//My solution
#include <string>

using namespace std;

std::string abbrevName(std::string name)
{
  char *abbrev = NULL;
  abbrev = (char *)malloc(20);
  int n = size(name);
  
  abbrev[0] = toupper(name[0]);
  abbrev[1] = '.';
  for(int i=0; i<n; i++){   
    if(isspace(name[i])){
      abbrev[2]=toupper(name[i+1]);
    }
  }
  abbrev[3] = '\0'; 
  
  return abbrev;
}