//to find the larget prime factor
#include <iostream>
#include <math.h>
using namespace std;
bool prim(int x){
	int i;
	for(i=2;i<sqrt(x);i++){
		if(x%i==0)
			return false;
	}
	return true;
}
int main(){
	int i,m;
	long n=600851475143;
	int sq=sqrt(n);
	for(i=2;i<sq;i++){
		if(n%i==0 && prim(i))
			m=i;
	}
	cout<<"Largest Prime factor is "<<m;
	return 0;
}