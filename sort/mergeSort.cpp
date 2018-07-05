#include <iostream>
using namespace std;

void merge(int *A, int p, int q, int r){
	int i = p;
	int j = q+1;
	int t = 0;
	int tmp[1000000];

	while(i<=q && j<=r){
		
		if(A[i]<=A[j]){
			tmp[t++] = A[i++];
		}else{
			tmp[t++] = A[j++];
		}
	}
	while(i<=q){
		tmp[t++] = A[i++];
	}
	while(j<=r){
		tmp[t++] = A[j++];
	}
	i = p;
	t = 0;
	while(i<=r){
		A[i++] = tmp[t++];
	}
}
void mergeSort(int *A, int p, int r){
	int q;
	if(p<r){
		q = (p+r)/2;
		mergeSort(A,p,q);
		mergeSort(A,q+1,r);
		merge(A,p,q,r);
	}
}
int main(){
	int n;
	int A[1000000];
	int tmp=0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
		
	mergeSort(A,0, n-1);

	for (int i = 0; i<n; i++)
		cout << A[i] << '\n';
		
	return 0;
}
