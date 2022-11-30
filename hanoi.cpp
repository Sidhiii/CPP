#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

void TOH(int a, char src, char dest, char help){
	if(a==0){
		return;
	}
	TOH(a-1, src, help, dest);
	cout<<"Move from "<<src<<" to "<<dest<<endl;
	TOH(a-1, help, dest, src);
}
int main()
{
	TOH(3,'A','C','B');
	return 0;
}