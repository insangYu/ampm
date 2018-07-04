#include <iostream>
using namespace std;

void selectionSort(int *A, int n);
int theLargest(int *A, int last);

int main(){
	
	int n;
	cin >> n;
	
	int A[1000];
	
	for(int i=0;i<n;i++){
		cin >> A[i];
	}

	selectionSort(A, n);

	for(int i=0;i<n;i++){
	cout << A[i] << endl;
	}
	
	return 0;
	
}

void selectionSort(int *A, int n){
	int l, tmp;
	
	for(int i=n;i>0;i--){
		
		l = theLargest(A, i);
		tmp = A[i-1];
		A[i-1] = A[l];
		A[l] = tmp;
		
	}
}

int theLargest(int *A, int n){
	
	int largest = 0 ;
	
	for(int i=1;i<n;i++){
		if(A[i]>A[largest])
			largest = i;
	}
	return largest;
}
