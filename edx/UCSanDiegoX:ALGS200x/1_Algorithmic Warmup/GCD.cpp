#include <iostream>

using namespace std;

int EuclidGCD(int a, int b){
	if(b == 0) return a;
	int c = a%b;
	return EuclidGCD(b,c);

}

int main(){
	int n, m;

	cin >> m >> n;
	cout << EuclidGCD(m,n);
	return 0;
}
