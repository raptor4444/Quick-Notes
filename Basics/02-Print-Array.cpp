//Different loops to print an ARRAY:

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    //ARRAY named "arr":
    int arr[5] = {2,3,4,5,2};
    
    // 1.
    
    for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    // 2.

    for (int j : arr){
        cout<<j<<" ";
    }

    // 3.

    int n=0;
    while(n<5){
        cout<<arr[n-1]<<" ";
        n++;
    }
    

	return 0;
}

