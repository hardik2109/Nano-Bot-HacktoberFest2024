#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <climits>

std::vector<int> dijkstra(int start, const std::vector<std::vector<std::pair<int, int>>>& adjList) {
    int n = adjList.size();
    std::vector<int> dist(n, INT_MAX);
    dist[start] = 0;

    using pii = std::pair<int, int>;
    std::priority_queue<pii, std::vector<pii>, std::greater<pii>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        int currDist = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if (currDist > dist[node]) continue;

        for (const auto& edge : adjList[node]) {
            int nextNode = edge.first;
            int weight = edge.second;

            if (dist[node] + weight < dist[nextNode]) {
                dist[nextNode] = dist[node] + weight;
                pq.push({dist[nextNode], nextNode});
            }
        }
    }
    return dist;
}
