//Algorithm
/*
BFS based approach :

1. Create a queue of pairs.
2. Insert an initial index given in the queue.
3. Mark initial index as visited in vis[][] matrix.
4. Until the queue is not empty repeat step 4.1 to 4.6
	Take the front element from the queue
	Pop from the queue
	Store current value/color at coordinate taken out from queue (precolor)
	Update the value/color of the current index which is taken out from the queue
	Check for all 4 direction i.e (x+1,y),(x-1,y),(x,y+1),(x,y-1) is valid or not and if valid then check that value at that coordinate should be equal to precolor and value of that coordinate in vis[][] is 0.
	If all the above condition is true push the corresponding coordinate in queue and mark as 1 in vis[][]
5. Print the matrix.

*/

#include <bits/stdc++.h>
using namespace std;

// Function to check valid coordinate
int validCoord(int x, int y, int n, int m)
{

	if (x < 0 || y < 0) {
		return 0;
	}
	if (x >= n || y >= m) {
		return 0;
	}
	return 1;
}

// Function to run bfs
void bfs(int n, int m, int data[][8],
         int x, int y, int color)
{

// Visiting array
	int vis[101][101];

// Initialing all as zero
	memset(vis, 0, sizeof(vis));

// Creating queue for bfs
	queue<pair<int, int> > obj;

// Pushing pair of {x, y}
	obj.push({ x, y });

// Marking {x, y} as visited
	vis[x][y] = 1;

// Until queue is empty
	while (obj.empty() != 1)
	{

		// Extracting front pair
		pair<int, int> coord = obj.front();
		int x = coord.first;
		int y = coord.second;
		int preColor = data[x][y];

		data[x][y] = color;

		// Popping front pair of queue
		obj.pop();

		// For Upside Pixel or Cell
		if (validCoord(x + 1, y, n, m)
		        && vis[x + 1][y] == 0
		        && data[x + 1][y] == preColor)
		{
			obj.push({ x + 1, y });
			vis[x + 1][y] = 1;
		}

		// For Downside Pixel or Cell
		if (validCoord(x - 1, y, n, m)
		        && vis[x - 1][y] == 0
		        && data[x - 1][y] == preColor)
		{
			obj.push({ x - 1, y });
			vis[x - 1][y] = 1;
		}

		// For Right side Pixel or Cell
		if (validCoord(x, y + 1, n, m)
		        && vis[x][y + 1] == 0
		        && data[x][y + 1] == preColor)
		{
			obj.push({ x, y + 1 });
			vis[x][y + 1] = 1;
		}

		// For Left side Pixel or Cell
		if (validCoord(x, y - 1, n, m)
		        && vis[x][y - 1] == 0
		        && data[x][y - 1] == preColor)
		{
			obj.push({ x, y - 1 });
			vis[x][y - 1] = 1;
		}
	}

// Printing The Changed Matrix Of Pixels
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << data[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}


int main()
{
	int n, m, x, y, color;
	n = 8;
	m = 8;

	int data[8][8] = {
		{ 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 0, 0 },
		{ 1, 0, 0, 1, 1, 0, 1, 1 },
		{ 1, 2, 2, 2, 2, 0, 1, 0 },
		{ 1, 1, 1, 2, 2, 0, 1, 0 },
		{ 1, 1, 1, 2, 2, 2, 2, 0 },
		{ 1, 1, 1, 1, 1, 2, 1, 1 },
		{ 1, 1, 1, 1, 1, 2, 2, 1 },
	};

	x = 4, y = 4, color = 3;

// Function Call
	bfs(n, m, data, x, y, color);
	return 0;
}


// The time complexity of the proposed solution is O(M × N)
// and requires O(M × N) extra space, where M and N are dimensions of the matrix.
