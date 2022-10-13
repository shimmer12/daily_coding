    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>bfs;
        queue<int>q;
        q.push(0);
        int vis[V];
        memset(vis,0,sizeof(vis));
        vis[0]=1;
        while(!q.empty())
        {
            int top=q.front();
            q.pop();
            bfs.push_back(top);
            for(auto it:adj[top])
            {
                if(!vis[it])
                {
                    q.push(it);
                    vis[it]=1;
                }
            }
        }
        return bfs;
    }