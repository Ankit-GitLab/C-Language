#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int adj[MAX][MAX], visited[MAX], n;

void bfs(int start) {
    int queue[MAX], front = 0, rear = -1;
    visited[start] = 1;
    queue[++rear] = start;
    printf("BFS Traversal: ");
    while (front <= rear) {
        int v = queue[front++];
        printf("%d ", v);
        for (int i = 0; i < n; i++) {
            if (adj[v][i] && !visited[i]) {
                queue[++rear] = i;
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}

void dfs(int v) {
    visited[v] = 1;
    printf("%d ", v);
    for (int i = 0; i < n; i++) {
        if (adj[v][i] && !visited[i])
            dfs(i);
    }
}

int main() {
    int i, j, start;
     printf("program by Ankit, roll_no 246003\n");
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &adj[i][j]);

    printf("Enter starting vertex (0 to %d): ", n - 1);
    scanf("%d", &start);

    // BFS Traversal
    for (i = 0; i < n; i++) visited[i] = 0;
    bfs(start);

    // DFS Traversal
    for (i = 0; i < n; i++) visited[i] = 0;
    printf("DFS Traversal: ");
    dfs(start);
    printf("\n");

    return 0;
}
