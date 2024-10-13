#include<iostream>
#include<unordered_map>
#include<map>
#include<stack>
#include<list>
#include<algorithm>
#include<queue>

using namespace std;

class Graph {
        public:

        unordered_map<int,list<int> >adjlist;

        void addEdge(int u,int v,bool direction){
            // direction : 0->undirected
            // direction :1->directed
            if(direction==1){
                adjlist[u].push_back(v);
            }
            else{
                adjlist[u].push_back(v);
                adjlist[v].push_back(u);

            }
        }
        void printADjlist(){
            for(auto i:adjlist){
                cout<<i.first<<" ";
                for(auto j:i.second){
                    cout<<j<<",";

                }
                cout<<endl;
            }

        }

        void tapoSortDFS(int src,map<int,bool>&visited,stack<int>&st){
            visited[src]=true;
            for(auto nbr:adjlist[src]){
                if(!visited[nbr]){
                    tapoSortDFS(nbr,visited,st);
                }
            }
            st.push(src);
        }

        void topsortBFS(int n){
            queue<int>q;
            map<int,int>indegree;
            for(auto i:adjlist){
                for(auto nbr:i.second){
                    indegree[nbr]++;
                }
            }
            //push all zero indegree wali node into queue
            for(int node=0;node<n;node++){
                if(indegree[node]==0){
                   q.push(node); 
                }
            }
            // BFS vala concept an ayenga
            while(!q.empty()){
                int frontnode=q.front();
                q.pop();
                cout<<frontnode<<",";

                for(auto nbr:adjlist[frontnode]){
                    indegree[nbr]--;
                    // check for zero
                    if(indegree[nbr]==0){
                        q.push(nbr);
                    }
                }

            }

        }


        void shortestPathBfs(int src, int dest) {
		queue<int> q;
		map<int,bool> visited;
		map<int,int> parent;

		//initial state
		q.push(src);
		visited[src] = true;
		parent[src] = -1;

		while(!q.empty()) {
			int frontNode = q.front();
			q.pop();

			for(auto nbr: adjlist[frontNode]) {
				if(!visited[nbr]) {
					q.push(nbr);
					parent[nbr] = frontNode;
					visited[nbr] = true;
				}
			}
		}

		//parent array tyaar hoga 
		vector<int> ans;
		while(dest != -1) {
			ans.push_back(dest);
			dest = parent[dest];
		}

		reverse(ans.begin(), ans.end());
		//printig the shortest path
		for(auto i: ans) {
			cout << i <<" ";
		}
		
	}
};

int main(){


    
	Graph g;
	g.addEdge(0, 5, 0);
	g.addEdge(5, 4, 0);
	g.addEdge(4, 3, 0);
	g.addEdge(0, 6, 0);
	g.addEdge(6, 3, 0);
	g.addEdge(0, 1, 0);
	g.addEdge(1, 2, 0);
	g.addEdge(2, 3, 0);

//int n = 7;
	int src = 0;
	int dest = 3;

	g.shortestPathBfs(src, dest);

// Graph g;
// g.addEdge(0,1,1);
// g.addEdge(1,2,1);
// g.addEdge(2,3,1);
// g.addEdge(2,4,1);
// g.addEdge(3,5,1);
// g.addEdge(4,5,1);
// g.addEdge(5,6,1);
// int n=7;
// //g.addEdge(6,7,1);
// g.topsortBFS(n);
// g.printADjlist();
// int n=8;

// map<int,bool>visited;
// stack<int>st;
// for(int node=0;node<n;node++){
//     if(!visited[node]){
//         g.tapoSortDFS(node,visited,st);
//     }
// }
// cout<<"printing topo order:"<<endl;

// while(!st.empty()){
//     cout<<st.top();
//     st.pop();
// }
}