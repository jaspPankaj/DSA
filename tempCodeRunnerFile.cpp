#include<iostream>
#include<vector>
using namespace std;

void readArray(vector<int> ar)
{
    for(int i=0; i<ar.size(); i++)
    {
        cout << ar[i] << " ";
    }
}

int SumArray(vector<int> ar)
{
    int sum = 0;
    for(int i=0; i<ar.size(); i++)
    {
        sum += ar[i];
    }
    return sum;
}

// Linear Search in Array
void LinearSearch(vector<int> ar , int target){
    if(ar.size()==0)
    {
        cout<<"Empty Array.";
    }

    for(int i=0; i<ar.size();i++)
    {
        if(ar[i]==target){
            cout<<"Target Element Present At :" << i << " Index.";
            return;
        }
    }

    cout<<"Target Element Not Present In Array.";
}


int main()
{
   vector<int> ar = {1, 2, 3, 4, 5};

    LinearSearch(ar,2);
    return 0;
}