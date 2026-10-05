#include <iostream>
#include <vector>
using namespace std;


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

    vector<int> arr = {1,2,3,4,8,16,27,38,49,100};
    int target = 58;

    int result = BinarySearchInsertPosition(arr,target);
    
    cout<<"Target should be inserted at  : "<<result << " Index.";

      
    return 0;

}