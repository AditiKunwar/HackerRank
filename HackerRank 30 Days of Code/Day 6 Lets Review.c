// Objective
// Today we will expand our knowledge of strings, combining it with what we have already learned about loops. Check out the Tutorial tab 
// for learning materials and an instructional video.

// Task
// Given a string, S, of length N that is indexed from 0 to N-1, print its even-indexed and odd-indexed characters as  space-separated strings 
// on a single line (see the Sample below for more detail).

// Note: 0 is considered to be an even index.

// Example
// s=abdefc
// Print abc def

// Input Format
// The first line contains an integer, T (the number of test cases).
// Each line i of the T subsequent lines contain a string, S.

// Output Format
// For each String S (where ), print S's even-indexed characters, followed by a space, followed by S's odd-indexed characters.

// Sample Input
// 2
// Hacker
// Rank

// Sample Output
// Hce akr
// Rn ak

// SUBMITTED CODE:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{  
    int n; char s[10000];
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
       scanf("%s",s);
       myFunction(s);
   } 
    return 0;
}
void myFunction(char s[])
{
    for(int i=0;i<strlen(s);i++)
    {
        if (i%2 == 0)
        {
            printf("%c",s[i]);
        }
    }
    
    printf(" ");

    for(int i=0;i<strlen(s);i++)
    {
        if (i%2 != 0)
        {
            printf("%c",s[i]);
        }
    }     
    printf("\n");
}
