#include<iostream>
using namespace std;

string BT1_run(string a)
{
	if (a.size() <= 3)
	{
		cout << a << endl;
	}
	else
	{
		int n = a.size() - 3;
		while (n > 0) {
			a.insert(n, ",");
			n -= 3;
		}
	}

	return a;
}