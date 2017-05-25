//to find the 10001 th prime
#include <iostream>
#include <math.h>
using namespace std;
bool prim(int x){
	int i;
	for(i=2;i<=sqrt(x);i++){
		if(x%i==0)
			return false;
	}
	return true;
}
int main(){
	int i,count=1,k=10001;
	for(i=3;;i+=2){
		if(prim(i)){
			count++;
			cout<<count<<endl;
			if(count == k){
				cout<<i;
				return 0;
			}
		}
	}
}