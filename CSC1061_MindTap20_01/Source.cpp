// CSC1061_MindTap20_01
// Depth First Traversal
#include <iostream>
#include <fstream>
#include "graphType.h" 

using namespace std;

int main()
{
	graphType myGraph(50);

	myGraph.createGraph();
	cout << endl << endl;

	cout << "Depth First Traversal: ";
	myGraph.depthFirstTraversal();
	cout << endl;

	return 0;
}