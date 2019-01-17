/******************************************************************************
Removing duplicate elements in an std::array<T, N>;N size of array
for example: he vector contains 1,4,9,16,9,7,4,9,11 im trying to remove the 
duplicates so that the vector only has 1,4,9,16,7,11. 
*******************************************************************************/

#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
#define Max 999
int data[Max];

int main()
{
    int N = 0;
    cin >> N;
    for(int i = 0; i < N; i++)
        cin >> data[i];
    unordered_set<int> res;
    unordered_set<int>::iterator ite;
    
    for(int i = 0; i < N; i++)
        res.insert(data[i]);
    
    //for(int i = 0; i < res.size(); i++)
    //    cout << res[i]
    
    for(ite=res.begin(); ite != res.end(); ite++)
        cout << *ite << " ";
    return 0;
}
