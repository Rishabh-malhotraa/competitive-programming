/* 
   Dado um grafo G(V, E) e um vértice inicial s, uma DFS busca o vértice mais profundo possível antes de tentar ir para outro ramo.

   Toda DFS gera uma DFS spanning tree (which is directed)

   ---
   Se necessário "backtracking" (pois u pode ter outro lvl por outro caminho), inserir na última linha da função dfs seen[u] = false; 
*/
#include <bits/stdc++.h>
using namespace std;

/* input */
vector<vector<int>> adj_list; int V;

vector<bool> seen;

/* O(V+E) */
void dfs(int u, int u_depth = 0) {
   seen[u] = true;

   printf("%d ", u); 

   for (int v : adj_list[u])
      if (!seen[v])
         dfs(v, u_depth+1);
}

int main() {
   adj_list.assign(V, vector<int>());

   seen.assign(V, false);
   for (int cc = 0, u = 0; u < V; u++)
      if (!seen[u]) {
         printf("%d-th connected component: \n", ++cc);
         dfs(u);
      }
}
