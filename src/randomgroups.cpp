#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <chrono>

using namespace std;

int main() {
  vector<int> t = {2, 3, 4, 5, 6, 9, 10, 11, 12};
  vector<int> g = {2, 3, 4, 5, 6, 7,  9, 11, 12};
  pair<int,int> c;
  unsigned num = chrono::system_clock::now().time_since_epoch().count();
  for (int i = 0; i < t.size(); i++) {
    shuffle(t.begin(), t.end(), default_random_engine(num));
    shuffle(g.begin(), g.end(), default_random_engine(num+10)); // a different seed
  }
  for (int i = 0; i < t.size(); i++) {
    c = make_pair(t[i], g[i]); // (student, group)
    cout << "(" << c.first << "," << c.second << ")" << endl;
  }

}
