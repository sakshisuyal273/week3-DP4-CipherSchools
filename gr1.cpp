//cycle in undirected graph

bool isCyclic(int source, int parent, bool *visited) {
    visited[source] = true;
    for(auto itr = adj[source].begin(); itr != adj[source].end(); itr++) {
        if(!visited[*itr]) {
            if(isCyclic(*itr, source, visited)) {
                return true;
            }
            else {
                if(*itr != parent) {
                    return true;
                }
            }
        }
        return false;
    }

    bool ISCyclic() {
        bool *visited = new bool[this->v];
        for(int i=0; i<this->v; i++) {
            visited[i] = false;
        }

        for(int i=0; i<this->v; i++) {
            if(!visited[i]) {
                if(isCyclic(i, -1, visited))
                   return true;
            }
        }
        return false;



        bool isCyclic() {
            bool * visited = new bool[this->V];
            for(int i=0; i<this->V; i++) {
                visited[i] = false;
            }

            for(int i=0; i<this->V; i++) {
                if(!visited[i]) {
                    if(isCyclic(i, -1, visited))
                       return true;
                }
            }
            return false;
        }
        

       bool isCyclic(int source, bool * visited, bool* recursive) {
        visited[source] = true;
        recursive[source] = true;

        for(auto itr = adj[source].begin(); itr != adj[source].end(); i++) {
            if(!visited[*itr] && isCyclic(*itr, visited, recursive)) {
                return true;
            }
            else if(recursive[*itr] == true) {
                  return true;
            }
        }
       }


        bool isCyclic() {
            bool *visited = new bool[this->V];
            bool *recursive = new bool[this->V];
            for(int i=0; i<this->v; i++) {
                recursive[i] = visited[i] = false;
            }

            for(int i=0; i<this->V; i++) {
                if((*isCyclic(i, visited, recursive))) {
                    return true;
                }
            }
            return false;
        }
    }
}