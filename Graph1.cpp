#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>

using namespace std;

class Graph {
        public:

        unordered_map<int,list<int> >adjlist;

        void addEdge(int u,int v,bool direction){
            // direction->0->undirected;
            // direction->1->directed

            if(direction==1){
                // u se v ki taraf ek edge hai
                //u->v
                adjlist[u].push_back(v);
            }
            else {
                // directed=0;
                // u--v
                // u->v;
                adjlist[u].push_back(v);
                // v->u;
                adjlist[v].push_back(u);
            }
            cout<<endl<<"print AdjList"<<endl;
            printAdjlist();
            cout<<endl;

        }
        void printAdjlist(){
            for(auto i:adjlist){
                cout<<i.first<<"->{";
                for(auto neighbour:i.second){
                    cout<<neighbour<<",";
                }
                cout<<"}"<<endl;
            }
        }
        bool checkcycleUndirectedBFS(int src){
          queue<int>q;
          unordered_map<int,bool>visited;
          unordered_map<int,int>parent;
          q.push(src);
          visited[src]=true;
          parent[src]=-1;

          while(!q.empty()){
            int frontNode=q.front();
            q.pop();
            for(auto nbr:adjlist[frontNode]){
              if(!visited[nbr]){
                q.push(nbr);
                visited[nbr]=true;
                parent[nbr]=frontNode;
              }
              else if(visited[nbr]=true && frontNode != parent[nbr]){
                //cycle present 
                return true;
              }
            }
          }
// cycle not present
return false;

        }


    };

// template <typename T>
// class Graph {
//   public:
//     unordered_map<T, list<pair<T,int> > > adjList;

//     void addEdge(T u, T v, int wt, bool direction) {
//       if(direction == 1) {
//         adjList[u].push_back(make_pair(v,wt));
//       }
//       else {
//         adjList[u].push_back({v,wt});
//         adjList[v].push_back({u,wt});
//       }
    
//     }

//     void printAdjList() {
//       for(auto i: adjList) {
//         cout << i.first <<": {  ";
//         for(pair<T,int> p: i.second) {
//           cout << "{"<<p.first <<", "<<p.second <<"}, ";
//         }
//         cout<<"}" << endl;
//       }
//     }




//     void BFSTraversal(T src){
//         // adjlist already data member me hai
//         //visited
//         unordered_map<T,bool>vis;

//         queue<T>q;

//         // initial state 
// q.push(src);
// vis[src]=true;
// while(!q.empty()){
//     T frontNode=q.front();
//     cout<<frontNode<<" ";
//     q.pop();

//     // go to nbr
//     for(auto nbr:adjList[frontNode]){
//         T nbrData=nbr.first;

//         if(!vis[nbrData]){
//             q.push(nbrData);
//             vis[nbrData]=true;
//         }
//     }
// }


//     }

//      void dfs(T src, unordered_map<T,bool>& vis ) {
//       vis[src] = true;
//       cout << src << " ";

//       for(auto nbr: adjList[src]) {
//         T nbrData = nbr.first;
//         if(!vis[nbrData]) {
//           dfs(nbrData, vis);
//         }
//       }
//     }


// };







int main(){
    Graph g;
    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(1,3,0);
    g.addEdge(2,4,0);
    // g.addEdge(3,4,0);
    g.addEdge(2,5,0);
int src=0;
    bool iscyclic=g.checkcycleUndirectedBFS(src);
    if(iscyclic){
      cout<<"cycle is present "<<endl;
    }
    else{
      cout<<"cycle is not present "<<endl;
    }

// g.addEdge(0,1,5,1);
// g.addEdge(1,2,10,1);
// g.addEdge(1,3,20,1);
// g.addEdge(2,3,50,1);


//  Graph g;
//  // cout << "HII" << endl;
//   g.addEdge('a','b',0);
//   g.addEdge('a','c',0);
//   g.addEdge('c','d',0);
//   g.addEdge('c','e',0);
//   g.addEdge('d','e',0);
//   g.addEdge('e','f',0);
  
// for(char node='a';node<='f';node++){
//     if(!vis[node]){
//         g.BFSTraversal(node);
//     }
// }
//    g.BFSTraversal('a');

    return 0;

}
