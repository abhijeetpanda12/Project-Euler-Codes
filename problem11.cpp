#include <iostream>
#include <algorithm>
using namespace std;
int sumright(int a[20][20], int i, int j){
	int pro =a[i][j];
	pro *= (j+1 >= 20) ? a[i+1][j+1-20] : a[i][j];
	pro += (j+2 >= 20) ? a[i+1][j+2-20] : a[i][j];
	pro += (j+3 >= 20) ? a[i+1][j+3-20] : a[i][j];
	return (a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3]);
}
int sumdown(int a[20][20], int i, int j){
	return (a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j]);
}
int sumdiagonal(int a[20][20], int i, int j){
	return (a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3]);
}
int main(){
	int a[20][20];
	int i,j,m=0,x,y,z;
	//input
	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			cin>>a[i][j];
		}
	}
	for(i=0;i<17;i++){
		for(j=0;j<17;j++){
			x = sumright(a,i,j);
			y = sumdown(a,i,j);
			z = sumdiagonal(a,i,j);
			m = max(m, x);
			m = max(m, y);
			m = max(m, z);
		}
		cout<<m<<"----"<<i<<endl;
	}
	cout<<m;





	// print
	// for(i=0;i<20;i++){
	// 	for(j=0;j<20;j++){
	// 		cout<<a[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	return 0;
}