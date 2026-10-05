#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int>& arr, int target)
{
    int left = 0;
    int right =  arr.size()-1;
    while(left <=  right){

        int mid = left + ( right - left) / 2;

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
   

}


//Binary Search Insert Position.
int BinarySearchInsertPosition(vector<int>& arr, int target)
{
    int left = 0;
    int right =  arr.size()-1;
    while(left <=  right){

        int mid = left + ( right - left) / 2;

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return left;
   

}


int main(){

    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int target = 512;

    int result = BinarySearch(arr,target);
    
    if(result ==-1){
        cout<<"Target is not found in the array.";
    }
    else{
        cout<<"Target is present at : "<<result;
    }    
    return 0;

}