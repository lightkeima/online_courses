#include <iostream>
#include <vector>

using namespace std;

int FibList(int n){
	vector<int> list(n);
	list[0] = 0;
	list[1] = 1;
	for(int i = 2; i <  n; ++i)
		list[i] = list[i - 1] + list[i - 2];
	return list[n - 1];
}

int main(){
	int n;
	cin >> n;
	cout << FibList(n);
	return 0;
}
