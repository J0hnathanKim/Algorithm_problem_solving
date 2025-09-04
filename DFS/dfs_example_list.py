# Define DFS method
def dfs(graph, v, visited):
    # Mark the current node as visited
    visited[v] = True
    print(v, end=' ')
    # Recursively visit all other nodes connected to the current node
    for i in graph[v]:
        if not visited[i]:
            dfs(graph, i, visited)


# Represent the connection information of each node using a list (2D list)
graph = [
    [],
    [2, 3, 8],
    [1, 7],
    [1, 4, 5],
    [3, 5],
    [3, 4],
    [7],
    [2, 6, 8],
    [1, 7]
]

# Represent whether each node has been visited (1D list)
visited = [False] * 9

# Call the defined DFS function
dfs(graph, 1, visited)
