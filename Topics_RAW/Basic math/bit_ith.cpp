#include <bits/stdc++.h>
using namespace std;

int getithbit(int &n, int i)
{
	// create a mask
	int mask = (1 << i);
	return (n & mask) > 0 ? 1 : 0;
}

int clearbit(int &n, int i)
{
	int mask = ~(1 << i);
	n = n & mask;
	return n;
}
int setbit(int &n, int i)
{
	int mask = (1 << i);
	n = n | mask;
	return n;
}

int updatebit(int &n, int i, int v) // 13- 1 1 0 1
{									//  m-  1 1 1 0
	clearbit(n, i);					//  n-   1 1 1 1
	int mask = (v << i);
	n = n | mask;
	return n;
}

int clear__ith_bit(int &n, int i)
{
	int mask = ((-1) << i);
	n = (n & mask);
	return n;
}
int clear_range_bit(int &n, int i, int j)
{
	/*
	n      = 11111  (31 in binary)
	m      = 11110001
	n & m  = 11110001 & 00011111 = 00010001 = 17
*/
	int a = (~0) << (j + 1);
	int b = (1 << i) - 1;
	int m = a | b;
	n = n & m;
	return n;
}

// replace bits - first clear the bit in range -> than shift the bits that you want to replace
//  by ith position -> Than or them
int replace_bit(int n, int i, int j, int mi)
{
	int a = (~0) << (j + 1);
	int b = (1 << i) - 1;
	int m = a | b;
	n = n & m;

	// now replace code part
	int mask = mi << i;
	n = n | mask;
	return n;
}

// power of 2 or not
int power_2(int n)
{
	if ((n & (n - 1)) == 0 || n == 4)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

// count set bits
int counting_bits_set_tricks(int n)
{
	int cnt = 0;
	while (n > 0)
	{
		int id = (n & 1);
		cnt += id;
		n = n >> 1;
	}

	return cnt;
}

// count set bits short tricks
int counting_bits_set(int n)
{
	int cnt = 0;
	while (n > 0)
	{
		n = n & (n - 1);
		cnt++;
	}

	return cnt;
}
int main()
{
#ifndef ONLINE_JUDGE // if not defined
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif // if defined

	int n;
	cin >> n;
	int i;
	cin >> i;

	// cout<<" getithbit :  ith bit is "<<getithbit(n,i)<<endl;
	// cout<<" clearbit :  ith bit is "<<clearbit(n,i)<<endl;
	// cout<<" setbit :  ans "<<setbit(n,i)<<endl;
	// cout<<" updatebit :  ans "<<updatebit(n,i,1)<<endl;
	// cout<<" clear_last_ith_bit :  ans "<<clear__ith_bit(n,i)<<endl;
	// cout<<" clear_range_bit : ans " <<clear_range_bit(n , i, 3)<<endl;
	// cout<<"replace_bit : ans "<<replace_bit(n,i,3,2)<<endl;
	// (power_2(n))>0?cout<<"power ":cout<<"Not a power_2";
	// cout<<"counting set bits : ans " <<counting_bits_set(n)<<endl;
	cout << "counting_bits_set_tricks : ans " << counting_bits_set_tricks(n) << endl;
}