/*
ARRAYLIST OF LEVELS ( BINARY TREE )
Given a Binary tree, write code to create a separate array list for each level.
You should return an arraylist of arraylist.


Input Format:
Enter the values of all the nodes in the binary tree in pre-order format
where true suggest the node exists and false suggests it is NULL
*/
#include<bits/stdc++.h>
#include<vector>
using namespace std;
template<typename T>
class node{
public:
    T data;
    node* left;
    node* right;
    node(T data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
///creation of binary tree

template<typename T>
node<T>* createbtree(node<T>*root,bool want_to_insert=1){
    if(want_to_insert==false){
        return NULL;
    }

    T data;
    string check;
    cin>>data;
    root=new node<T>(data);
    ///left data insertion
    cin>>check;
    if(check[0]=='t'||check[0]=='T'){
        want_to_insert=true;
    }
    if(check[0]=='f'||check[0]=='F'){
        want_to_insert=false;
    }

    if(want_to_insert==true){
        root->left=createbtree(root->left,want_to_insert);
    }


    ///right data
    cin>>check;
    if(check[0]=='t'||check[0]=='T'){
        want_to_insert=true;
    }
    if(check[0]=='f'||check[0]=='F'){
        want_to_insert=false;
    }

    if(want_to_insert==true){
        root->right=createbtree(root->right,want_to_insert);
    }

    return root;
}
template<typename T>
void all_node(node<T>*&root, vector< vector<T> > &v){
    if(root==NULL){
        return;
    }
    queue<node<T>*> q1;
    queue<node<T>*> q2;
    int i=0;
    q1.push(root);
    while(!q1.empty() || !q2.empty()){
        if(!q1.empty()){
            while(!q1.empty()){
                node<T>*top=q1.front();
                q1.pop();
                v[i].push_back(top->data);
                if(top->left){
                    q2.push(top->left);
                }
                if(top->right){
                    q2.push(top->right);
                }
            }
        }
        else{
            while(!q2.empty()){
            node<T>*top=q2.front();
            q2.pop();
                v[i].push_back(top->data);
                if(top->left){
                    q1.push(top->left);
                }
                if(top->right){
                    q1.push(top->right);
                }
            }

        }
        i++;
    }
    return;
}
void pushin(vector< vector<int> >&v){
    for(int i=0;i<5;i++){
        for(int j=1;j<6;j++){
            v[i].push_back(j);
        }
    }
}
void  printv(const vector<vector <int> > &v){
            for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<",";
        }
        cout<<endl;
    }
}
int main()
{
    /*vector< vector<int> > v;
    v[0].push_back(1);
    v.push_back(v[0]);
    v[0][0]=11;
    cout<<v[0][0];
   /* node<int>*root=NULL;
    root=createbtree<int>(root);
    all_node<int>(root,v);*/
   // pushin(v);
   // printv(v);

   node<int>*l=new list<int> l;

}
