Print the following pattern for the given number of rows.
Pattern for N = 4



The dots represent spaces.



Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1:
5
Sample Output 1:
           1
         232
       34543
     4567654
   567898765
Sample Input 2:
4
Sample Output 2:
           1
         232
       34543
     4567654
             
             code
             #include <iostream>
using namespace std;
int main()
{
    int rows,i,j=0,num=0,count1=0,spaceCount;
    
    cin>>rows;
    for(i=1; i<=rows; i++){
        for(spaceCount=1; spaceCount<=rows-i; spaceCount++){
                cout<<" ";
                count1++;
    }
    while(j!=2*i-1)
    {
        if(count1<=rows-1){
            cout<<i+j;
            count1++;
        }
    else{
            num++;
            cout<<(i+j-2*num);
    }
    ++j;
    }
    num=count1=j=0;
    cout<<"\n";
    }
   
    return 0;
}
