#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]={}; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void inputMatrix(double Mat[][N]){
	for (int i=0;i<N;i++){
		cout << "Row " << i+1 << ": ";
		for (int j=0;j<N;j++){
		cin >> Mat[i][j];
		}
	}
}
void findLocalMax(const double F[][N], bool B[][N]){
	for (int i=1;i<N-1;i++){
		for (int j=1;j<N-1;j++){
			if (F[i][j] > F[i-1][j] && F[i][j] > F[i+1][j] && F[i][j] > F[i][j-1] && F[i][j] > F[i][j+1]){
				B[i][j] = 1;
			}
		}
	}
}

void showMatrix(const bool B[][N]){
	for (int i=0;i<N;i++){
		for (int j=0;j<N;j++){
			cout << B[i][j];
			cout << " ";			
		}
		cout << endl ;			
	}
}
