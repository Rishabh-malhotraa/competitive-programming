/*
   Union Find Disjoint Sets (UFDS)
   
   Cada conjunto é representado por uma árvore, onde o elemento raiz é o identificador único de todo o conjunto.

   Um elemento n é a raiz de sua árvore se parent[n] == n
*/
#include <bits/stdc++.h>
using namespace std;

class ufds {
 private:
   vector<int> parent; // parent[n] = pai do elemento n
   vector<int> size;   // size[n] = tamanho do conjunto identificado por n
   int qty_disjoint_sets;

 public:
   ufds(int N) {
      parent.resize(N);
      size.assign(N, 1);
      qty_disjoint_sets = N;
      
      // inicialmente, há N conjuntos disjuntos
      for (int n = 0; n < N; n++) parent[n] = n;
   }

   /* O(1) - retorna o nó raiz do conjunto em que n está */
   int find_set(int n) {
      if (parent[n] == n) return n;
      return parent[n] = find_set(parent[n]); // path compression
   }
	
   /* O(1) - os conjuntos de n e de m são os mesmos? */
   bool is_same_set(int n, int m) {
      return find_set(n) == find_set(m);
   }

	/* O(1) - conecta os conjuntos de n e de m */
   void union_sets(int n, int m) {
      int n_id = find_set(n);
      int m_id = find_set(m);

      // union by size: conecta a menor árvore à maior árvore
      if (!is_same_set(n_id, m_id)) {
         if (size[n_id] > size[m_id])
            swap(n_id, m_id);

         parent[n_id] = m_id;
         size[m_id] += size[n_id];

         qty_disjoint_sets--;
      }
   }

   /* O(1) - tamanho do conjunto de n */
   int set_size(int n) {
      return size[find_set(n)];
   }

   /* O(1) - quantidade de conjuntos disjuntos */
   int count() {
      return qty_disjoint_sets;
   }
};

int main() {
   ufds sets(5);
   sets.union_sets(0, 1);
   sets.union_sets(3, 4);
   sets.union_sets(0, 4);

   cout << sets.is_same_set(0, 4) << endl;
}