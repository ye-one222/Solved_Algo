#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct NODE{
    char root;
    char left;
    char right;
};
NODE nodeArr[26];

void preorder(char root){
    cout<<root;
    if(nodeArr[root-'0'].left != '.')
        preorder(nodeArr[root-'0'].left);
    if(nodeArr[root-'0'].right != '.')
        preorder(nodeArr[root-'0'].right);
}

void inorder(char root){
    if(nodeArr[root-'0'].left != '.')
        inorder(nodeArr[root-'0'].left);
    cout<<root;
    if(nodeArr[root-'0'].right != '.')
        inorder(nodeArr[root-'0'].right);
}

void postorder(char root){
    if(nodeArr[root-'0'].left != '.')
        postorder(nodeArr[root-'0'].left);
    if(nodeArr[root-'0'].right != '.')
        postorder(nodeArr[root-'0'].right);
    cout<<root;
}

int main(){
    int N;
    cin>>N;
    char f, s, t;
    for(int i=0;i<N;i++){
        cin>>f>>s>>t;
        NODE node;
        node.root = f;
        node.left = s;
        node.right = t;
        nodeArr[f-'0'] = node;
    }
    
    preorder('A');
    cout << "\n";
    inorder('A');
    cout << "\n";
    postorder('A');
}