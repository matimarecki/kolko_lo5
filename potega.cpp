#include <bits/stdc++.h>
#define REP(i,n)  for(int i=0;i<(int)(n);++i)
#define FOR(i,b,n)  for(int i=b;i<(n);++i)
#define ALL(c) (c).begin(),(c).end()
#define SS size()
#define CLR(a,v) memset((a),(v), sizeof a)
#define ST first
#define ND second
template<typename T, typename U> inline void AMIN(T &x, U y) { if(y < x) x = y; }
template<typename T, typename U> inline void AMAX(T &x, U y) { if(x < y) x = y; }
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef pair<int,int> pii;


int wypiszLiczbe(int x) {
  cout << "teraz x=" << x << endl;
}
double potega(double p,int w){
	if (w == 0){
		return 1;
	}
	return p * potega(p , w-1);
}


int main() {
	double p;
	int w;
	cin >> p >> w;
	for (int i = 0;i<w;i++){
		if (potega(p , i) > potega (10 , 6)){
			cout << i;
			break;
		}
	}
	


}
