//By Prof. Josenalde Oliveira, Oct 2020

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  //string listArgs = "5.4:6.67:-3.567:1";
  string listArgs;
  vector<string> v;
  vector<string> args;
  for (int i = 1; i < argc; i++) {
    args.push_back(argv[i]);
  }
  listArgs = args[0];
  auto f1 = listArgs.find(":");
 
  if (f1 != string::npos) {
    v.push_back(listArgs.substr(0,f1));
  }
  
  size_t f;
  while (f1 != string::npos) {
    f = listArgs.find(":", f1+1);
    v.push_back(listArgs.substr(f1+1,f-f1-1));
    f1 = f;
  }
  // display string values as float numbers
  for (int i = 0; i < v.size(); i++)
    std::cout << stof(v[i]) << "\n"; // Convert string to float; stoi convert string to int
}
