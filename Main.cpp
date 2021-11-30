#include <iostream>
#include "Data.h"
using namespace std;

int main()
{
	int ch; // option
	Graph g(8);
	cout << "PLEASE MAXIMIZE SCREEN / FULLSCREEN" << endl;
	cout << "Graph Operations" << endl;
	cout << "[1] Adjacency List" << endl;
	cout << "[2] Adjacency Matrix" << endl;
  cout << "[3] Exit Program" << endl;
	cout << "Enter choice: ";
	cin >> ch;
	if (ch == 1)
	{
		g.addEdge(0, 5);
		g.addEdge(5, 6);
		g.addEdge(1, 3);
		g.addEdge(3, 5);
		g.addEdge(2, 4);
		g.addEdge(3, 1);
		g.addEdge(1, 2);
		g.addEdge(4, 0);
		g.addEdge(0, 2);
		g.addEdge(6, 0);
		g.addEdge(0, 3);
		g.printGraph();
		cout << endl << "DFS Traversal..." << endl;
		g.DFS(1);
		cout << endl << endl;
		cout << endl << "BFS Traversal..." << endl;
		g.BFS(3);
	}
	else if (ch == 2) 
	{
		g.addEdge2(0, 5);
		g.addEdge2(5, 6);
		g.addEdge2(1, 3);
		g.addEdge2(3, 5);
		g.addEdge2(2, 4);
		g.addEdge2(3, 1);
		g.addEdge2(1, 2);
		g.addEdge2(4, 0);
		g.addEdge2(0, 2);
		g.addEdge2(6, 0);
		g.addEdge2(0, 3);
		g.printGraph2();
	}
	else if (ch == 3)
	{
		cout << "Program ended." << endl;
	}
	else
	{
		cout << "Invalid option!";
	}

	cout << endl << endl;
}