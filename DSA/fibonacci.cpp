#include<iostream>
int main()
{
	int number;
	std::cin>>number;
	int a[number];
    a[0] = 0;
    a[1] = 1;
	for(int row=2;row<number;row++)
	{
		a[row] = a[row-2] + a[row-1];
	}
	for(int i=0;i<number;i++)
	{
		std::cout<<a[i]<<" ";
	}
	return 0;
}