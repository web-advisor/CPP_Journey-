#include <bits/stdc++.h>
using namespace std;

int sum(int freq[], int i, int j);

int optimalSearchTree(int keys[], int freq[], int n)
{
	int cost[n][n];


	for (int i = 0; i < n; i++)
		cost[i][i] = freq[i];

	// L is chain length.
	for (int L = 2; L <= n; L++)
	{
		// i is row number in cost[][]
		for (int i = 0; i <= n-L+1; i++)
		{
			int j = i+L-1;
			cost[i][j] = INT_MAX;

			for (int r = i; r <= j; r++)
			{
			int c = ((r > i)? cost[i][r-1]:0) +
					((r < j)? cost[r+1][j]:0) +
					sum(freq, i, j);
			if (c < cost[i][j])
				cost[i][j] = c;
			}
		}
	}
	return cost[0][n-1];
}


int main()
{
	int keys[] = {12, 14, 20};
	int freq[] = {34, 10, 60};
	int n = sizeof(keys)/sizeof(keys[0]);
	cout << "Cost of Optimal BST is " << optimalSearchTree(keys, freq, n);
	return 0;
}

int sum(int freq[], int i, int j)
{
	int s = 0;
	for (int k = i; k <= j; k++)
	s += freq[k];
	return s;
}
