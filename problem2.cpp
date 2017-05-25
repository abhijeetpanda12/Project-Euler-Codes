//to find sum of all even fibonacci numbers
#include <iostream>
using namespace std;
int main(){
	int i,sum=2,a=1,b=2,c=b,flag=0;
	while (c<=4000000){
		c=a+b;
		sum+=(c%2==0)?c:0;
		a=b;
		b=c;
	}
	cout<<"Sum of the even fibonacci terms is "<<sum;
	return 0;
}
