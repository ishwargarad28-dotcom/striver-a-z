#include <stdio.h>
#define INF 999

int main() {
    int n = 4;
    int cost[4][4] = {
        {0, 10, INF, 30},
        {10, 0, 50, INF},
        {INF, 50, 0, 20},
        {30, INF, 20, 0}
    };

    int dist[4], visited[4] = {0};
    int start = 0;

    for(int i = 0; i < n; i++)
        dist[i] = cost[start][i];

    visited[start] = 1;
    dist[start] = 0;

    for(int count = 1; count < n; count++) {
        int min = INF, u;

        for(int i = 0; i < n; i++) {
            if(!visited[i] && dist[i] < min) {
                min = dist[i];
                u = i;
            }
        }

        visited[u] = 1;

        for(int v = 0; v < n; v++) {
            if(!visited[v] && dist[u] + cost[u][v] < dist[v]) {
                dist[v] = dist[u] + cost[u][v];
            }
        }
    }

    printf("Shortest distances:\n");
    for(int i = 0; i < n; i++)
        printf("%d -> %d = %d\n", start, i, dist[i]);

    return 0;
}