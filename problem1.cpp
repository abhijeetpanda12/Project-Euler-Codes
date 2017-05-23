//to find sum of all multipliers under 1000 that are divisible by either 3 or 5
#include <iostream>
using namespace std;
int main(){
	int i,sum=0;
	for(i=1;i<1000;i++){
		sum+=(i%3==0 || i%5==0)?i:0;
	}
	cout<<"Sum of the multipliers is "<<sum;
	return 0;
}