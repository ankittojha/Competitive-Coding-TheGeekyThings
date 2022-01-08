#include <iostream>
#include <cmath>
using namespace std;

void solution(int n, int d){

	int cases;

	if (d<=10)
	{
		cases = pow(2,d);
		if (cases>n)
		 {
		 	cases = n;
		 } 

		 cout<< cases <<endl;
	}

	else{

		cases = 1024;
		d = d-10;

		for (int i = 0; i < d; ++i)
		{
			cases = cases * 3;
			if (cases > n)
			{
				cases = n;
				break;
			}
		}
		cout << cases << endl;
	}
}

int main(int argc, char const *argv[])
{
	int t;
	cin>> t;
	int n, d;

	for (int i = 0; i < t; i++)
	{
		cin>>n >> d;

		solution(n,d);
	}
	return 0;
}
