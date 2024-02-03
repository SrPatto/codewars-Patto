// Description:

// Build a function that returns an array of integers from n to 1 where n>0.

// Example : n=5 --> [5,4,3,2,1]

//My solution
std::vector<int> reverseSeq(int n) {
  std::vector<int> reverse;
  for(int i = 0; i<n; i++){
    reverse.push_back(n - i); 
  }
  return reverse;
}