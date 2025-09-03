#representing adjacency list using 3row two dimensional array
graph = [[]for _ in range(3)]

#saving node information linked to node 0(node, distance)
graph[0].append((1,7))
graph[0].append((2, 5))

#saving node information linked to node 1(node, distance)
graph[1].append((0,7))

#saving node information linked to node 2(node, distance)
graph[2].append((0,5))

print(graph)
