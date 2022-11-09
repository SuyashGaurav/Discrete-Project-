#include <queue>
#include <vector>
#include <iostream>
using namespace std;

class Solution{
    public:
    int CheapestFLight(int n, vector<vector<int>>& flights, int src, int dst, int K)  {
        vector<pair<int, int>> adj[n]; //node, weight
        for(auto it : flights){
            adj[it[0]].push_back({it[1], it[2]});
        }
        vector<int> dist(n, 1e9);
        dist[src]= 0;
        queue<pair<int, pair<int,int>>> q;// stops, data, cost
        q.push({0, {src, 0}});
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            int stop = it.first;
            int data = it.second.first;
            int cost = it.second.second;
            if(stop > K) break;
            for(auto iter: adj[data]){
                int adjNode = iter.first;
                int edw = iter.second;
                if(cost + edw < dist[adjNode]){
                    dist[adjNode] = cost + edw;
                    q.push({stop+1, {adjNode, dist[adjNode]}});
                }
            }
        }
        if(dist[dst]==1e9){return -1;}
        return dist[dst];
    }
};

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n; cin>>n;
        int edge; cin>>edge;
        vector<vector<int>> flights;
        
        for(int i=0; i<edge; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            flights.push_back(temp);
        }
        
        int src,dst,k;
        cin>>src>>dst>>k;
        Solution obj;
        cout<<obj.CheapestFLight(n,flights,src,dst,k)<<"\n";
    }
    return 0;
}
// Input format:
// 1 (number of test cases)
// 4 5 (number of nodes, number of edges)
// 0 1 100 (edges)
// 1 2 100 (edges)
// 2 0 100 (edges)
// 1 3 600 (edges)
// 2 3 200 (edges)
// 0 (src)
// 3 (dest)
// 1 (K)
