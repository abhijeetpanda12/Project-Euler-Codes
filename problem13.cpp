//find the first 10 digits of the sum of the given one hundered 50-digit numbers 
#include <iostream>
#include <string>
using namespace std;
int main(){
	int i,j,sum=0,carry=0,digit;
	string s[100],result="";
	for(i=0;i<100;i++){
		cin>>s[i];
	}
	for(i=49;i>=0;i--){
		sum=carry;
		for(j=0;j<100;j++){
			digit = s[j].at(i) - '0';
			sum+=digit;
		}
		digit = sum % 10;
		result=to_string(digit)+result;
		carry= sum/10;
	}
	result=to_string(carry)+result;
	cout<<"sum is "<<result<<endl;
	return 0;
}