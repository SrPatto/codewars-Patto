// Description:

// Complete the solution so that it reverses the string passed into it.

// 'world'  =>  'dlrow'
// 'word'   =>  'drow'

//My solution
#include <string>
using namespace std ; 

string reverseString (string str )
{
  reverse(str.begin(), str.end());
  return str;
}