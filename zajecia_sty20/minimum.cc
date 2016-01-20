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

double f(double x){
	return (x - 2.5) * (x - 2.5);
}

int main (){
	double a = 0, b = 10;
	while (b-a>0.0001){
		double p = a * 2 / 3 + b * 1 / 3;
		double q = a * 1 / 3 + b * 2 / 3;
		if( f(p) > f(q)){
			a = p;
		}
		else {
			b=q;
		}
	}
	cout << a;
}
