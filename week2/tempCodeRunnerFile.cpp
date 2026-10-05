#include <iostream>
#include <vector>
using namespace std;

int main(){


    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int target = 512;

    int left = 0;
    int right =  arr.size()-1;

    while(left <=  right){

        int mid = left + ( right - left) / 2;

        if(arr[mid] == target){
            cout<< "Target Element Present At : " << mid << " Index.";
            break;
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