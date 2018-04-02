#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n,jum;
	cout<<"Dimensi Bujur Sangkar (ganjil dan >= 3) : ";
	cin>>n;
	int A[n][n];
	
	for(int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			A[i][j]=0;

	jum=n*(n*n+1)/2;
	cout<<"\nPenjumlahan setiap satu baris/kolom : "<<jum<<endl;
	int b=0,k=(n-1)/2;
	
	for (int i=1;i<=n*n;i++){
		A[b][k]=i;
		b=(n+(b-1)%n)%n;
		k=(k+1)%n;
		if(A[b][k]!=0){
			b=(b+2)%n;
			k=(n+(k-1)%n)%n;
		}
	}
	
	cout<<"\nBujur Sangkar\n";
	cout<<"--------------\n";
	for(int i=0;i<n;i++){
		for (int j=0;j<n;j++)
			cout<<A[i][j]<<"\t";
		cout<<endl;		
	}
	cout<<endl;
	return 0;
}
