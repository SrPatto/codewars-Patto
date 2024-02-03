// Description:
// Task

// Sum all the numbers of a given array ( cq. list ), except the highest and the lowest element ( by value, not by index! ).

// The highest or lowest element respectively is a single element at each edge, even if there are more than one with the same value.

// Mind the input validation.
// Example

// { 6, 2, 1, 8, 10 } => 16
// { 1, 1, 11, 2, 3 } => 6

// Input validation

// If an empty value ( null, None, Nothing etc. ) is given instead of an array, or the given array is an empty list or a list with only 1 element, return 0.

//My solution
#include<vector>
using namespace std;

int sum(vector<int> numbers)
{
  int n = numbers.size();
  int sum = 0, total=0; 
  int high=numbers[0], low=numbers[0];
  
  if(numbers.empty() || n==1){return 0;}
  
  for(int i=0; i<n; i++){
    
    if(high<numbers[i]){high=numbers[i];}    
    if(low>numbers[i]){low=numbers[i];}
      
    sum += numbers[i];
  }
  
  total = sum - high - low;
  
  return total;
}