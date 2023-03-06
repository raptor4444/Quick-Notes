#include<bits/stdc++.h>
using namespace std;

// UNIQUE NUMBER IN ARRAY:


void findUnique(int arr[], int size){

    int ans = 0;

    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }
    cout<<"unique element in array is: "<<ans<<endl;
}


void findDuplicate(int arr[], int size){
    int j = 1;
    for(int i=0; i<size; i++){
        if(arr[i]==arr[j]){
            cout<<"duplicate element in array is: "<<arr[i]<<endl;
            j++;
        }
        else{
            j++;
        }
    }
}




int main(){




    //SWAP OF TWO NUMBERS:

    int a=4, b=5;

    a = a^b;                                    // the value of a has changed to a^b.// the value of a has changed to a^b.

    
        
    b = b^a;                                    /*  
                                                after execution of statement 1, the value of a is a^b. 
                                                execution takes place like: b = b^(a^b).
                                                After execution of this statement the value of b becomes a.
                                                */ 
    
         

    a = a^b;                                    /*
                                                After execution of statement 2, the value of b becomes a.
                                                execution took place like: a = (a^b)^a.  where a = a^b; b = a;
                                                After execution of this statement the value of a becomes b. 
                                                */ 

    cout<<a<<" "<<b<<endl;                      //now a = 5; b = 4;




    //FINDING UNIQUE NUMBER IN ARRAY:


    int arr[5] = {1,2,3,4,8};

    findUnique(arr, 5);
    findDuplicate(arr,5);
    
    
    
    //FINDING DUPLICATE:
    
    int arr1[5] = {1,2,3,3,2};
	int ans = 0;
	int size = sizeof(arr1)/sizeof(int);
	
	for(int i=0; i<size; i++){
	    ans = ans^arr1[i];
	}

    for(int i=1; i<size; i++){
        ans = ans^i;
    }
	
	cout<<ans<<endl;
    
    
    return 0;

}
