#pragma once
#include <list>
#include <vector>
#include <iostream>
using namespace std;


class Graph
{
private:
	// number of Vertices
	int V;
	// name of the each Vertices
  vector<string> vertexNames = {"Atlanta", "Austin", "Chicago", "Dallas", "Denver", "Houston", "Washington"};
	// array of list for nodes/vertices for Adjacency LIST
	list <int> *adj;						           //Programmer2
	// array of nodes/vertices for Adjacency MATRIX
	int **adj2;								             //Programmer2
	void DFSUtil(int v, bool visited[]);	 //Lead
	void BFSUtil(int s, bool visited[]);	 //Lead

 public:
 // construct vertices
	Graph(int);								        //All	
	void addEdge(int u, int v);				//All
	void addEdge2(int u, int v);			//Programmer2
	void printGraph();						    //All
	void printGraph2();						    //Programmer2
	// Depth First Search start from 'v'
	void DFS(int v);						      //Lead
	// Breadth First Search start from 's'
	void BFS(int s);						      //Lead
};

