//by Prof. Josenalde Oliveira

#include <iostream>
using namespace std;

typedef struct {
    int x, y;
} Ponto;

typedef struct {
    Ponto pie;
    Ponto psd;
} Retangulo;

bool detectaColisao(Retangulo r1, Retangulo r2) {
    bool t1 = (r2.pie.x > r1.psd.x);
    bool t2 = (r1.pie.x > r2.psd.x);
    bool t3 = ((r2.pie.y > r1.psd.y) || (r2.psd.y < r1.pie.y));
    bool t4 = ((r1.pie.y > r2.psd.y) || (r1.psd.y < r2.pie.y));
    if (t1&&t3 || t2&&t4 || t1 || t2) return false;
    else return true;
}

int main() {
    Retangulo r1, r2;
        
    cin >> r1.pie.x >> r1.pie.y >> r1.psd.x >> r1.psd.y;
    cin >> r2.pie.x >> r2.pie.y >> r2.psd.x >> r2.psd.y;
    
    //0 = x0 < x1 = 1.000.000 e 0 = y0 < y1 = 1.000.000
	bool t1 = r1.pie.x >= 0 && r2.pie.x >= 0 && r1.pie.y>=0 && r2.pie.y>=0;
	bool t2 = r1.psd.x <= 1E6 && r2.psd.x <= 1E6 && r1.psd.y<=1E6 && r2.psd.y<=1E6;
	bool t3 =  r1.pie.x < r1.psd.x && r2.pie.x < r2.psd.x;
	bool t4 =  r1.pie.y < r1.psd.y && r2.pie.y < r2.psd.y;
				
	if (t1 && t2 && t3 && t4) {
	  if (detectaColisao(r1,r2)) cout << true;
          else cout << false;
        }
    return 0;
}
  



