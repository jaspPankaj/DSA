// read array

#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void readArray(vector<int> ar)
{
    for(int i=0; i<ar.size(); i++)
    {
        cout << ar[i] << " ";
    }
}

// Reverse Printing

void readArrayReverse(vector<int> ar)
{
    for(int i=ar.size()-1; i>=0; i--)
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
            cout<<"Target Element Present At : " << i << " Index.";
            return;
        }
    }

    cout<<"Target Element Not Present In Array.";
}

// Find lagrest Number in an Array
int FindLargetNumber(vector<int> ar)
{
    int max=ar[0];
    for (int i = 1; i < ar.size(); i++)
    {
        if(ar[i]>max)
        {
            max=ar[i];
        }
    }

    return max;
    
}

// Find Minimum Number in an Array
int FindMinimumNumber(vector<int> ar)
{
    int min=ar[0];
    for (int i = 1; i < ar.size(); i++)
    {
        if(ar[i]<min)
        {
            min=ar[i];
        }
    }

    return min;
    
}


// Find Minimum and Maximum Number in an Array

void FindMinMaxNumber(vector<int> ar)
{
    int max=ar[0];
    int min=ar[0];
        
    for (int i = 0; i < ar.size(); i++)
    {
        if(ar[i]>max)
        {
            max=ar[i];
        } else if(ar[i] < min)
        {
            min=ar[i];
        }
    }

    cout<< "Max is : "<<max << " and Min is : " <<min;
}

void SecondLargest(vector<int> ar){
    int max=ar[0];
    int SecondLargest=ar[1];

    if(SecondLargest>max)
    {
        max=SecondLargest;
        SecondLargest=ar[0];
    }
    for(int i=2; i<ar.size();i++)
    {
        if(ar[i]>max)
        {
            SecondLargest=max;
            max=ar[i];
        }else if (ar[i]>SecondLargest)
        {
            SecondLargest=ar[i];
        }
    }
    cout<< "Second Largest Number is : "<<SecondLargest ;
}

void SecondLargestDistinct(vector<int> ar){
    int max=ar[0];
    int SecondLargest=ar[1];

    if(SecondLargest>max)
    {
        max=SecondLargest;
        SecondLargest=ar[0];
    }
    for(int i=2; i<ar.size();i++)
    {
        if(ar[i]>max)
        {
            SecondLargest=max;
            max=ar[i];
        }else if (ar[i]<max && ar[i]>SecondLargest)
        {
            SecondLargest=ar[i];
        }
    }
    cout<< "Second Largest Distinct Number is : "<<SecondLargest ;
}

// Count Even Number
void CountEvenNumber(vector<int> ar)
{
    int count=0;
    for(int i=0;i<ar.size();i++)
    {
        if(ar[i]%2 ==0)
        {
            count++;
        }
        
    }
    cout<<"Total Even Number are : "<<count;

}

// Count Odd Number
void CountOddNumber(vector<int> ar)
{
    int count=0;
    for(int i=0;i<ar.size();i++)
    {
        if(ar[i]%2 !=0)
        {
            count++;
        }
        
    }
    cout<<"Total Not Even Number are : "<<count;

}
// Count Positive Numbers
void PositiveNumbers(vector<int> ar)
{
    int count=0;
    for(int i=0;i<ar.size();i++)
    {
        if(ar[i]>0)
        {
            count++;
        }
        
    }
    cout<<"Total Postive Numbers Are  : "<<count;

}

// Sum Positive Numbers
void SumPositiveNumbers(vector<int> ar)
{
    int sum=0;

    for(int i=0;i<ar.size();i++)
    {
        if(ar[i]>0)
        {
            sum =sum +ar[i];
        }
        
    }
    cout<<"Sum of  Postive Numbers Are  : "<<sum;

}

// Reverse the Actual Array 4 5 8 7    7 8 5 4 

void ReverseTheArray(vector<int> &ar)
{
    int left = 0;
    int right = ar.size()-1;
    while(left<right)
    {
        swap(ar[left],ar[right]);
        left++;
        right--;

    }
    readArray(ar);
}

// Frequency Count In an Array

void FrequencyCount(vector<int> ar,int Num)
{
    int count=0;
    for(int i=0;i<ar.size();i++)
    {
        if(ar[i]==Num)
        {
            count++;
        }
        
    }
    cout<<" Frequency of "<<Num<<" in Given array is "<<count;

}

// Array Left Rotatio
void ArrayLeftRotatio(vector<int>& ar, int k)
{
    if(ar.empty()){
        cout<<"Array is Empty";
        return;
    }

    if(k > ar.size()){
        k = k % ar.size();
    }

    
    reverse(ar.begin(), ar.begin() + k);

    reverse(ar.begin() + k, ar.end());

    reverse(ar.begin(), ar.end());

     readArray(ar);

}

// Array Right Rotatio
void ArrayRightRotation(vector<int>& ar, int k)
{
    if(ar.empty()){
        cout<<"Array is Empty";
        return;
    }

    if(k > ar.size()){
        k = k % ar.size();
    }

    reverse(ar.begin(), ar.end());

    reverse(ar.begin(), ar.begin() + k);

    reverse(ar.begin() + k, ar.end());

    readArray(ar);

}

// Move Zeros to End 1 0 2 3 0 5 
void MoveZeroToEnd(vector<int>& ar)
{
    int index=0;
    for(int i=0; i<ar.size(); i++)
    {
        if(ar[i]!=0)
        {
            ar[index]=ar[i];
            index++;
        }

    }
    while (index<ar.size())
    {
        ar[index]=0;
        index++;
    }

    readArray(ar);
    
}




int main()
{
   vector<int> ar = {0, 1, 0 ,3 ,12};
   readArray(ar);
   MoveZeroToEnd(ar);
   
    
    return 0;
}   