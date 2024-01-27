// Description:

// You probably know the "like" system from Facebook and other pages. People can "like" blog posts, pictures or other items. We want to create the text that should be displayed next to such an item.

// Implement the function which takes an array containing the names of people that like an item. It must return the display text as shown in the examples:

// []                                -->  "no one likes this"
// ["Peter"]                         -->  "Peter likes this"
// ["Jacob", "Alex"]                 -->  "Jacob and Alex like this"
// ["Max", "John", "Mark"]           -->  "Max, John and Mark like this"
// ["Alex", "Jacob", "Mark", "Max"]  -->  "Alex, Jacob and 2 others like this"

// Note: For 4 or more names, the number in "and 2 others" simply increases.

//My solution
#include <string>
#include <vector>

std::string likes(const std::vector<std::string> &names)
{
  std::string like;
  switch(names.size()){
      case 0: 
        return "no one likes this";
      case 1: 
        return names[0] + " likes this";
      break;
      case 2 ... 3:
        for(int i=0; i<names.size(); i++){
          like = like + names[i];
          if(i < names.size() - 2){
            like = like + ", ";
          }
          else if(i < names.size() - 1){
            like = like + " and ";
          }
        }
      return like + " like this";
      default:
        for(int i=0; i<2; i++){
          like = like + names[i];
          if(i < 1){
            like = like + ", ";
          }
          else if(i < 2){
            like = like + " and ";
          }
        }
      like = like + std::to_string(names.size()-2) + " others like this";
      return like;
  }
}