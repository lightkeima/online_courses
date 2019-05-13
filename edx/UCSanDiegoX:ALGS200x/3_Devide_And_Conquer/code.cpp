#include <iostream>
#include <vector>
using namespace std;

int LinearSearch(vector<int> A, int low, int high, int key);
int BinarySearch(vector<int> A, int low, int high, int key);

int main(){
	vector<int> a = {0,1,4,5,7,8,10,124,663};
	for(int i = 0; i < 9; ++i)
		cout << a[i] << " ";
	
	cout << endl << LinearSearch(a,0,8,5) << endl;
	cout << BinarySearch(a,0,8,5);
	return 0;
}

int LinearSearch(vector<int> A, int low, int high, int key){
if(high < low) return -1;
if(key == A[low]) return low;
return LinearSearch(A, low + 1, high, key);
}

int BinarySearch(vector<int> A, int low, int high, int key){
if(high < low) return low - 1;
int mid = low + (high - low)/2;
if(A[mid] == key) return mid;
if(A[mid] > key) return BinarySearch(A, low, mid - 1, key);
else return BinarySearch(A, mid + 1, high,key);
}

