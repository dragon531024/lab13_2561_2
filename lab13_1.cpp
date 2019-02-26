#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void show(T d[],int N,int M){
	for(int i=0; i<N; i++){
		if(i==M){
			cout << "[" << d[M] << "]"<<" ";
		}else{ cout << d[i]<<" ";
		}
	}
}

template <typename T>
void insertionSort(T d[],int N){
	int i;
	for(int j=1; j<N; j++){
		show(d,N,j);
		cout << "==>";
		for(i=j; i>0; i--){
			if(d[i]>d[i-1]){
			swap(d,i,i-1);
			}else{
			break;
			}
		}
		show(d,N,i);
		cout << endl;
	}

}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
