#include <stdio.h>
#include <iostream>
using namespace std;

int a = 1;
void fun(int a){
	a = 2;
}
int main(){
	fun(a);
	cout << a;
}

