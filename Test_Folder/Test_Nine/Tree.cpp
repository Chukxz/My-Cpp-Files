#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};


void print(Node *root, int space=0, int t=3){
    const int COUNT = 3;

    if(root == NULL)
       return;
    space+=COUNT;
    print(root->right,space,1);

    for(int i = COUNT; i<space; i++){
        cout<<" ";
    }
    if(t==1){//Right node
        cout<<"/ "<<root->data<<endl;
    }
    else if(t==2){//Left node
        cout<<"\\ "<<root->data<<endl;   
    }
    else{//Root node
        cout<<root->data<<endl;
    }
    print(root->left,space,2);
}

// void display(Node *root, int space = 0, int t = 3){
//     const int count = 3;
//     if(root == NULL)
//        return;
//     space+=count;
//     if(t==3){
//         for(int i=0;i<7;i++){
//             cout<<"   ";
//         }
//         cout<<root->data<<endl;
//     }
//     display(root->left,space,2);
//     if(t==2){
//         cout<<"\\ "<<root->data<<endl;
//     }
//     display(root->right,space,1);

// }

//     int num = 0;
//     int rightnums = 0;
//     int leftnums = 0;
//     int nodenums = 0;
// void print(Node *root, int space=0, int t=3){
//     const int COUNT = 3;
//     if(root == NULL)
//        return;
//     space+=COUNT;
//     print(root->right,space,1);

//     for(int i = COUNT; i<space; i++){
//         cout<<" ";
//     }
//     if(t==1){//Right node
//         num+=1;
//         rightnums++;
//         cout<<"/ "<<root->data;
//         cout<<"--"<<num;
//         cout<<endl;
//     }
//     else if(t==2){//Left node
//         num+=1;
//         leftnums++;
//         cout<<"\\ "<<root->data;
//         cout<<"--"<<num;
//         cout<<endl;   
//     }
//     else{//Root node
//         num+=1;
//         nodenums++;
//         cout<<root->data;
//         cout<<"--"<<num;
//         cout<<endl;
//     }
//     print(root->left,space,2);
// }
int main(){
    Node *root = new Node(1);
    root->right = new Node(2);
    root->left = new Node(3);
    root->right->left = new Node(4);
    root->right->right = new Node(5);
    root->left->left = new Node(6);
    root->left->right = new Node(7);
    root->right->left->right = new Node(8);
    root->right->left->left = new Node(9);
    root->right->right->right = new Node(10);
    root->right->right->left = new Node(11);
    root->left->right->right = new Node(12);
    root->left->right->left = new Node(13);
    root->left->left->right = new Node(14);
    root->left->left->left = new Node(15);
    print(root);
    // cout<<num<<endl<<rightnums<<endl<<leftnums<<endl<<nodenums<<endl;
    // display(root);
    return 0;
}