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



ll ciag (int n){
	if (n < 2){
		return -1;
	}
	return- ciag (n-1) * n - 3;
}


int main() {
	double p;
	int w;
	cin >> w >> p;
	cout << ciag (w) << endl;
	//while (p > 1){
	//	cout << "Błąd";
	//}
	
}
