#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
	vector<int>A;
	A.push_back(10);
	A.push_back(20);
	A.push_back(30);
	A.push_back(40);
	A.push_back(50);
	/*for(int i=0;i<A.size();i++)
	{
		cout<<A[i]<<" ";
	}*/
	auto x =A.begin();
	auto y =A.end();
	cout<<*x<<" "<<*y<<endl;
	auto x1 =A.rbegin();
	auto y1 =A.rend();
	cout<<*x1<<" "<<*y1<<endl;
	sort(A.begin(),A.end());
	sort(Arbegin(),A.rend());//	sort(A.begin(),A.end();greater<int>());
	int arr[10];
	sort(arr,arr+10);
	
	
	
	
	
	
	
	
	
	
	
	//A.pop_back();
	//list<int>B;
	/*vector<int>B(100,5);//this indicated an array of size 100 with all are 5..
	int arr[10]={0};*/
	
	return 0;
}
