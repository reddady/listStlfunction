//============================================================================
// Name        : listall.cpp
// Author      : redcoder
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>
using namespace std;

int main() {

	list<int> number (5, 100);
	int num= number.size();

	for (int i:number)
	{
		cout << i<<" " ;
	}
	number.push_back(12);
	number.push_back(22);
	cout <<"after erase " <<endl;
	number.erase(number.begin());
	cout<<"after remove element "<<endl;
	cout <<"abefore remove that "<<endl;

	return 0;
}
