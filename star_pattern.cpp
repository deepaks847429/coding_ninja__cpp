Print the following pattern
Pattern for N = 4



The dots represent spaces.



Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1 :
3
Sample Output 1 :
   *
  *** 
 *****
Sample Input 2 :
4
Sample Output 2 :
    *
   *** 
  *****
 *******
 
      code
      #include<iostream>
using namespace std;
int main()
{
int n, s, i, j;

cin >> n;
for(i = 1; i <= n; i++)
{

for(s = i; s < n; s++)
{
cout << " ";
}

for(j = 1; j <= (2 * i - 1); j++)
{
cout << "*";
}

cout << "\n";
}
}
