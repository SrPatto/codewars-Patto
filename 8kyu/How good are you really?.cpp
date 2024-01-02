// Description:

// There was a test in your class and you passed it. Congratulations!
// But you're an ambitious person. You want to know if you're better than the average student in your class.

// You receive an array with your peers' test scores. Now calculate the average and compare your score!

// Return True if you're better, else False!
// Note:

// Your points are not included in the array of your class's points. For calculating the average point you may add your point to the given array!

// My solution
#include <vector>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
  // your code here
  int n = classPoints.size();
  float add = 0, avg =0;
  
  for(int i=0; i<n; i++){
    add += classPoints[i];
  }
  avg = add/n;
  
  if(yourPoints > avg){ return 1;}
  else{return 0;}  
}