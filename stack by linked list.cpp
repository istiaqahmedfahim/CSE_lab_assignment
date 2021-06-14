#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* link;
};

struct Node* top;

void push(){
    int x;
    cout<<"Enter data to push:";
    cin>> x;
    Node* temp=new Node();
    temp->data=x;
    temp->link=top;
    top=temp;
}

void pop(){
    struct Node* temp;
    temp=top;
    if(temp==NULL){
        return;
    }
    top=top->link;
    free(temp);
}

void Print(Node* top) {
     struct Node* ptr;
     ptr = top;
     while (ptr!= NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->link;
    }

}


int main(){
  while (true){
        int k;
        cout<<"Press 1 to push or 0 to pop:";
        cin>>k;
        if (k == 1) push();
        else if (k == 0) pop();
        else break;
        Print(top);
    }
    cout<<"Program ended"<<endl;
    return 0;
}

