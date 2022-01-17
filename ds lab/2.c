// 0 1 0 1
// 1 0 1 0
// 0 1 0 1
// 1 0 1 0

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void BFS(int src, int V, int graph[V][V]){
    bool visited[V];
    int i=0;
    for (i = 0; i < V; ++i) visited[i] = false;

    int queue[V], front = 0, back = 0;

    visited[src] = true;
    queue[back++] = src;

    while (front < back) {
        int first = queue[front];
        printf("%d ",queue[front++]);

        for (i = 0; i < V; ++i) {
            if (graph[first][i] && !visited[i]) {
                visited[i] = true;
                queue[back++] = i;
            }
        }
    }
}


int main() {
    int V,i=0,j=0; 
    printf("Enter Number of vertices: ");
    scanf("%d",&V);
    int graph[V][V];
    printf("Enter Adjacency matrix\n");
    for (i = 0; i < V; ++i) {
        for (j = 0; j < V; ++j) {
            scanf("%d",&graph[i][j]);
        }
    }
    BFS(0,V,graph);
    return 0;
}