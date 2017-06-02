//find the first triangle number with more than 500 divisors
#include <iostream>
#include <math.h>
using namespace std;
int count_factor(int x){
	int i,count=0;
	for(i=1;i<=sqrt(x);i++){
		if(x%i==0)
			count+=2;
	}
	if((sqrt(x)-(int)sqrt(x))==0)
		count--;
	return count;
}
int main(){
	int i=1;
	int sum=1,count=1;
	while(count<500){
		i++;
		sum+=i;
		count=count_factor(sum);
	}
	cout<<"number \t divisors"<<endl;
	cout<<sum<<"\t"<<count<<endl;
	return 0;
}