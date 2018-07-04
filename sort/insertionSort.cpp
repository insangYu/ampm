#include <iostream>
using namespace std;

void insertionSort(int A[], int n);

int main(){
	int n;
	cin >> n;
	
	int A[1000];
	
	for(int i=0;i<n;i++){
		cin >> A[i];
	}

	insertionSort(A, n);

	for(int i=0;i<n;i++){
	cout << A[i] << endl;
	}
	
	return 0;
	
}

void insertionSort(int A[], int n){
	
	int t, newItem;
	
	for(int i=0;i<n;i++){
		t = i - 1;
		newItem = A[i];
		
		while(t>=0 && newItem < A[t]){
			A[t+1] = A[t];
			t = t - 1;
		}
		A[t+1] = newItem;
	}
}
