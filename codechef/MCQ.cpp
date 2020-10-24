#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a = 5,b=10,c=15;
	int *arr[3] = {&a,&b,&c};
	cout<<*arr[*arr[1]-8];
	return 0;
}
