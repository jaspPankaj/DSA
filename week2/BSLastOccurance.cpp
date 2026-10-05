#include <iostream>
#include <vector>
using namespace std;


//Binary Search Insert Position.
int BinarySearchLastOccurance(vector<int>& arr, int target)
{
    int left = 0;
    int right =  arr.size()-1;
    int answer;
    while(left <=  right){
        // arr = {1, 2, 2, 2,3,3,3, 4, 5}; l=0 r=3 

        int mid = left + ( right - left) / 2; 

        if(arr[mid] == target){
            answer=mid;  //ans=4
            left=mid+1; 
        }
        else if(arr[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return answer;
   

}


int main(){

    vector<int> arr = {1, 2, 2, 2,3,3,3, 4, 5};
    int target = 2;

    int result = BinarySearchLastOccurance(arr,target);
    
    if(result ==-1){
        cout<<"Target is not found in the array.";
    }
    else{
        cout<<"Target value Last occurance at  : "<<result<<" Index.";
    }    
    
    
      
    return 0;

}