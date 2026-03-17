#include <stdio.h>
#include <limits.h>

#define MAX 20

int n;
int dist[MAX][MAX];
int dp[1 << MAX][MAX];

// Function to find minimum cost
int tsp(int mask, int pos) {
    // If all cities are visited, return cost to go back to start
    if (mask == (1 << n) - 1) {
        return dist[pos][0];
    }

    // If already computed
    if (dp[mask][pos] != -1) {
        return dp[mask][pos];
    }

    int ans = INT_MAX;

    // Try visiting all unvisited cities
    for (int city = 0; city < n; city++) {
        if ((mask & (1 << city)) == 0) {
            int newAns = dist[pos][city] +
                         tsp(mask | (1 << city), city);

            if (newAns < ans) {
                ans = newAns;
            }
        }
    }

    return dp[mask][pos] = ans;
}

int main() {
    printf("Enter number of cities: ");
    scanf("%d", &n);

    printf("Enter distance matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &dist[i][j]);
        }
    }

    // Initialize DP array
    for (int i = 0; i < (1 << n); i++) {
        for (int j = 0; j < n; j++) {
            dp[i][j] = -1;
        }
    }

    int result = tsp(1, 0); // Start from city 0

    printf("Minimum travelling cost: %d\n", result);

    return 0;
}