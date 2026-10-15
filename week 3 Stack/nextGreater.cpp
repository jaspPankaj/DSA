// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> NextGreater(vector<int> arr){
//     // Initialize the result vector with -1 of the same size as arr
//     vector<int> ng(arr.size(), -1); 
        
//     for(int i = 0; i < arr.size(); i++){
//         for(int j = i + 1; j < arr.size(); j++){ // Start from i + 1
//              if(arr[j] > arr[i]){
//                 ng[i] = arr[j]; // Store the greater element for index i
//                 break;
//              }
//         }
//     }
    
//     return ng;
// }

// int main(){
//    vector<int> arr = {4 , 6 , 7 , 1 , 10};
//    vector<int> ng = NextGreater(arr);

//    for(int i = 0; i < ng.size(); i++){
//        cout << ng[i] << " ";
//    }
//    cout << endl;
   
//    return 0;
// }






#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> NextGreater(vector <int> &arr){

    int n = arr.size();
    vector<int> ans(n);
    stack<int> st;

    for(int i = n; i >= 0; i--){
        while(!st.empty() && st.top() <= arr[i]){
            st.pop();
        }

        if(st.empty()){
            ans[i] = -1;
        }
        else{
            ans[i] = st.top();
        }

        st.push(arr[i]);
    }
   return ans;
}



int main(){
     vector<int> arr = {3, 7, 4, 9};

    vector<int> ans = NextGreater(arr);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}