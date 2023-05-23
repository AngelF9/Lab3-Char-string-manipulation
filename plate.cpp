// plate.cpp
// Name: Angel Fuentes

#include <iostream>
using namespace std;

int main() {
  string state;
  int num;

  cout << "Which state are you from?" << endl;
  cin >> state;

  cout << "What is your favourite number between 0 and 999?" << endl;
  cin >> num;

  string num_str = to_string(num);
  int num_digits = num_str.length();
  string zeros = string(3 - num_digits, '0');

  string plate = "";
  plate += toupper(state[0]);
  plate += toupper(state[1]);
  plate += zeros;
  plate += num_str;
  
  cout << "Your custom plate is " << plate << "!" << endl;

  return 0;
}
