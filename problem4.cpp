//to find the largest pallindrome fromed from the product of two 3 digit numbers
#include <iostream>
#include <math.h>
using namespace std;
bool pallin(int num){
	int n = num;
	int rev=0,digit;
     do{
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);
     if(n==rev)
     	return true;
     else
     	return false;
}
int main(){
	int i,j,prod,max_pallin=0;
	for(i=101;i<1000;i++){
		for(j=101;j<1000;j++){
			prod=i*j;
			if(pallin(prod) && prod > max_pallin)
				max_pallin=prod;
		}
	}
	cout<<"largest palindrome made from the product of two 3-digit numbers: "<<max_pallin;
	return 0;
}