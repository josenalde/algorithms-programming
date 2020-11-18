#include <iostream>
#include <vector>
using namespace std;
//q10 list6
int main() {
  /* cities - legend
     1 - cáceres
     2 - barra do bugres
     3 - cuibá
     4 - várzea grande
     5 - tangará da serra
     6 - pontes e lacerda
     */
  int D[6][6] = {{0,63,210,190,0,190},
                {63,0,160,150,95,0},
                {210,160,0,10,0,0},
                {190,150,10,0,0,0},
                {0,95,0,0,0,80},
                {190,0,0,0,80,0}};
  vector<int> r = {3,4,2,5,6,1};
  // start point 3: cuiaba
  // end point: 1: caceres
  int sD{0}; // distance accumulator
  for (int i = 1; i < r.size(); i++) {
      sD += D[r[i-1]-1][r[i]-1];
  }
  std::cout << sD;
}
