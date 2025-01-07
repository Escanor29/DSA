#include <iostream>
#include <utility>
using namespace std;

// Target Element is present at ->
pair<int,int> isPresentAt(int arr[][4],int target,int row ,int col){
    pair<int,int> p;
    p.first = -1;
    p.second = -1;
    for(int row=0; row<3; row++) {
        for(int col=0; col<4; col++) {
            if(arr[row][col]==target){
                p.first = row;
                p.second = col;
            }           
        }
    }
    return p;
}

// Row Wise Sum
void rowSum(int arr[][4],int row,int col){
    for(int row=0; row<3; row++) {
        int sum=0;
        for(int col=0; col<4; col++) {
            sum+= arr[row][col];
        }
        cout<<sum<<endl;
    }
}

// Column Wise Sum
void colSum(int arr[][4],int row,int col){
    for(int col=0; col<4; col++) {
        int sum=0;
        for(int row=0; row<3; row++) {
            sum+=arr[row][col];
        }
        cout<<sum<<endl;
    }
}

// Largest Row Sum
void largestRowSum(int arr[][4],int row,int col){
    int maxsum = INT_MIN;
    int rowIndex = -1;
    for(int row=0; row<3; row++) {
        int sum=0;
        for(int col=0; col<4; col++) {
            sum+= arr[row][col];
        }
        if(sum>maxsum){
            maxsum = sum; 
            rowIndex = row;
        }
    }
    cout<<rowIndex<<endl;
}

int main(){

    //create 2D array
    // int arr[3][4];
    // int arr[3][4] = {1,2,3,60,5,6,7,100,70,10,11,12};
    int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};

    //taking input -> row wise input
    for(int row=0; row<3; row++) {
        for(int col=0; col<3; col++) {
            cin >> arr[row][col];
        }
    }

    //taking input -> col wise input
    for(int col=0; col<4; col++) {
        for(int row=0; row<3; row++) {
            cin >> arr[row][col];
        }
    }

    //print 
    for(int row=0; row<3; row++) {
        for(int col=0; col<3; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    // Element to search
    int target;
    cin>>target;
    pair<int,int> a = isPresentAt(arr,target,3,4);
    cout<<a.first<<" "<<a.second<<endl;

    // row-wise sum
    rowSum(arr,3,4);

    // column-wise sum
    colSum(arr,3,4);

    // Largest row sum
    largestRowSum(arr,3,4);

    return 0;
}