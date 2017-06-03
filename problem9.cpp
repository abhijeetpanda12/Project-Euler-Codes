//to find the greatest product of all thirteen adjacent digits in the 1000-digit number
#include <iostream>
using namespace std;
int main(){
	int i,j,k;
	for(i=1;i<1000;i++){
		for(j=1;j<i;j++){
			k=1000-i-j;
			if((i*i)+(j*j)==(k*k))
				cout<<i<<" "<<j<<" "<<k<<" "<<(i*j*k);
		}
	}
	return 0;
}