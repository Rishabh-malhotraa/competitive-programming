Access my public [**notebook**](https://www.notion.so/brnpapa/icpc-notebook-0355e05508e9470fb065801e277f0c6c), a Notion workspace where I do my notes while studying and coding general-purpose algorithms. The book I use and recommend for studying is "Competitive Programming 3: The new lower bound of programming contests" by Steven Halim.

<p align="center">Feel free to follow my progress on my online judge profiles:</p>

<p align="center">
<a href="https://uhunt.onlinejudge.org/id/1094350"><img src="https://img.shields.io/static/v1?label=uva&message=73&color=red&style=flat-square"></a>
<a href="https://codeforces.com/profile/brnpapa"><img src="https://img.shields.io/static/v1?label=codeforces&message=60&color=red&style=flat-square"></a>
<a href="https://www.urionlinejudge.com.br/judge/pt/users/statistics/310281"><img src="https://img.shields.io/static/v1?label=uri&message=70&color=red&style=flat-square"></a>
<a href="https://www.spoj.com/users/brnpapa"><img src="https://img.shields.io/static/v1?label=spoj&message=32&color=red&style=flat-square"></a>
</p>
<br/>

<h1 align="center">Solutions categorized into themes</h1>

- [#ad-hoc](#ad-hoc)
- [#techniques](#techniques)
- [#graphs](#graphs)
- [#searching](#searching)
- [#math](#math)
- [#dynamic-programming](#dynamic-programming)
- [#greedy](#greedy)
- [#divide-&-conquer](#divide-&-conquer)
- [#computational-geometry](#computational-geometry)
- [#brute-force](#brute-force)
- [#dynamic-programing](#dynamic-programing)


## dynamic programing
- **digit**
	- 📙 [uri/1707](https://github.com/brnpapa/competitive-programming/blob/master/uri/1707.cpp): `given two numbers x and y, compute the sum of the decimal digits of the odd numbers in the range [min(x,y) .. max(x,y)]` 
	- 📗 [spoj/CPCRC1C](https://github.com/brnpapa/competitive-programming/blob/master/spoj/CPCRC1C.cpp) 

## brute force
- **recursive backtracking**
	- 📙 [uva/10503](https://github.com/brnpapa/competitive-programming/blob/master/uva/10503.cpp): `given domino pieces, check if it is possible to arrive at a target piece from an initial piece using N intermediate pieces (possibly rotating them)`  → graph traversal + backtracking
	- 📗 [uva/10344](https://github.com/brnpapa/competitive-programming/blob/master/uva/10344.cpp): `check if some arithmetic expression of 5 given numbers will result in 23`  → check all combination of operators for each permutation of the given numbers
	- 📗 [codejam/2020-QR-indicium-TLE](https://github.com/brnpapa/competitive-programming/blob/master/codejam/2020-QR-indicium-TLE.cpp): `generate M, where M[i][j] is any value in [1 .. N] (2 <= N <= 5), but without repeting a value in same line or column, and with the sum of the main diagonal equal to K` 
	- 📗 [spoj/MKJUMPS](https://github.com/brnpapa/competitive-programming/blob/master/spoj/MKJUMPS.cpp): `given an unweighted implicit graph, count the longest possible path`  → graph traversal + backtracking
	- 📙 [uva/989](https://github.com/brnpapa/competitive-programming/blob/master/uva/989.cpp): `solve the sudoku puzzle` 
	- **pruned permutations**
		- 📗 [spoj/BTCK](https://github.com/brnpapa/competitive-programming/blob/master/spoj/BTCK.cpp) 
		- 📙 [uva/524](https://github.com/brnpapa/competitive-programming/blob/master/uva/524.cpp) 
	- **n-queens**
		- 📙 [uva/11195](https://github.com/brnpapa/competitive-programming/blob/master/uva/11195.cpp)  → use bitmasks
- **iterative**
	- 📗 [uva/725](https://github.com/brnpapa/competitive-programming/blob/master/uva/725.cpp) 
	- 📗 [uva/10360](https://github.com/brnpapa/competitive-programming/blob/master/uva/10360.cpp) 
	- 📗 [uva/628](https://github.com/brnpapa/competitive-programming/blob/master/uva/628.cpp) 
	- **all subsets**
		- 📗 [uva/12455](https://github.com/brnpapa/competitive-programming/blob/master/uva/12455.cpp)  → use bitmasks
	- **all permutations**
		- 📗 [uva/750](https://github.com/brnpapa/competitive-programming/blob/master/uva/750.cpp) 

## computational geometry
- 📗 [codeforces/659-D](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/659-D.cpp) 

## divide & conquer
- 📙 [codeforces/768-B](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/768-B.cpp)  → knowing the size of the final array with a little math, use the same idea to query a range in a segment tree

## greedy
- 📙 [codeforces/1237-C2](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/1237-C2.cpp)  → sort the points, remove pairs with equal x and y first, then pairs with equal x and finally the rest
- 📗 [codeforces/1257-A](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/1257-A.cpp) 
- 📗 [codeforces/1092-B](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/1092-B.cpp) 
- 📗 [codeforces/545-D](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/545-D.cpp) 
- 📗 [codejam/2020-QR-nesting-depth](https://github.com/brnpapa/competitive-programming/blob/master/codejam/2020-QR-nesting-depth.cpp) 
- 📙 [codejam/2020-1A-pattern-matching](https://github.com/brnpapa/competitive-programming/blob/master/codejam/2020-1A-pattern-matching.cpp)  → note that only the prefix and suffix constraints matter
- 📗 [spoj/SNGINT](https://github.com/brnpapa/competitive-programming/blob/master/spoj/SNGINT.cpp): `given an integer n, find the smallest positive integer m > 0 such that the product of digits of m equals n` 
- 📗 [spoj/CADYDIST](https://github.com/brnpapa/competitive-programming/blob/master/spoj/CADYDIST.cpp) 
- 📗 [uva/10954](https://github.com/brnpapa/competitive-programming/blob/master/uva/10954.cpp): `add all` 
- 📗 [codeforces/275-C](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/275-C.cpp) 
- 📗 [codeforces/1324-C](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/1324-C.cpp)  → note that it's unnecessary jump to the left, so to minimize d, just jump between the nearest 'R' cells
- 📗 [spoj/BUSYMAN](https://github.com/brnpapa/competitive-programming/blob/master/spoj/BUSYMAN.cpp): `compute the maximum number of activities (each with start and end times) that you can do without overlapping them (one at a time)`  → sort the activites by increasing end time
- 📙 [codeforces/204-B](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/204-B.cpp): `given the two-sided values of N cards, what is the minimum number of turns in the cards so that at least half of them are the same front?; they are initially facing upwards` 
- 📗 [codeforces/1324-B](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/1324-B.cpp): `given a sequence of integers, is there a subsequence palindrome of size 3?`  → check if there are two equal non-adjacent numbers using brute force
- 📗 [spoj/GERGOVIA](https://github.com/brnpapa/competitive-programming/blob/master/spoj/GERGOVIA.cpp) 
- 📗 [codeforces/984-A](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/984-A.cpp) 
- 📗 [codejam/2020-QR-parenting-partnering-returns](https://github.com/brnpapa/competitive-programming/blob/master/codejam/2020-QR-parenting-partnering-returns.cpp) 
- **coin change (CC)**
	- 📗 [codeforces/189-A](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/189-A.cpp) 
	- 📗 [codeforces/1255-A](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/1255-A.cpp) 
	- **counting ways**
		- 📗 [uva/674](https://github.com/brnpapa/competitive-programming/blob/master/uva/674.cpp) 
		- 📗 [uva/11137](https://github.com/brnpapa/competitive-programming/blob/master/uva/11137.cpp) 
- **bipartite matching**
	- 📗 [uva/11292](https://github.com/brnpapa/competitive-programming/blob/master/uva/11292.cpp) 
- **interval covering**
	- 📙 [uva/10382](https://github.com/brnpapa/competitive-programming/blob/master/uva/10382.cpp): ` reduce the problem using pythagoras to one line` 
- **loading balance**
	- 📙 [uri/1055](https://github.com/brnpapa/competitive-programming/blob/master/uri/1055.cpp) 
	- 📗 [uva/11389](https://github.com/brnpapa/competitive-programming/blob/master/uva/11389.cpp) 
- **fast longest increasing subsequence (LIS)**
	- 📙 [uva/481](https://github.com/brnpapa/competitive-programming/blob/master/uva/481.cpp) 

## dynamic programming
- 📙 [codeforces/1061-C](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/1061-C.cpp)  → use space saving + all divisors in O(sqrt(n)) to optimize
- 📗 [uva/11450](https://github.com/brnpapa/competitive-programming/blob/master/uva/11450.cpp) 
- 📙 [codeforces/166-E](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/166-E.cpp) 
- 📙 [uva/10721](https://github.com/brnpapa/competitive-programming/blob/master/uva/10721.cpp) 
- 📙 [uva/10651](https://github.com/brnpapa/competitive-programming/blob/master/uva/10651.cpp)  → use bitmasks
- 📗 [uva/10943](https://github.com/brnpapa/competitive-programming/blob/master/uva/10943.cpp) 
- 📗 [uva/10003](https://github.com/brnpapa/competitive-programming/blob/master/uva/10003.cpp) 
- 📗 [uva/10337](https://github.com/brnpapa/competitive-programming/blob/master/uva/10337.cpp) 
- **longest increasing subsequence (LIS)**
	- 📙 [uva/11456](https://github.com/brnpapa/competitive-programming/blob/master/uva/11456.cpp)  → find the max(lis[i]+lds[i]-1) for all i in [0 .. N-1], being i where the subsequence starts
	- 📙 [uri/1517](https://github.com/brnpapa/competitive-programming/blob/master/uri/1517.cpp) 
	- 📙 [uva/10131](https://github.com/brnpapa/competitive-programming/blob/master/uva/10131.cpp)  → sort elephants based on increasing kg, then apply LDS on iq
- **max 1D range sum**
	- 📙 [uva/787](https://github.com/brnpapa/competitive-programming/blob/master/uva/787.py): `max 1D range product query`  → compute for each sub-range without 0
	- **kadane**
		- 📗 [uva/10684](https://github.com/brnpapa/competitive-programming/blob/master/uva/10684.cpp) 
		- 📗 [uva/12640](https://github.com/brnpapa/competitive-programming/blob/master/uva/12640.py): `find the max range sum considering the possibility of a sub-range of length 0` 
		- 📗 [spoj/MAXSUMSU](https://github.com/brnpapa/competitive-programming/blob/master/spoj/MAXSUMSU.cpp) 
		- 📗 [codeforces/1285-B](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/1285-B.cpp) 
- **0-1 knapsack**
	- 📙 [uri/1487](https://github.com/brnpapa/competitive-programming/blob/master/uri/1487.cpp) 
	- 📗 [uri/2498](https://github.com/brnpapa/competitive-programming/blob/master/uri/2498.cpp) 
	- 📗 [spoj/KNAPSACK](https://github.com/brnpapa/competitive-programming/blob/master/spoj/KNAPSACK.cpp) 
	- 📗 [spoj/SCUBADIV](https://github.com/brnpapa/competitive-programming/blob/master/spoj/SCUBADIV.cpp) 
	- **subset sum**
		- 📗 [uva/624](https://github.com/brnpapa/competitive-programming/blob/master/uva/624.cpp): `find a subset of A with the max sum k <= K, and recovery it for printing` 
		- 📙 [uva/10616](https://github.com/brnpapa/competitive-programming/blob/master/uva/10616.cpp): `given an array of size N, count how many subsets of size M have their sum divisible by D`  → use module arithmetic
		- 📗 [uva/357](https://github.com/brnpapa/competitive-programming/blob/master/uva/357.cpp): `counting ways to represent S cents`  → subset sum with possible repetition
		- 📗 [uri/1203](https://github.com/brnpapa/competitive-programming/blob/master/uri/1203.cpp): `check if any subset of A has a sum equal to K` 
- **max 2D range sum**
	- 📕 [uva/10755](https://github.com/brnpapa/competitive-programming/blob/master/uva/10755.cpp): `max 3D range sum`  → use max 2D range sum in two of the three dimensions and max 1D range sum (kadane) on the third dimension
	- 📗 [uva/108](https://github.com/brnpapa/competitive-programming/blob/master/uva/108.cpp) 
- **longest common subsequence (LCS)**
	- 📗 [spoj/IOIPALIN](https://github.com/brnpapa/competitive-programming/blob/master/spoj/IOIPALIN.cpp): `given a string, determine the minimal quantity of characters to be inserted into it in order to obtain a palindrome`  → compute length of string minus lcs between string and reversed string
	- 📗 [spoj/ADASEQEN](https://github.com/brnpapa/competitive-programming/blob/master/spoj/ADASEQEN.cpp) 
- **traveling salesman problem (TSP)**
	- 📗 [uva/10496](https://github.com/brnpapa/competitive-programming/blob/master/uva/10496.cpp) 
	- 📙 [uva/116](https://github.com/brnpapa/competitive-programming/blob/master/uva/116.cpp) 

## math
- **ad-hoc**
	- 📗 [codeforces/1042-A](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/1042-A.cpp) 
	- 📗 [uva/10812](https://github.com/brnpapa/competitive-programming/blob/master/uva/10812.cpp) 
	- 📗 [uva/11723](https://github.com/brnpapa/competitive-programming/blob/master/uva/11723.cpp) 
	- 📗 [uva/10346](https://github.com/brnpapa/competitive-programming/blob/master/uva/10346.cpp) 
	- 📗 [uva/11875](https://github.com/brnpapa/competitive-programming/blob/master/uva/11875.cpp) 
	- **finding pattern**
		- 📗 [spoj/EIGHTS](https://github.com/brnpapa/competitive-programming/blob/master/spoj/EIGHTS.cpp) 
		- 📕 [uva/11718](https://github.com/brnpapa/competitive-programming/blob/master/uva/11718.cpp)  → compute K * N^(K-1) * sumA using fast power mod
		- 📗 [codeforces/1221-C](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/1221-C.cpp) 
		- 📙 [uva/10161](https://github.com/brnpapa/competitive-programming/blob/master/uva/10161.cpp) 
		- 📗 [codeforces/1324-A](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/1324-A.cpp) 
		- 📙 [codeforces/1092-D1](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/1092-D1.cpp)  → remove adjacent ones whose absolute difference is even (using a stack)
	- **arithmetic progression**
		- 📙 [uva/11254](https://github.com/brnpapa/competitive-programming/blob/master/uva/11254.cpp) 
	- **sequences**
		- 📕 [uva/10706](https://github.com/brnpapa/competitive-programming/blob/master/uva/10706.cpp)  → pre-process the number sequence and f(k), so use binary search on f
		- 📙 [uva/264](https://github.com/brnpapa/competitive-programming/blob/master/uva/264.cpp)  → use binary search on preprocessed f(x)=f(x-1)+x-1
		- 📙 [uva/443](https://github.com/brnpapa/competitive-programming/blob/master/uva/443.cpp) 
- **number theory**
	- 📙 [uri/2291](https://github.com/brnpapa/competitive-programming/blob/master/uri/2291.cpp): `print n-th divine number, the one that is equal to the sum of the sum of each divisor from 1 to n` 
	- **module arithmetic**
		- 📗 [uva/10176](https://github.com/brnpapa/competitive-programming/blob/master/uva/10176.cpp): `is a given binary number of 100 digits divisible by 131071?` 
	- **prime numbers**
		- 📗 [spoj/PRIONPRI](https://github.com/brnpapa/competitive-programming/blob/master/spoj/PRIONPRI.cpp): `prime checking` 
		- **sieve of eratosthenes**
			- 📙 [spoj/PRIME1](https://github.com/brnpapa/competitive-programming/blob/master/spoj/PRIME1.cpp): `print all primes p in [m .. n], 0 <= m <= n <= 10^9, n-m <= 10^5`  → sieve + prime checking
			- 📙 [codeforces/576-A](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/576-A.cpp) 
			- 📗 [spoj/AMR11E](https://github.com/brnpapa/competitive-programming/blob/master/spoj/AMR11E.cpp): `print the n-th number that has at least 3 distinct prime factors`  → use modified sieve
			- 📙 [uva/10539](https://github.com/brnpapa/competitive-programming/blob/master/uva/10539.cpp): `compute the quantity of non-prime numbers in [lo .. hi] which are divisible by only a single prime number, 0 < lo <= hi < 10^12`  → generate all powers of each prime number
		- **prime factorization**
			- 📗 [uva/10042](https://github.com/brnpapa/competitive-programming/blob/master/uva/10042.cpp) 
			- 📙 [uva/10139](https://github.com/brnpapa/competitive-programming/blob/master/uva/10139.cpp): `do n! is divisible by m?`  → check if the prime factors of m are contained in the prime factors of n!
			- 📕 [uri/2661](https://github.com/brnpapa/competitive-programming/blob/master/uri/2661.cpp): `compute the number of divisors of n that can be written as the product of two or more distinct prime numbers (without repetition), 1 <= n <= 10^12`  → note that the product of any combination of prime factors of a number will always be a divisor of that number
	- **greatest common divisor (GCD)**
		- 📗 [codeforces/822-A](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/822-A.cpp) 
		- 📗 [codeforces/854-A](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/854-A.cpp): `given n, determine maximum possible proper (a < b) and irreducible fraction a/b such that a+b == n` 
- **game theory**
	- **minimax**
		- 📙 [uva/12484](https://github.com/brnpapa/competitive-programming/blob/master/uva/12484.cpp): `alberto and wanderley take one of two cards at the edges of the cards sequence, alberto want maximize it`  → fill memo table in row-major order
		- 📙 [uva/10111](https://github.com/brnpapa/competitive-programming/blob/master/uva/10111.cpp): `given a state of a tic tac toe board, check if X will win independent of the O movement`  → minimax + memo + backtracking
		- **optimized**
			- 📕 [uva/847](https://github.com/brnpapa/competitive-programming/blob/master/uva/847.cpp): `multiplication game`  → note that if Stan always multiply by 9 and Ollie by 2, it's still an optimal solution
- **combinatorics**
	- **fibonacci numbers**
		- 📙 [uva/10334](https://github.com/brnpapa/competitive-programming/blob/master/uva/10334.py)  → compute (n+2)-th fibonnaci number
	- **binomial coefficient**
		- 📗 [codeforces/844-B](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/844-B.cpp) 
		- 📕 [uri/2972](https://github.com/brnpapa/competitive-programming/blob/master/uri/2972.cpp): `calculate the sum of C(N, k)%2 for all k in [0 .. n], i.e., how many odd combinations of k heads between n coins there are`  → just compute 2^qtyBitsOn(n)

## searching
- **segment tree**
	- 📗 [codeforces/339-D](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/339-D.cpp) 
	- **lazy propagation**
		- 📙 [uri/2658](https://github.com/brnpapa/competitive-programming/blob/master/uri/2658.cpp)  → build a segment tree for RSQ, but store an array of size 9 in tree[v], where tree[v][n] indicates the frequency that the note n appears in that interval
		- 📙 [uva/11402](https://github.com/brnpapa/competitive-programming/blob/master/uva/11402.cpp)  → build a segment tree for RSQ, but keep in lazy[v] the type of pending operation to be performed in that interval of A
- **binary search**
	- 📙 [codeforces/1324-D](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/1324-D.cpp): `given the A and B arrays, count the quantity of pairs i < j such that A[i]+A[j] > B[i]+B[j]`  → diff being the A-B array, count, for all i in [0 .. N-2], how many times -diff[i] < diff[j], for all j in [i+1 .. N-1]
	- 📙 [codeforces/1284-B](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/1284-B.cpp) 
	- 📙 [codeforces/91-B](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/91-B.cpp): `given the array a, compute the array d, where d[i] = j-(i+1) for the max j such that a[j] < a[i]`  → apply binary search on preprocessed array mn, filled from right to left
	- 📗 [spoj/PAIRS1](https://github.com/brnpapa/competitive-programming/blob/master/spoj/PAIRS1.cpp): `given the A array, count the quantity of pairs i < j such that A[i]-A[j] == K`  → search on the sorted array A by the A[n]+K, for all n in [0 .. N-1]
	- **on answer**
		- 📙 [codeforces/1223-C](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/1223-C.cpp) 
		- 📙 [uva/12097](https://github.com/brnpapa/competitive-programming/blob/master/uva/12097.cpp) 
		- 📙 [spoj/AGGRCOW](https://github.com/brnpapa/competitive-programming/blob/master/spoj/AGGRCOW.cpp): `given an array A of size N (2 <= N <= 10^5), print the largest minimum distance between any two of C (C <= N) elements choosen any` 
		- 📙 [uri/2973](https://github.com/brnpapa/competitive-programming/blob/master/uri/2973.cpp) 
		- 📕 [codeforces/460-C](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/460-C.cpp) 

## graphs
- **shortest path**
	- **floyd-warshall**
		- 📗 [uri/2372](https://github.com/brnpapa/competitive-programming/blob/master/uri/2372.cpp) 
	- **dijkstra**
		- 📙 [uri/1123](https://github.com/brnpapa/competitive-programming/blob/master/uri/1123.cpp) 
		- 📙 [uva/10806](https://github.com/brnpapa/competitive-programming/blob/master/uva/10806.cpp): `find the global shortest path from 0 to V-1 (round trip), without repeting edges` 
		- 📕 [uva/11367](https://github.com/brnpapa/competitive-programming/blob/master/uva/11367.cpp)  → find the shortest path on space-state graph, where each vertex represent a city and a level of car fuel
- **traversal**
	- 📙 [uva/12442](https://github.com/brnpapa/competitive-programming/blob/master/uva/12442.cpp): `given a graph with all vertices with out-degree 1, find the vertice that reaches the most vertices` 
	- 📙 [codejam/2020-1A-pascal-walk-TLE](https://github.com/brnpapa/competitive-programming/blob/master/codejam/2020-1A-pascal-walk-TLE.cpp) 
	- 📗 [uva/11831](https://github.com/brnpapa/competitive-programming/blob/master/uva/11831.cpp)  → consider grid as an implicit graph and walk through it, or just rotate the robot, for each received instruction
	- 📙 [uva/11906](https://github.com/brnpapa/competitive-programming/blob/master/uva/11906.cpp)  → consider grid as an implicit graph and walk through it avoiding redundant positions (nr, nc)
	- **bridges and articulation points**
		- 📗 [uva/796](https://github.com/brnpapa/competitive-programming/blob/master/uva/796.cpp) 
	- **bipartite checking**
		- 📗 [uva/10004](https://github.com/brnpapa/competitive-programming/blob/master/uva/10004.cpp) 
	- **strongly connected components (SCC)**
		- 📙 [uva/11504](https://github.com/brnpapa/competitive-programming/blob/master/uva/11504.cpp): `count the number of SCCs without incoming edge from a vertex of another SCC` 
	- **depth-first search (DFS)**
		- 📗 [codeforces/104-C](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/104-C.cpp): `check if the given undirected graph can be represented as a set of three or more rooted trees, whose roots are connected by a simple cycle`  → check if the graph is connective and has only one cycle
		- 📙 [uri/2965](https://github.com/brnpapa/competitive-programming/blob/master/uri/2965.cpp) 
	- **flood fill**
		- 📕 [uva/1103](https://github.com/brnpapa/competitive-programming/blob/master/uva/1103.cpp)  → consider each pixel as a vertex of an implicit graph, then identify each hieroglyph counting the number of white CCs within it
		- 📗 [uva/11094](https://github.com/brnpapa/competitive-programming/blob/master/uva/11094.cpp) 
	- **topological sorting**
		- 📗 [uva/11060](https://github.com/brnpapa/competitive-programming/blob/master/uva/11060.cpp) 
- **specials**
	- **tree traversal**
		- 📗 [spoj/ONP](https://github.com/brnpapa/competitive-programming/blob/master/spoj/ONP.cpp): `transform the algebraic expression with brackets into reverse polish notation (RPN) `  → consider the given expression as the in-order traversal in a binary tree, then print post-order traversal recursively without building the tree
- **minimum spanning tree (MST)**
	- 📗 [uva/10034](https://github.com/brnpapa/competitive-programming/blob/master/uva/10034.cpp) 

## techniques
- **two pointers**
	- 📙 [uva/967](https://github.com/brnpapa/competitive-programming/blob/master/uva/967.cpp): `pope` 
	- 📕 [codeforces/1041-D](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/1041-D.cpp) 
	- 📙 [codeforces/279-B](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/279-B.cpp) 
	- 📗 [codeforces/381-A](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/381-A.cpp) 
	- 📗 [codeforces/6-C](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/6-C.cpp) 
	- 📙 [codeforces/676-C](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/676-C.cpp) 

## ad-hoc
- 📗 [codeforces/1285-A](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/1285-A.cpp) 
- 📗 [codejam/2019-QR-foregone-solution](https://github.com/brnpapa/competitive-programming/blob/master/codejam/2019-QR-foregone-solution.py) 
- 📗 [codeforces/1220-A](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/1220-A.cpp) 
- 📗 [codeforces/37-A](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/37-A.cpp) 
- 📗 [spoj/SBANK](https://github.com/brnpapa/competitive-programming/blob/master/spoj/SBANK.cpp) 
- 📗 [uri/2879](https://github.com/brnpapa/competitive-programming/blob/master/uri/2879.cpp) 
- 📗 [uri/3024](https://github.com/brnpapa/competitive-programming/blob/master/uri/3024.cpp) 
- 📕 [uri/1368](https://github.com/brnpapa/competitive-programming/blob/master/uri/1368.cpp) 
- 📗 [codeforces/151-A](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/151-A.cpp) 
- 📗 [uri/2884](https://github.com/brnpapa/competitive-programming/blob/master/uri/2884.cpp) 
- 📗 [uva/11799](https://github.com/brnpapa/competitive-programming/blob/master/uva/11799.cpp) 
- 📗 [spoj/ADAQUEUE](https://github.com/brnpapa/competitive-programming/blob/master/spoj/ADAQUEUE.cpp) 
- 📗 [spoj/EC_CONB](https://github.com/brnpapa/competitive-programming/blob/master/spoj/EC_CONB.cpp) 
- 📗 [uri/2963](https://github.com/brnpapa/competitive-programming/blob/master/uri/2963.cpp) 
- 📗 [uva/12015](https://github.com/brnpapa/competitive-programming/blob/master/uva/12015.cpp) 
- 📗 [uri/2968](https://github.com/brnpapa/competitive-programming/blob/master/uri/2968.cpp) 
- 📗 [uri/2242](https://github.com/brnpapa/competitive-programming/blob/master/uri/2242.cpp) 
- 📗 [uva/10141](https://github.com/brnpapa/competitive-programming/blob/master/uva/10141.cpp) 
- **implementation**
	- 📗 [codejam/2020-QR-vestigium](https://github.com/brnpapa/competitive-programming/blob/master/codejam/2020-QR-vestigium.cpp) 
	- 📗 [uri/1763](https://github.com/brnpapa/competitive-programming/blob/master/uri/1763.cpp) 
	- 📗 [codeforces/492-B](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/492-B.cpp) 
	- 📗 [codeforces/266-A](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/266-A.cpp) 
	- 📗 [codeforces/373-A](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/373-A.cpp) 
	- 📗 [codeforces/110-A](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/110-A.cpp) 
	- 📙 [codeforces/1254-A](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/1254-A.cpp) 
	- 📙 [uri/2971](https://github.com/brnpapa/competitive-programming/blob/master/uri/2971.cpp) 
	- 📗 [codeforces/1284-A](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/1284-A.cpp) 
	- 📗 [uri/1215](https://github.com/brnpapa/competitive-programming/blob/master/uri/1215.cpp) 
	- 📗 [uri/1975](https://github.com/brnpapa/competitive-programming/blob/master/uri/1975.cpp) 
	- 📗 [codeforces/811-B](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/811-B.cpp) 
	- 📙 [codeforces/1296-C](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/1296-C.cpp)  → maps each position of the robot with the string index, and check if a new position has already been mapped before
	- 📗 [spoj/GNY07D](https://github.com/brnpapa/competitive-programming/blob/master/spoj/GNY07D.cpp) 
	- 📙 [codeforces/519-C](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/519-C.cpp) 
	- 📗 [codeforces/158-C](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/158-C.cpp) 
	- 📗 [uri/1260](https://github.com/brnpapa/competitive-programming/blob/master/uri/1260.cpp) 
	- 📗 [uri/1261](https://github.com/brnpapa/competitive-programming/blob/master/uri/1261.cpp) 
	- 📗 [uri/2593](https://github.com/brnpapa/competitive-programming/blob/master/uri/2593.cpp) 
	- 📗 [codeforces/81-A](https://github.com/brnpapa/competitive-programming/blob/master/codeforces/81-A.cpp) 
