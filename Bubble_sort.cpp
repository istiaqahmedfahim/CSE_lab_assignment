#include<bits/stdc++.h>
using namespace std;

int arr[100],n;

void bubble_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int flag=0;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0){
          break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
        if (i == n-1) cout<<";"<<endl;
        else cout<<", ";
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
        if (i == n-1) cout<<";"<<endl;
        else cout<<", ";
    }
    cout<<"\n";
    cout<<"Sorted array\n";
    bubble_sort(arr,n);


}
