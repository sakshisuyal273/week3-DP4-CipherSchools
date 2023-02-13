class Graph
{
    int v;
    list<int> *adj;

    public:
       Graph(int v) {
        this->v = v;
        this->adj = new list[this->v];
       }
        
    void Adddge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    //remove edge

    vector<int> DFS() {
 vector<int> BFS() {
        bool * visited = new bool[this->v];
        for(int i=0; i<this->v; i++) {
            visited[i]= false;
        }

        int count=0;
        for(int i=0; i<this->v; i++) {
            if(!visited[i]) {
                count++;
                DFS(i , visited ,result);
            }
        }
    }

    vector<int> BFS() {
        bool * visited = new bool[this->v];
        for(int i=0; i<this->v; i++) {
            visited[i]= false;
        }

        list<int> Q;
        int source = 0;
        visited[source] = true;
        Q.push_back(source);
        while(!Q.empty()) {
            source = Q.front(); Q.pop_front();
            result.push_back(source);

            for(auto itr = adj[source.begin()];  itr != adj[source].end(); itr++) {
                if(!visited[*itr]) {
                    visited[*itr] = true;
                    q.push_back(*itr);
                }
            }
        }
        return result;
    }

};


int main() {


}