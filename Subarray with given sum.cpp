/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.


Subarray with given sum Submissions: 94177   Accuracy: 24.99%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation   Sudo Placement [IITs]
                
Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. The first line of each test case is N and S, where N is the size of array and S is the sum. The second line of each test case contains N space separated integers denoting the array elements.

Output:
For each testcase, in a new line, print the starting and ending positions(1 indexing) of first such occuring subarray from the left if sum equals to subarray, else print -1.

Constraints:
1 <= T <= 100
1 <= N <= 107
1 <= Ai <= 1010

Example:
Input:
2
5 12
1 2 3 7 5
10 15
1 2 3 4 5 6 7 8 9 10
Output:
2 4
1 5

Explanation : 
Testcase1: sum of elements from 2nd position to 4th position is 12
Testcase2: sum of elements from 1st position to 5th position is 15

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;
#define MAX 10000001
int data[MAX];

int main()
{
    int T = 0;
    cin >> T;
    while(T-- > 0){
        long int N = 0;
        long long int S = 0;
        cin >> N >> S;
        for(int i = 0; i < N; i++)
            cin >> data[i];
        long long int sum = 0;
        for(int i = 0; i < N; i++){
            for(int j = i; j < N; j++){
                sum += data[j];
                if(S == sum){
                    cout << i+1 << " " << j+1 << endl;
                    break;
                }
                if(S < sum)
                    break;
            }
            if(S == sum)
                break;
            else
                sum = 0;
        }
        if(S != sum)
            cout <<"-1"<<endl;
    }
    return 0;
}
