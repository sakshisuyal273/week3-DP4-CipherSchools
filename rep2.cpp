class DisJointSets {
    public : 
       DisjointSets(int N);

       int Find(int u);

       void Union(int u, int v);
};

class Edge {
    public :
      int source, destination;
      double weight;

};

bool comparator(const Edge &a, const Edge &b) {
    return a.weight <= b.weight;
}

class Graph {
    int V, E;
    vector<Edge> edges;
    public :
    Graph(int V, int E) {
        this->V = V;
        this->E = E;
    }

    void AddEdge(itn u, int v, double w) {
        this->edges.push_back(Edge(u,v,w));
    }

    vector<Edge> Kruskal() {
        sort(this->edges.begin(), this->edges.end(), comparator);

        DisJointSets ds(this->V);

        for(auto itr = this->edges.begin(); itr != this->edges.end(); itr++) {
            int u = itr->source, v = itr->destination;
            int parentU = ds.Find(u), parentV = ds.Find(v);

            if(parentU == parentV) {

            }
            else {
                minWeight += itr->weight;
                result.push_back(*itr);
                ds.Union(u,v);
            }

        }
        return {result, minWeight};
    }
};

class Graph {
    int V;
    list<int * > adj;

    public : 


void topologicalSort(int source, bool* visited, vector<int> result) {
    visited[source] = true;
    for(auto itr = adj[source].begin(); itr != adj[source].end(); itr++) {
        if(!visited[*itr]) {
            topologicalSort(*itr, visited, result);
        }
    }
    result.push_back(source);
}



    vector<int> topologicalSort() {
        vector<int> result;

        bool* visited = new bool[this->V];
        for(int i=0; i<this->V; i++) {
            visited[i] = false;
        }

        for(int i=0; i<this->V; i++) {
            if(!visited[i] {
                topologicalSort(i, visited, result);
            })
        }
    }
}


int main() {

}