#include <iostream>
using namespace std;
#define MAX_SIZE 101

int A[MAX_SIZE]; // integer array to store the stack
int top = -1;//rear index of array
int bottom = -1;//front element of an array

void enqueue(){
    int x;
    cout<<"enter number to push:\n";
    cin>>x;
    if(top==MAX_SIZE-1){
        cout<<"array is full.\n";
        return;
    }
    top++;
    A[top]=x;
    if(bottom==-1){
        bottom++;
    }
}

void dequeue(){
    if(bottom==-1||bottom>top){
        cout<<"array is empty.\n";
        return;
    }
    bottom++;
    for(int i=0;i<top;i++){
      A[i]=A[i+1];
      }
      top--;
}

void Print() {
	int i;
	cout<<"Queue: ";
	for(i = 0;i<=top;i++){
		cout<<A[i];
	cout<<"\n";}
}

int main(){
    int y;
 while(1){
   cout<<"Enter 1 to Enqueue and 0 to dequeue:";
   cin>>y;
  if(y==1){
    enqueue();
 }
  else if(y==0){
    dequeue();
 }
  else {
    cout<<"Invalid input\n";
    }
  Print();
 }

}
