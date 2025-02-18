#include <bits/stdc++.h>
using namespace std;
int arr[20] = {1};
void f(int n)
{
	int flag = 0;
	while(n >= arr[flag])
	{
		flag++;
	}
	flag--;
	if(flag == 1)
	{
		cout << 2;
	}
	else if(flag == 0)
	{
		cout << "2(0)";
	}
	else
	{
		cout << "2(";
		f(flag);
		cout << ")";
	}
	n -= arr[flag];
	if(n != 0)
	{
		cout << "+";
		f(n);
	}
}
int main()
{
	int n;
	cin >> n;
	for(int i = 1;i < 20;i++)
	{
		arr[i] = arr[i-1] * 2;
	}
	f(n);
	return 0;
}
