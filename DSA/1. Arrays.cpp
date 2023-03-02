#include<bits/stdc++.h>
using namespace std;

//printing array

void print(int rev[], int n){
    for(int i=0; i<n; i++){
        cout<<rev[i]<<" ";
    }cout<<endl;
}

// to get min of array

int Get_Min(int num[], int n){
    
    int min = INT_MAX;      //INT_MAX is used for initializing with the maximum number possible.
    
    for(int i=0; i<n; i++){
        if(num[i] < min)
            min = num[i];
    }
    cout<<"The min of array is: "<< min <<endl;
    return 0;
}

//to get max of array

int Get_Max(int num[], int size){
    
    int max = INT_MIN;          //INT_MIN is used for initializing with the least number possible.
     
    for(int i=0; i<size; i++){
        if(num[i] > max)
            max = num[i];
    }
    cout<<"The min of array is: "<<max<<endl;
    return 0;
}

//Printing reverse of array

void reverse(int rev[], int n){
    int s = 0;
    int e = n-1;
    
    while(s<=e){
        swap(rev[s], rev[e]);
        s++;
        e--;
    }cout<<"The reverse of array: ";
}

// To Swap Alternate numbers in an array:-

void SwapAlternate(int arr[], int n){
    int s=0, e=1;
    while(e<n){
        swap(arr[s], arr[e]);
        s += 2;
        e += 2;
    }cout<<"The alternate sawps: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

// To check the functions above

int main(){

    int arr[6] = {1,2,3,4,5,6};
    int size = sizeof(arr);

    print(arr, 6);
    Get_Min(arr, 6);
    Get_Max(arr, 6);
    reverse(arr, 6);
    print(arr, 6);
    SwapAlternate(arr, 6);
}





//KEY-NOTES:


/* 

    # printing Array:

        for (int i : arr) {
            cout<< i << " "<<endl;
        }

        for(int i=0; i<sizeof(arr)/sizeof(int); i++){
            cout<<arr[i]<<" "<<endl;
        }

    
    # if needed to find the size of array:

        do not use: sizeof(array) --> this gives the total bytes allocated in array.
        if it is a interger array then --> the number of elements is multiplied by 4.
        because the size of an integer is 4.

        instead what can be used is:
            sizeof(arr)/sizeof(int);


    # to try initialize all array members at once:

        int a[10] = {0};                               : this initialize every array element to be '0'.
        
        int b[10] = {5};                               : this initialize first element with '5' and rest is '0'.

        int arr[100];                                  : this initialize the array with value '1'.
        fill_n(arr, 100, 1);

        int c[10];                                     : this initialize every array element to be '5'.         
        for(int i = 0; i<10; i++) {
            c[i] = 5;
        }

*/







