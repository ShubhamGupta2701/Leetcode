// 2812. Find the safest path in a Grid


class Solution {
public:
    int maximumSafenessFactor(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        if(grid[0][0] || grid[n-1][n-1]) return 0;
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>vis(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]){
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
            }
        }
        vector<vector<int>>dist(n,vector<int>(m));
        vector<int>v1={0,0,1,-1};
        vector<int>v2={1,-1,0,0};
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            int i=p.first.first;
            int j=p.first.second;
            int d=p.second;
            dist[i][j]=d;
            for(int k=0;k<4;k++){
                int x=i+v1[k];
                int y=j+v2[k];
                if(x>=0 && x<n && y>=0 && y<m && !vis[x][y]){
                    q.push({{x,y},d+1});
                    vis[x][y]=1;
                }
            }
        }
        priority_queue<pair<pair<int,int>,pair<int,int>>>pq;
        pq.push({{dist[0][0],dist[0][0]},{0,0}});
        vector<vector<int>>vis1(n,vector<int>(m));
        while(!pq.empty()){
            auto p=pq.top();
            pq.pop();
            int d=p.first.first;
            int mn=p.first.second;
            int i=p.second.first;
            int j=p.second.second;
            if(i==n-1 && j==n-1) return mn;
            for(int k=0;k<4;k++){
                int x=i+v1[k];
                int y=j+v2[k];
                if(x>=0 && x<n && y>=0 && y<m && !vis1[x][y]){
                    pq.push({{dist[x][y],min(mn,dist[x][y])},{x,y}});
                    vis1[x][y]=1;
                }
            }
        }
        return 0;
    }
};