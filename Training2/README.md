# Problem A
## Check the parentheses!
### Description
You are given a string consisting of parentheses ( ) and [ ]. A string of this type is said to be correct:
1. if it is the empty string
2. if A and B are correct, AB is correct,
3. if A is correct, (A) and [A] is correct.
Write a program that takes a sequence of strings of this type and check their correctness. Your program can assume that the maximum string length is 128.
### Input
The file contains a positive integer n and a sequence of n strings of parentheses ( ) and [ ], one string a line.
### Output
A sequence of Yes or No on the output file.
### Example
#### Input
```
3
([])
(([()])))
([()[]()])()
```
#### Ouput:
```
Yes
No
Yes
```

# Problem B
## Soup of words
### Description
Orlando was looking at his soup while his mother was in the kitchen. He was playing with the letters in his soup, and suddenly, he noticed that had a secret power. He could change the words morphing one word to another replacing the letter in a mysterious order.
Orlando has changed the letters of some words, you have to find an algorithm that find out the morphing order from the original word to the morphed one. The rules are simple:
1. In each step you just can change one letter from the previous word.
2. A letter can be changed just once.
3. All the letters in the word must change.
### Input
Input consists of strings (one per line) each of which will consist of one to twenty valid characters. There will be no invalid characters in any of the strings. Your program should read to the end of file.
### Output
For each morphing you should print all the words in the correct order to convert the first one in the morphed one
### Example
#### Input:
```
6 5
remar
pitos
remas
remos
retos
ritos
5 4
pato
lisa
pata
pita
pisa
```
#### Ouput:
```
remar
remas
remos
retos
ritos
pitos
pato
pata
pita
pisa
lisa
```
# Problem C
## All Squares
Geometrically, any square has a unique, well-defined centre point. On a grid this is only true if the sides of the square are an odd number of points long. Since any odd number can be written in the form 2k+1, we can characterise any such square by specifying k, that is we can say that a square whose sides are of length 2k+1 has size k. Now define a pattern of squares as follows.
1. The largest square is of size k (that is sides are of length 2k+1) and is centred in a grid of size 1024 (that is the grid sides are of length 2049).
2. The smallest permissible square is of size 1 and the largest is of size 512, thus  tex2html_wrap_inline32 .
3. All squares of size k > 1 have a square of size k div 2 centred on each of their 4 corners. (Div implies integer division, thus 9 div 2 = 4).
4. The top left corner of the screen has coordinates (0,0), the bottom right has coordinates (2048, 2048).
Hence, given a value of k, we can draw a unique pattern of squares according to the above rules. Furthermore any point on the screen will be surrounded by zero or more squares. (If the point is on the border of a square, it is considered to be surrounded by that square). Thus if the size of the largest square is given as 15, then the following pattern would be produced.
Write a program that will read in a value of k and the coordinates of a point, and will determine how many squares surround the point.
### Input and Output
Input will consist of a series of lines. Each line will consist of a value of k and the coordinates of a point. The file will be terminated by a line consisting of three zeroes (0 0 0).
Output will consist of a series of lines, one for each line of the input. Each line will consist of the number of squares containing the specified point, right justified in a field of width 3.
### Sample input
```
500 113 941
0 0 0
```
### Sample output
```
   5
```
# Problem D
## Square
Given a set of sticks of various lengths, is it possible to join them end-to-end to form a square?
The first line of input contains N, the number of test cases. Each test case begins with an integer 4 <= M <= 20, the number of sticks. M integers follow; each gives the length of a stick - an integer between 1 and 10,000.
For each case, output a line containing "yes" if is is possible to form a square; otherwise output "no".
### Sample Input
```
3
4 1 1 1 1
5 10 20 30 40 50
8 1 7 2 6 4 4 3 5
```
### Output for Sample Input
```
yes
no
yes
```
# Problem E
## Portuguese Pavements - NO LOOPS
NOTE: THE CHALLENGE IS TO WRITE A CODE THAT DOES NOT CONTAIN ANY LOOP.
### Problem
The company "Nova Calçada Portuguesa" designs contemporaneous portuguese pavements, with black and white stones, for large pedestrian areas by following a simple mathematical aesthetic principle.
The design of the pavement is based a squared boolean matrix, where each entry corresponds to a stone. If an entry in the matrix is false, then the corresponding stone is white, otherwise, is black. The matrices are build with two parameters, N and R. Given a non-negative integer N, the matrix has size 2N. For N=0, the matrix has only one entry with value false. For R=0, a matrix for a given positive N is obtaining by aligning 4 copies of a matrix for N-1, and then negating the values in the lower right matrix. This rule changes for a positive R: the negation occurs in the lower right matrix shifted R times in the counterclockwise direction.
The following figure illustrates how a matrix for N=3 (for R=0) can be obtained from another matrix for N=2, where 1 means true and 0 means false.
```
0000|0000
0101|0101
0011|0011
0110|0110
---------
0000|1111
0101|1010
0011|1100
0110|1001
```
The following shows for R=6:
```
1001|0110
0011|1100
0101|1010
1111|0000
---------
0110|0110
1100|1100
1010|1010
0000|0000
```
Clearly, the designers cannot do it by hand, so they decided to call you to make a program that computes such matrix for a given N and R.
### Input
Each line corresponds to a test case with the values of N and R.
### Output
Print the resulting matrix where 1 corresponds to true and 0 corresponds to false.
Note: Code with hard-coded matrices for several values of N will not be considered as accepted.
### Constraints
1 ≤ N ≤ 10 and 0 ≤R ≤ 1000.
### Example
#### Input
```
2 0
3 6
```
#### Output
```
0000
0101
0011
0110
10010110
00111100
01011010
11110000
01100110
11001100
10101010
00000000
```




















