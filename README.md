# leetcode_easy



Here is a diary of leetcode practice from mayaobobby. The goal is to master the skill of programming as well as the different programming languages. The plan is to firstly finish the quizs in C, the in python in order to learning efficiently. Finally I will use c++ to review.

Already been familier:
C, C++, C#

Recent learning:
Python

Hobbies:
Monga, Game Developping, Tennis, Bouldering, Guitar, Rollerskating...

Career:
Quantum Communication -> Hardware Developping -> System Design -> FPGA Programming

Here are the ideas of each quiz:
Array:
1.Remove Duplicates from Sorted Array: 
Comparing between the two adjacent values, if they are not the same, then put the different one to the next place and move to the next two adjacent values(including the manipulated one). Otherwise just move.

2.Best Time to Buy and Sell Stock II:
Counting from the beginning of array. If the next one is less than the last one, then put the next one to a temporary value as the first buy. Otherwise sell it. Until the second last one(cuz you should not buy the last one).

3.Rotate Array:
Here I use the memcpy function. Firstly I move the last (numsSize-k) values to the front of a new array. Then I shift the former front values to the back.  

4.Contains Duplicate:
Two loop and comparing one by one.

5.Single Number:
XOR.

6.Intersection of Two Arrays II:
Fisrtly I sort the two arraies incrementally, then compare the values of thess two arraies. If it finds the same, then places the value to the new array. Otherwise the array with smaller value does the increment itself.

7.Plus One:
Add one at the end of array, if equals 10, then move one the second last value and do it iteratively.

8.Move Zeros:
Create a new array and move(not in place)...

9.Two Sum:
One by one.

10.Valid Sodoku:

11.Rotate Image:

Strings:
1.Reverse String:
Copy reversedly one by one(Don't forget the last null one).

2.Reverse Integer:
Modulus 10 then get the last significant then devided by 10 to get rid of it.

3.First Unique Character in a String:
ASCII table to list the lowercase letters from 0~25, then check the numbers of every letter.

4.Valid Anagram:
Compare the numbers of lowercase letters as the last one.

5.Valid Palindrome:
Make every letter into lowercase in order to consider only alphanumeric characters and put them into an array, then compare.

6.String to Integer:
isdigit()function. Firstly to identify the the positive or negative, then to read every value. P.S. long type result in order to identify if the value is in appropriate range(int). 

7.Implement strStr():
memcmp().

8.Count and Say:

9.Longest Commom Prefix:

Linked List:
1.Delete Node in a Linked List:


2.Remove Nth Node From End of List:
3.Reverse Linked List:
4.Merge Two Sorted Lists:
5.Palindrome Linked List:
6.Linked List Cycle:
Trees:
1.Maximum Depth of Binary Tree:
2.Validate Binary Search Tree:
3.Symmetric Tree:
4.Binary Tree Level Order Traversal:
5.Convert Sorted Array to Binary Search Tree:
Sorting and Searching:
1.Merge Sorted Array:
2.First Bad Version:
Dynamic Programming:


