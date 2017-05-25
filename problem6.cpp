//to find the difference between sum of squares and square of sum
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int i,j,k=100,val=0;
	int sum_of_squares = (k*(k+1)*((2*k)+1))/6;
	cout<<sum_of_squares<<endl;
	int square_of_sum = pow((k*(k+1))/2,2);
	cout<<square_of_sum<<endl;
	val = square_of_sum - sum_of_squares;
	cout<<"difference between sum of squares and square of sum: "<<val;
	return 0;
}