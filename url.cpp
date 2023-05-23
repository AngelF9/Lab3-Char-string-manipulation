// url.cpp
// Name: Angel Fuentes

#include <iostream>
using namespace std;

int main() {
  string url;
  string source;
  
  cout << "What is the old url? (http://www.<hostname>.com)" << endl;
  cin >> url;
  //http://www.charmec.com

  cout << "Where did the user come from? (one word)" << endl; 
  cin >> source;
  //Yahoo

  cout << "The new url is:" << endl;
  
  url.insert(4, "s"); 
  //https
  //https://www.charmec.com
  url.insert(url.length() - 4, "v2");
  //we add v2 before .com
  //https://www.charmecv2.com
  
  url += "?utm_source=";
  //add
  //https://www.charmecv2.comutm_source=

  url += source;
   //https://www.charmecv2.comutm_source=Yahoo

  
  cout << url << endl;
  //The new url is    //https://www.charmecv2.comutm_source=Yahoo
  
  return 0;
}
