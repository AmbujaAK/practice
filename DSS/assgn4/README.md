# How to run.
- c++ file.cpp
- ./a.out

## input
*Enter the number of nodes in the graph*
7
*The nodes are be numbered from 1 to 7*
*Enter the connections as : node1 node2*
*Please make sure that the graph is fully connected*
*Enter 0 when complete*
1 2
1 3
2 3
2 4
2 5
3 6
3 7
0
*Enter the number of queries*
2
*Enter the root*
1

## Output
1 passes messsage to 2 with its current timestamp
2 receives the message as it is fresh for this node. It replies to 1 makes 1 as its parent, and updates its timestamp as per this message
1 passes messsage to 3 with its current timestamp
3 receives the message as it is fresh for this node. It replies to 1 makes 1 as its parent, and updates its timestamp as per this message
2 passes messsage to 3 with its current timestamp
3 discards this message of 2 as this message is obselete
2 passes messsage to 4 with its current timestamp
4 receives the message as it is fresh for this node. It replies to 2 makes 2 as its parent, and updates its timestamp as per this message
2 passes messsage to 5 with its current timestamp
5 receives the message as it is fresh for this node. It replies to 2 makes 2 as its parent, and updates its timestamp as per this message
3 passes messsage to 2 with its current timestamp
2 discards this message of 3 as this message is obselete
3 passes messsage to 6 with its current timestamp
6 receives the message as it is fresh for this node. It replies to 3 makes 3 as its parent, and updates its timestamp as per this message
3 passes messsage to 7 with its current timestamp
7 receives the message as it is fresh for this node. It replies to 3 makes 3 as its parent, and updates its timestamp as per this message
In the spanning tree created
1 is the Root Node
The parent of 2 is 1
The parent of 3 is 1
The parent of 4 is 2
The parent of 5 is 2
The parent of 6 is 3
The parent of 7 is 3
