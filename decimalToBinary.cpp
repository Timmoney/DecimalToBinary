/*
Convert to decimal to binary
the idea is that you module the number with 2 ,and each time divide it by 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;

//Global varibale
char A[10];

void reverse(char* p){
	stack<char> s;
	char* temp = p;
	
	while(*temp!=NULL){
		s.push(*temp);
		temp++;
	}

	while(*p!=NULL){
		*p = s.top();
		s.pop();
		p++;
	}
}

void FindDigitsInDecimal(int n){
	char* ptr = A;

	while(n>0){
		int rem = n%2;
		rem = rem + '0'; //convert int to char
		*ptr = rem;
		ptr++;
		n = n/2;
	}

	//printf("%s\n", A);
	reverse(A);
}

int main(){

	FindDigitsInDecimal(123456);
	printf("%s\n", A);
}