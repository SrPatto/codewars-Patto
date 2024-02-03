// Description:

// Given an array of integers, return a new array with each value doubled.

// For example:

// [1, 2, 3] --> [2, 4, 6]

//My solution
std::vector<int> maps(const std::vector<int> & values) {
  std::vector<int> result;
  result.reserve(values.size());
  for(int i=0; i<values.size(); i++){
    result.push_back(values[i] * 2);
  }
  return result;
}