# Problem K
## Little Red Riding Hood
You probably all know the fairy tale of Little Red Riding Hood and how she wanted to visit her grandmother, but on her way there met a wolf, finally got eaten by the wolf and was rescued in the end by a brave hunter. Now if Little Red Riding Hood hadn't met the wolf in the first place, she would have avoided a lot of hassle (she wouldn't have been eaten by the wolf and the brave hunter wouldn't have had to rescue her). That she met the wolf in the first place was partly due to her lack of information. She simply didn't know where she might encounter the wolf.
The network of roads connecting Little Red Riding Hood's house and her grandmother's house is a rectangular grid. Little Red Riding Hood's house is situated on the grid's lower left corner and her grandmother's house is at the grid's top right corner. Being particularly bright at math Little Red Riding Hood always wants to get to her grandmother using the shortest possible route. This entails that Little Red Riding Hood can only "move" to right or upwards on the grid. This ensures that she always uses a shortest route. Now if she had known the wolf's possible locations in advance, she might have chosen a path on which she doesn't meet the wolf.
Now given the size of the grid and the wolf's possible locations (weirdly enough the wolf can only meet her at the grid's intersections) compute the number of possible paths from Little Red Riding Hood's house to her grandmother's house under the restriction that Little Red Riding Hood can only move to the right and upwards and does not meet the wolf.
## Input and Output
There will be several testcases. The grid's width w, 1 ≤ w ≤ 100, and grid's height h, 1 ≤ h ≤ 100, are on the first line. The last testcase will contain a 0 for height h and a 0 for the width w and should not be processed. In the next line there follows the number n, 0 ≤ n ≤ 100 of the wolf's possible locations. The next n lines contain two integers each. The first denoting the wolf's x, 0 ≤ x ≤ 100 coordinate, the second the wolf's y, 0 ≤ y ≤ 100 coordinate. Little Red Riding Hood's House is at the point (0,0) and the grandmother's house is at (w,h). The wolf cannot be at either house.
Output one line for each testcase. If there is more than one path between Little Red Riding Hood's house and the grandmother's house on which Little Red Riding Hood doesn't meet the wolf and only moves right and upwards, output the number of paths in the format:
```
There are X paths from Little Red Riding Hood's house to her grandmother's house. 
```
If there is exactly one path print:
```
There is one path from Little Red Riding Hood's house to her grandmother's house. 
```
Otherwise print:
```
There is no path.
```
### Sample input
```
1 1
0
1 1
2
0 1
1 0
4 4
3
0 1
1 1
3 1
10 10
0
10 10    
3
0 1
1 1
1 0
3 3
5
1 0
1 1
1 2
2 2
3 2
0 0
```
### Sample output
```
There are 2 paths from Little Red Riding Hood's house to her grandmother's house.
There is no path.
There are 7 paths from Little Red Riding Hood's house to her grandmother's house.
There are 184756 paths from Little Red Riding Hood's house to her grandmother's house.
There is no path.
There is one path from Little Red Riding Hood's house to her grandmother's house.
```
