// receipt.cpp
// Name: Angel Fuentes

#include <iostream>
using namespace std;

int main() {
  string article =
      "The oil industry has seen its biggest growth since twenty fourteen. "
      "Don't miss your chance! - Kansas news";                         //^ column74
    //^column 8
  string dot = string(1, article[66]);            //74 - 8 = 66
  string space = string(1, article[3]);

  string g = string(1, article.at(32));
  string y = string(1, article.at(15));
  string b = string(1, article.at(30));
  string u = string(1, article.at(11));
  string c = string(1, article.at(48));
  string k = string(1, tolower(article.at(94)));  //lower case
  string s = string(1, article.at(12));

  string word_1 = article.substr(4, 4);           //"oil " w/ space
  word_1[0] = toupper(word_1[0]);                 //oil -> Oil

  string word_2 = article.substr(84, 6);
  word_2.insert(6, dot);
  word_2.insert(7, space);
  word_2.replace(4, 1, g);

  string word_3 = article.substr(58, 5);          //fourt
  word_3.erase(2, 1);                             //fourt -> fort
  word_3[0] = toupper(word_3[0]);                 //Fort
  word_3 += y + space;                            //"Forty "

  string word_4 = b + u + c + k + s + dot;

  cout << word_1 << word_2 << word_3 << word_4 << endl;

  return 0;
}
