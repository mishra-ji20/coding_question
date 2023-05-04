 void bfsShortestPathApproach(vector<vector<long>> &graph,vector<long>& vis,int src)
    {
        queue<pair<long,long>>q;
        q.push({src,0});
        while(!q.empty())
        {
            int s=q.size();
            while(s--)
            {
                auto a=q.front();
                q.pop();
                // cout<<a.first<<" ";
                
                    for(int i=1;i<graph[a.first].size();i++)
                    {
                    
                        if(graph[a.first][i]!=LONG_MAX && vis[i]>graph[a.first][i]+a.second)
                        {
                            q.push({i,graph[a.first][i]+a.second});
                            vis[i]=graph[a.first][i]+a.second;
                        }
                    }
                }
            }
        
        // for(int i =1;i<vis.size();i++)
        // {
        //     cout<<vis[i]<<" ";
        // }
        
    }
