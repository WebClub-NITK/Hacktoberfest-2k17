#include <iostream>
#include <vector>



using namespace std;

class Edge{
    public:
    int start;
    int end;
    int weight;
    Edge(int start, int end, int weight){
        this->start = start;
        this->end = end;
        this->weight = weight;
    }
};

/*
 * Partition function to find partition point
 * Quick Sort.
*/
int partition(vector<Edge *> &edges, int low, int high){
	int i, j;
	Edge * edge = edges[low];
	i = low;
	j = high;
	while(1){
		while(1){
			if(i == high || edges[i]->weight > edge->weight){
				break;
			}else{
				i++;
			}
		}
		while(1){
			if(j == low || edges[j]->weight <= edge->weight){
				break;
			}else{
				j--;
			}
		}
		if(i < j){
			Edge *swap = edges[i];
			edges[i] = edges[j];
			edges[j] = swap;
		}else{
			edges[low] = edges[j];
			edges[j] = edge;
			break;
		}
	}
	return j;
}

/*
 * Qucik Sort to sort Edge class objects
 * in ascending order.
*/
void quickSort(vector<Edge *> &edges, int low, int high){
	if(low < high){
		int partitionPoint = partition(edges, low, high);
		quickSort(edges, low, partitionPoint -1);
		quickSort(edges, partitionPoint+1, high);
	}
}

/*
 * Union two disjoint sets
*/
void unionSet(vector<int> &setInfo, int replace, int to){
	for(int i = 0; i < setInfo.size(); i++){
		if(setInfo[i] == replace){
			setInfo[i] = to;
		}
	}

}

/*
 * Find Spanning tree of given graph using Kruskal's
 * algorithm.
 * Input: All edges
 * Output: Edges belong to spanning tree
*/


vector<Edge *>* kruskalSpaningTree(vector<Edge *> &edges, int nodes){
	vector<int> setInfo(nodes);
	vector<Edge *> *spanningTreeEdges = new vector<Edge *>();
	long long ans = 0;
	for(int i = 0; i < nodes; i++){
		setInfo[i] = i;
	}

	for(int i = 0; i < edges.size(); i++){
		if(setInfo[edges[i]->start] != setInfo[edges[i]->end]){
			spanningTreeEdges->push_back(edges[i]);
			if(setInfo[edges[i]->start] < setInfo[edges[i]->end]){
				unionSet(setInfo, setInfo[edges[i]->end], setInfo[edges[i]->start]);
			}else{
				unionSet(setInfo, setInfo[edges[i]->start], setInfo[edges[i]->end]);
			}
		}
	}
	return spanningTreeEdges;
}

int main() {
	int n, m;
	cin >> n >> m;
	int start, end, weight;
	vector<Edge *> edges(m);
	for(int i = 0; i < m; i++){
		cin >> start >> end >> weight;
		edges[i] = new Edge(start-1, end-1, weight);
	}
	quickSort(edges, 0, edges.size()-1);
	
	vector<Edge *> *spanningTree = kruskalSpaningTree(edges, n);
    cout << "---------------Selected Edge Weights-----------------" << endl;	
	for(int i = 0; i < spanningTree->size(); i++){
		cout << spanningTree->at(i)->weight << " ";
	}
	cout << endl;
	return 0;
}

