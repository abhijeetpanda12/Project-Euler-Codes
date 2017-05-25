//to find the smallest number divisible by each of numbers 1 to 20
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
	int i,j,k=20,val=1;
	for(i=2;i<20;i++){
		if (prim(i)){
			j=log(k)/log(i);
			val=val*pow(i,j);
		}
	}
	cout<<"smallest number divisible by each of numbers 1 to 20: "<<val;
	return 0;
}