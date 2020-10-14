//By Prof. Josenalde Oliveira, Oct 2020

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string listArgs = "5.4:6.67:-3.567:1";
  vector<string> v;
  auto f1 = listArgs.find(":");
 
  if (f1 != string::npos) {
    //cout << "entrei" << f1;
    v.push_back(listArgs.substr(0,f1));
  }
  size_t f;
  while (f1 != string::npos) {
    f = listArgs.find(":", f1+1);
    v.push_back(listArgs.substr(f1+1,f-f1-1));
    f1 = f;
  }
  for (int i = 0; i < v.size(); i++)
    std::cout << v[i] << "\n";
}
