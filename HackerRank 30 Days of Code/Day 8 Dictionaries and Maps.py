# Objective
# Today, we're learning about Key-Value pair mappings using a Map or Dictionary data structure. Check out the Tutorial tab for learning materials and an instructional video!

# Task
# Given n names and phone numbers, assemble a phone book that maps friends' names to their respective phone numbers. You will then be given an 
# unknown number of names to query your phone book for. For each name queried, print the associated entry from your phone book on a new line in the 
# form name=phoneNumber; if an entry for name is not found, print Not found instead.

# Note: Your phone book should be a Dictionary/Map/HashMap data structure.

# Input Format
# The first line contains an integer, n, denoting the number of entries in the phone book.
# Each of the 2 subsequent lines describes an entry in the form of 8 space-separated values on a single line. The first value is a friend's name, 
# and the second value is an -digit phone number.

# After the n lines of phone book entries, there are an unknown number of lines of queries. Each line (query) contains a  to look up, and you must 
# continue reading lines until there is no more input.

# Note: Names consist of lowercase English alphabetic letters and are first names only.

# Constraints
# 1<=n<=10^5
# 1<=queries<=10^5

# Output Format
# On a new line for each query, print Not found if the name has no corresponding entry in the phone book; otherwise, print the full name and phonenumber 
# in the format name=phoneNumber.

# Sample Input
# 3
# sam 99912222
# tom 11122222
# harry 12299933
# sam
# edward
# harry

# Sample Output
# sam=99912222
# Not found
# harry=12299933


# SUBMITTED CODE:

n = int(input().strip())
phone_book={}
for i in range(n):
    x= input().strip()
    listx = list(x.split(' '))
    phone_book[listx[0]] = listx[1]
    
name=[]

try:
    while True:
        inp = input().strip()
        if inp != "":
            name.append(inp)
        else:
            break
            
except EOFError:
    pass
  
for i in name:
    c=0
    if i in phone_book:
        print(i+'='+phone_book[i])
    else:
        print('Not found')
