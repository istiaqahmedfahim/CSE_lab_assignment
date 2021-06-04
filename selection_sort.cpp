#include<bits/stdc++.h>
using namespace std;

int arr[100],n;

void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int Minpos=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[Minpos]){
                Minpos=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[Minpos];
        arr[Minpos]=temp;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

int main(){
    cout<<"Enter the size of array :";
    cin>>n;
    cout<<"Enter the array element :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Unsorted array\n";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<"\n";
    cout<<"Sorted array\n";
    selection_sort(arr,n);


}
