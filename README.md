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
# Problem G - (Un)social network
## Description
Nowadays, everybody knows many, many people. So much so, that the producers of a TV game show are finding it increasingly difficult to find enough people to take part in their show. Given a set of members of a social network, they want to know the size of the largest group of people such that none of its members know one another.
## Input
For each test case, the number of members, n, and the number of connections between members, m, are given in the first line, separated by white space. Then, in each of the next m lines, a pair of values, also separated by white space, indicates that two members of the network know each other. Members are numbered from 0 to n-1. Note that some members may not know anyone in the network.
## Output
The output for each test case consists of a single line with the maximum size of a group of members who do not know one another.
## Example
### Example input 1
```
6 6
0 1
0 2
0 3
0 4
0 5
1 5
```
### Example input 2
```
30 21
15 10
6 25
12 20
17 20
20 11
18 4
1 19
5 22
14 4
24 13
7 8
21 24
24 8
11 18
20 19
0 16
28 13
16 10
27 24
22 16
16 21
```
### Example output 1
```
4
```
### Example output 2
```
19
```
# Problem H - A mess with the train timetable!
## Problem
You are working as a programmer in a railway company. Your duty is to write a software that generates personalized train timetables to users of the company's web system. Everything is going fine until suddenly you drop the coffee into the server that contains the complete trains schedule database .. time to panic! You have only time to print the contents of a table in the database that contains the assignment of trains to train stations. Then, PUM! .. the server blows up! And you do not even know if the data printed is not corrupted!
Now you have an herculean task: Given several pairs of numbers printed in the sheet of paper that, eventually, correspond to the assignment of trains to train stations, you have to find out whether this data is corrupted or not. Clearly, it is corrupted if a pair of numbers corresponds to two trains or two train stations.. how to find this?
## Input
The first line for each test case has two integers n and m corresponding, respectively, to the total number of trains and train stations, and the number of pair assignments printed in the sheet of paper. Then, m lines of data follow. Each line has a pair of integers, each one corresponding to the ID of a train or a train station. Note that the train and train station IDs are distinct and range from 1 to n. Also, you do not know the exact number of trains or train stations. Other test cases may follow.
## Constraints
```
n ≤ 500 
m ≤ 65 000 
```
## Output
The output for each test case is a line containing "NO" if the data is corrupted and "NOT SURE" otherwise.
## Example
### Input
```
5 4
1 2
1 4
1 5
2 3
5 5
1 3
2 4
2 5
3 4
4 5
```
### Output
```
NOT SURE
NO
```
# Problem I - A joint vacation problem
## Problem
This Summer you are going on vacations with some friends and you are planning the places to visit. You have already decided which place to start at and where you want your vacation to end. However, since you are on a tight budget you need to make sure that you spend the least amount of money possible, which means that you might not be able to visit all possible places. You have done the math and know exactly how much you will spend on traveling (on gas, tolls, etc.) from each place A to every other place B. The question now is: how inexpensive can you make your vacation?
## Input
The first line gives the number of places (n), and the id number of the place you are finish at (you always start at place 1). Then, n lines follow, each with the id of a place and the list of costs of travelling directly from that place to all others. If it is impossible to go directly from one place to the other, then the cost is -1.
## Constraints
```
n ≤ 200
```
## Output
The minimum possible cost of the vacation.
## Example
### Input
```
6 6
1 0 1 2 8 -1 -1
2 -1 0 -1 -1 3 -1
3 -1 -1 0 5 3 8
4 -1 -1 -1 0 -1 12
5 -1 -1 -1 -1 0 4
6 -1 -1 -1 -1 -1 0
```
### Output
```
8
```
# Problem J - Telephone
## Description
A Telephone Line Company (TLC) is establishing a new telephone cable network. They are connecting several places numbered by integers from 1 to N. No two places have the same number. The lines are bidirectional and always connect together two places and in each place the lines end in a telephone exchange. There is one telephone exchange in each place. From each place it is possible to reach through lines every other place, however it need not be a direct connection, it can go through several exchanges. From time to time the power supply fails at a place and then the exchange does not operate. The officials from TLC realized that in such a case it can happen that besides the fact that the place with the failure is unreachable, this can also cause that some other places cannot connect to each other. In such a case we will say the place (where the failure occured) is critical. Now the officials are trying to write a program for finding the number of all such critical places. Help them.
## Input
The input file consists of several blocks of lines. Each block describes one network. In the first line of each block there is the number of places N < 100. Each of the next at most N lines contains the number of a place followed by the numbers of some places to which there is a direct line from this place. These at most N lines completely describe the network, i.e., each direct connection of two places in the network is contained at least in one row. All numbers in one line are separated by one space. Each block ends with a line containing just 0. The last block has only one line with N = 0.
## Output
The output contains for each block except the last in the input file one line containing the number of critical places.
## Example
### Example input
```
5
5 1 2 3 4
0
6
2 1 3
5 4 6 2
0
0
```
### Example output
```
1
2
```
# Problem K - Jocas is exploring London
## Description
Jocas is now in vacations. He got an excellent grade in EA and, for that reason, he decided to take vacations in London.
He will be hosted in a cheap hotel in the neighborhood of London. During his staying, he plans to visit London on foot as most as he can, but in a way that he does not visit the same street more than once (Otherwise it would be very boring!). As the hotel is very cheap, he would like to maximize the duration of this staying.
Everyday a new trip starts at the hotel and ends at King's Cross St. Pancras station (so that he can get the fast train back to his hotel). Given that he will take one complete day to do each trip, what is the maximal number of days that is worth staying in London?
## Input
Each test case gives information about a map of London. Each street has two ends. The end of a street may also be the end of one or more other streets or a dead end. Note that Jocas may walk in both directions on a street. It is assumed that there is at least one path from the hotel to King's Cross St Pancras station.
The first line of each test case gives the number of streets (m) and number of street junctions, intersections and/or dead ends (n). Then, m lines follow. Each line describes a street by two integers, which correspond to the indices of its ends. The hotel is at location one and King's Cross St Pancras station is at location n. There are at most 70000 streets and 600 street intersections / dead ends.
## Output
For each test case, print the maximum number of trips that he can do between the two locations such that he does not visit the same street more than once.
## Example
### Example input
```
23 10
1 2
1 7
1 9
1 10
2 4
2 5
2 6
2 9
2 10
3 7
3 8
3 9
4 6
4 7
4 8
4 10
5 7
5 8
5 9
5 10
6 8
6 9
7 9
```
### Example output
```
4
```
