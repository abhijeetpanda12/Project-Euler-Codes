//to calculate the number of possible ways in a 20x20 grid
#include <iostream>
using namespace std;
int main(){
long double x=1,i,k=20;
	for(i=1;i<=k;i++){
		x=x*(k+i)/i;
	}
  	printf("Number of Routes: %Lf\n", x);
	return 0;
}
