//find the number less than 1 million with the longest chain length
#include <iostream>
using namespace std;
long count_chain(long x){
	long count = 1;
	while(x!=1){
		count++;
		if(x%2==0)
			x/=2;
		else
			x = (3*x)+1;
	}
	return count;
}
int main(){
	long x=100,max_num;
	long count,max_count;
	while(x<1000000){
		count = count_chain(x);
		if(count > max_count){
			max_count = count;
			max_num = x;
		}
		x++;
	}
	cout<<"number \t chain_length"<<endl;
	cout<<max_num<<"\t"<<max_count;
	return 0;
}