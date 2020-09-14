#include <iostream>
using namespace std;
int N, M;

void createAdjMatrix(int Adj[10][10],
					int arr[10][10])
{
	for (int i = 0; i < N + 1; i++) {

		for (int j = 0; j < N + 1; j++) {
			Adj[i][j] = 0;
		}
	}
	for (int i = 0; i < M; i++) {

		int x = arr[i][0];
		int y = arr[i][1];
		Adj[x][y] = 1;

	}
}

void printAdjMatrix(int Adj[10][10])
{

	for (int i = 1; i < N + 1; i++) {
		for (int j = 1; j < N + 1; j++) {
			cout<<Adj[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	N = 7;
	int arr[10][10]
		= { { 1, 2 }, { 1, 3 },
			{ 2, 5 }, { 2, 6 },{3,4},{3,7},{4,6},{5,7},{6,7} };

	M = sizeof(arr) / sizeof(arr[0]);
	int Adj[10][10];
	createAdjMatrix(Adj, arr);
	printAdjMatrix(Adj);

	return 0;
}


