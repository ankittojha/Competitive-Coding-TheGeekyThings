#include <iostream>
using namespace std;

int square(int n){
	return n*n;
}

int cube(int n){
	return n*n*n;
}

void solution(int t1, int t2, int r1, int r2){

	if (square(t1)*cube(r2) == square(t2)*cube(r1))
	{
		cout<<"Yes"<<endl;
	} else{
		cout<<"No"<<endl;
	}

}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	int t1,t2,r1,r2;

	for (int i = 0; i < t; i++)
	{
		cin>>t1>>t2>>r1>>r2;
		solution(t1, t2, r1, r2);
	}
	return 0;
}
