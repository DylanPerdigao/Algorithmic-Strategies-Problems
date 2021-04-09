# Problem A - Party icebreaker
## Description
To cellebrate its success, a new company throws a really big party. Everyone who is someone in town is invited. To help people get to know each other, each guest is given a card with a number (a positive integer) upon arrival, and asked to find two other guests in the crowd to form a group of three such that:
    there is at least one man and one woman in the group
    the sum of the numbers held by the two women (or two men) in the group is equal to the number held by the man (or woman, respectively).
The first group to meet these conditions will win 60.000€, or so say the party organizers...
Since nobody could form such a group until the end of the party, some people demanded that all cards be collected to see whether the game was rigged so that the prize would not have to be paid. It is your job to find out whether, given the numbers handed out at the party, it was possible to win the game and claim the prize.
## Input
For each test case, the number of guests, n, is given in the first line, and each guest's number is given in the next n lines. To distinguish between men and women at the party, men's numbers were recorded as negative numbers, whereas women's numbers were recorded as positive. The end of the test case is indicated by a line containing "0". A new test case may then follow.
## Output
The output for each test case consists of a single line saying "Fair" if the game was fair and a winning group could indeed be found. Otherwise, the output must be "Rigged".
### Example
#### Example input
```
8
-1
3
5
-2
6
2
-5
7
0
4
-1
-2
1
2
0
```
#### Example output
```
Fair
Rigged
```
# Problem B - A new chess game
## Description
You are working on a new chess computer game with an infinite chessboard and only knights. Of course, you cannot have an infinite chessboard because you don't have infinite RAM! But you can compute the largest chessboard that you need since you know the current location of the knights and how many moves they can do.
The goal is to know the number of distinct chessboard cells that can be visited by n knights after a given number of moves of each knight. You can assume that two or more knights can be in the same cell at the same time.
We remind you that a knight can perform 8 different moves, as shown in the picture below.
## Input
The first line indicates the number of knights (1 <= n <= 30). Then, n lines follow. Each line gives the position (x,y) of a knight in the chessboard as well as the number of moves m (0 <= m <= 7) that it is allowed to perform. You may assume that knights never travel beyond coordinates -200 to 200.
## Output
For each test case, print the number of distint cells that can be visited by the n knights.
## Example 
### Input
```
4
-1 -1 2
2 2 1
3 3 3
4 4 3
```
### Output
```
155
```
# Problem C - Zé Manel is setting up a computer network
## Problem
Zé Manel is now working as a computer engineer. His first job is to set up a computer network in a company. The network topology must be a tree, that is, the highest level of the network consists of a root node, which is connected to a single or multiple nodes in the level below by a point-to-point link. These lower level nodes are also connected to a single or multiple nodes in the next level down and so on.
In addition to the tree structure, there are some constraints that he must take into account:
- In order to reduce costs, the amount of cable used should be the least possible.
- The maximum number of point-to-point links from a node in the network is bounded by some value.
- Therefore, given the cost of adding a feasible point-to-point link to each pair of network nodes, Zé Manel has to design the network with the tree topology that minimizes the cost and such that the number of point-to-point links that can be establish from each node does not exceed a given number.
## Input
Each test case starts with the number of network nodes (n), the number of feasible point-to-point links (m) and the maximum number of feasible point-to-point links for any node (k). Then, m lines follow. Each line contains three integers: the first two correspond to the network nodes IDs for which a point-to-point link can be established, and the third corresponds to the cost of establishing the link with cable. Note that your program cannot add a point-to-point link that is not considered to be feasible (for instance, breaking the tree structure or exceeding the bound on the number of allowed links). Also, any node can be the root.
## Output
Find the network as described above. In case there is no possibility of designing such network due to some constraint, the output should be "NO WAY!". Otherwise, output the minimum cost.
## Constraints
- n ≤ 12 
- m ≤ 40
- k ≤ n
## Example
### Input
```
6 9 3
1 2 1
1 4 62
1 6 99
2 3 1
2 6 34
3 4 1
3 5 13
4 5 1
5 6 99
5 10 3
1 2 70
1 3 75
1 4 62
1 5 40
2 3 25
2 4 47
2 5 14
3 4 93
3 5 5
4 5 20
6 6 3
1 2 70
1 3 23
2 3 13
4 5 43
4 6 16
5 6 45
```
### Output
```
38
90
NO WAY!
```

# Problem D - Radical Winter Games
## Description
In a special winter edition of a popular TV game show, players were asked to ski down a hill and to collect flags on their way down. The flags were laid out in a triangular fashion on the hill side, and each flag had a number, an integer between 0 and 99, as illustrated below:
```
                       7
                    3     8
                 8     1     0
              2     7     4     4
           4     5     2     6     5
```
Starting at the top of the hill, players were able to ski downhill diagonally, either to the left or to the right, in order to collect the next flag. The player's score was the sum of the numbers in the flags collected.
Write a program to compute the highest score that can be achieved by a player in this game.
## Input
The first row indicates the number of test cases. Then, for each test case, the first row indicates the number of rows of the triangle. The following rows contain the triangle data aligned to the left as follows:
```
7
3 8
8 1 0
2 7 4 4
4 5 2 6 5
```
## Output
The output for each test case is a single number in a line.
## Example
### Input
```
1
5
7
3 8
8 1 0
2 7 4 4
4 5 2 6 5
```
### Output
```
30
```
# Problem E - Zé Manel is making pizzas
## Problem
Zé Manel found a part-time job in a new take-away pizzeria close to the University. His job seems to be very easy: Collect the orders, put the pizzas in the ovens and, once cooked, give them to the clients. However, clients are starting to complain because of the amount of time that they have to wait for the pizza. Since the owner does not have enough money to buy a new oven, he asked Zé Manel to find a way of improving the usage of the two existing ovens.
Since Zé Manel likes challenges, he went back home and thought about it. In the next day, Zé Manel went to the owner and explained that he could improve the satisfaction of the clients in general if the workload of the two ovens is as balanced as possible for a given set of orders. One way of balancing the workload is to assign pizzas to the two ovens such that the absolute difference between their total cooking time is as small as possible.
Now, Zé Manel has to implement the code for assigning the workload. However, this is not so simple as it seems..
## Input
The first line gives the number of pizzas (N). The next N lines gives the cooking time for each pizza as a real number with two decimal places. Other tests cases may follow.
## Output
Print the minimal absolute difference of total cooking time of the two ovens (a real number with two decimal places).
## Constraints
```
1 ≤ N ≤ 60
```
## Example
### Input
```
4
1.41
1.73
2.00
2.23
6
1.20
1.36
1.59
2.49
2.51
3.23
```
### Output
```
0.09
0.02
```
# Problem F - Guards in a gallery
## Problem
You have to place the minimum number of guards in a long hall of a museum that contains N valuable objects. Each guard can only take care of a range of M meters from his/her location.
The objects' locations are represented in meters from the start of the hall (one coordinate only), being 0 the start of the hall and 100 000 the maximum length of the hall.
Note: For a range M of 10 meters, a guard placed in position 100 guards the hall from position 90 to 110, both inclusive.
## Input
The first line gives the number of test cases. Then, for each test case, the first line contains two numbers: 1 < N < 1000000 number of objects to guard; and 1 < M < 1000, the number of meters each guard covers, for each side. Then, N lines follow, each containing the position of an object in the hall. Note that two objects can be in the same position.
## Output
For each test case, print the minimal number of guards needed to protect all the objects.
## Example
### Input
```
2
5 3
5
2
6
10
0
3 5
0
4
0
```
### Output
```
2
1
```
