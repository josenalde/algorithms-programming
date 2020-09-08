#include <iostream>
#include <list>
#include <vector>
#include <iterator>
#include <stack>

// Dica: ver caminho promissor

using namespace std;

int main() {
    int M; // min é 1
    int U, V, P, Q; // min é 1, max é N
    int C; // entre 0 e 100
    int N; // min é 2
    
    cin >> N >> M; // N: n. de vertices e M: n. de colorações
    //inicializacoes
	vector<list<int>> adj(N+1, list<int>(N-1));
    //cout << adj.size(); // = 4: N = 3, adj(5, list(2)), ou seja N+1
    vector<bool> marcado (N+1,0);
    vector<int> cores (N+1,0);
    vector<int> coresAntigas(N+1,0);
    
    for (int i = 0; i < N-1; i++) {
        cin >> U >> V;
        adj[U].push_back(V); // rota U-V e V-U adicionada
        adj[V].push_back(U);
        // cria lista de adj para cada vértice e associa cor 0 a cada vizinho?
    } 
    
    stack<int> PILHA;
        
    for (int i = 0; i < M; i++) {
        cin >> P >> Q >> C;
        // lê rota aresta P para Q mudando as cores
        PILHA.push(P); // coloca o vértice no topo da pilha
        int v_ = PILHA.top();
        marcado[P] = true; //marca como visitado
        cores[P] = C; //colore o vértice com a cor C
        list<int>::iterator itl1;
        
        //begin(): Returns an iterator pointing to the first element in the list container.
        for (itl1 = adj[v_].begin(); itl1!=adj[v_].end(); itl1++) {
            
            if (P == Q) {
                cores[Q] = C;
                marcado[*itl1] = true;
                while (!PILHA.empty()) PILHA.pop(); //remove vertice 
                break; // vai ler a outra rota
            }
            list<int>::iterator itl2;
            int cvavisitar = 0;
            int cvtotal = 0;
            for (itl2 = adj[v_].begin(); itl2!=adj[v_].end(); itl2++) {
                if (*itl2 != 0 and !marcado[*itl2]) cvavisitar++;
                if (*itl2 !=0) cvtotal++;
                // conta numero de vizinhos nao explorados
            }
            bool vEmpty = false;
            if (cvavisitar == 0) {
                cores[v_] = coresAntigas[v_]; //volta cor
                //cout << "cores antiga: " << cores[v_] << endl;
                PILHA.pop();
                v_ = PILHA.top();
                itl1 = adj[v_].begin();
                vEmpty = true;
            }
            //if (*itl1 != 0) {
            //    cout << "Vizinhos de " << v_ << ": " << cvtotal << endl;
            //    cout << "Vizinhos de " << v_ << " nao visitados: " << cvavisitar << endl;
            //}
            if (*itl1 != 0 and !vEmpty) {//evita 0s indevidos
               //cout << "Aresta: (" << v_ << ',' << *itl1 << ")" << endl;
               //testa se proximo vizinho já é o destino
               if (*itl1 == Q) { //depois ver auto ciclo
                   cores[Q] = C;
                   marcado[*itl1] = true;
                   while (!PILHA.empty()) PILHA.pop(); //remove vertice 
                   break; // vai ler a outra rota
               } else if (!marcado[*itl1]) { //se nao visitou
                   marcado[*itl1] = true;
                   coresAntigas[*itl1] = cores[*itl1];
                   cores[*itl1] = C; //pintou
                   PILHA.push(*itl1);
                   v_ = PILHA.top();
                   //cout << "Varrer lista de: " << v_ << endl;
                   itl1 = adj[v_].begin(); //profundidade
               } 
        }
    }
    //for (int i=1;i<=N;i++) 
    //    cout << cores[i] << ' ';
    for (int i=0;i<=N;i++) marcado[i] = false;
    }
        
    for (int i=1;i<=N;i++) printf("%d ", cores[i]);
    return 0;
}

// NO NEPS ERRO EM TEMPO DE EXECUÇÃO //
//teste errado 9, conjunto 1
// out 95 0 95 95 19 20 31 71 0 95
/* 10 10
2 1
3 1
4 1
5 1
6 3
7 1
8 4
9 7
10 4
9 10 14
3 1 8
5 6 19
9 8 71
3 6 20
7 1 1
10 4 20
3 9 0
1 7 31
10 3 95
*/