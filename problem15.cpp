//to calculate the number of possible ways in a 20x20 grid
#include <iostream>
using namespace std;
int main(){
	int i,k=20;
	long long int pro=1;
	for(i=1;i<=k;i++){
		pro*=(k+i)/i;
	}
	printf("%llu", pro);
	return 0;
}

