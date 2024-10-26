import java.util.*;

public class Dijkstra {
    public static int[] dijkstra(int vertices, int[][] edges, int source) {
        int[] distances = new int[vertices];
        Arrays.fill(distances, Integer.MAX_VALUE);
        distances[source] = 0;

        PriorityQueue<int[]> pq = new PriorityQueue<>(Comparator.comparingInt(a -> a[1]));
        pq.offer(new int[]{source, 0});

        while (!pq.isEmpty()) {
            int[] curr = pq.poll();
            int u = curr[0];
            int distU = curr[1];

            for (int[] edge : edges) {
                if (edge[0] == u) {
                    int v = edge[1], weight = edge[2];
                    int newDist = distU + weight;
                    if (newDist < distances[v]) {
                        distances[v] = newDist;
                        pq.offer(new int[]{v, newDist});
                    }
                }
            }
        }
        return distances;
    }
}
