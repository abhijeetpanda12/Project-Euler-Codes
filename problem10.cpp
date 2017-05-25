//to find the 10001 th prime
#include <iostream>
#include <math.h>
using namespace std;
bool prim(long x){
	long i;
	for(i=2;i<=sqrt(x);i++){
		if(x%i==0)
			return false;
	}
	return true;
}
int main(){
	long i,sum=2;
	for(i=3;i<=2000000;i+=2){
		if(prim(i)){
			cout<<i<<endl;
			sum+=i;
		}
	}
	cout<<sum;
	return 0;
}