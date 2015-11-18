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


void fill (char t1 [10][10]){
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			t1[i][j] = '-';
		}
	}
}
void shout (char t1 [10][10]){
	cout << "  ";
	for (int i = 0;i < 10;i++){
		cout << (char) ('A' + i);
	}
	cout << endl;
	for (int i = 0; i < 10; i++){
		cout << i << " ";
		for (int j = 0; j < 10; j++){
			cout << t1 [i][j];
		}
		cout << endl;
	}
}
bool sprawdz (char t1 [10][10], int x, int y){
	if (x < 0 || x > 9 || y < 0 || y > 9){
		return false;
	}
	for (int i = x - 1; i <= x + 1; i++){
		for (int j = y - 1; j <= y + 1; j++){
			if (!(i < 0|| i > 9 || j < 0 || j > 9) && t[i] [j]){
				return false;
			}
		}
		return true;
	}
}

int main (){
	char t1 [10] [10];
	fill (t1);
	shout (t1);
	srand (time(0));
	int x = rand() % 10;
	cout << x;
}
