Homework3_Swap.c
================

Homework #3 for CSci 223.

CSCI 223 Computer Org. & Assembly Language
Homework #3
Oct. 3 2013
DUE: Oct. 15 2013 (Tuesday), 11:00am
Submission : Submit a hard copy of your written report in class
1. Test two versions of swap functions below (by printing two values, i and j, before and after swap function
call) and explain why their behaviors are different. Note that you need to write a main function that calls and
tests these functions.
2. Dump and compare the assembly code of two versions of swap functions (GCC provides “-S” compilation
flag option to generate assembly code). Explain the difference by interpreting the assembly code.
void swap(int i, int j) {
int t = i;
i = j;
j = t;
}
void swap(int *i, int *j) {
int t = *i;
*i = *j;
*j = t;
}
