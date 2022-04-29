#include<bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    struct node *rht,*lft;

};
int arr[100],len=0;
struct node *root=NULL;
struct node *insert(struct node *root,int x);
void in(struct node *root);
void rootToLeaf(struct node *root,int l);
void printv(int x);
int main()
{
    int n;
    puts("ENTER QUANTITY: ");
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        int x;
        scanf("%d",&x);
        root=insert(root,x);
    }
    puts("In order traversal: ");
    in(root);
    cout<<endl;
    puts("Root to leaf paths: ");
    rootToLeaf(root,len);
}
struct node *insert(struct node *root,int x)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(root==NULL)
    {
        root = temp;
        root->rht=NULL;
        root->lft=NULL;
        root->val=x;
        return root;
    }
    else if(root->val<x)
    {
        root->rht=insert(root->rht,x);
    }
    else
        root->lft=insert(root->lft,x);
    return root;
}
void in(struct node *root){
    if(root!=NULL){
        in(root->lft);
        printf("%d ",root->val);
        in(root->rht);

    }
    else return;
}
void rootToLeaf(struct node *root, int l)
{
    //int l=0;
    if(root==NULL) return;
    arr[l]=root->val;
    ++l;
    if(root->lft==NULL and root->rht==NULL){
        printv(l);
    }
    else{
        rootToLeaf(root->lft,l);
        rootToLeaf(root->rht,l);
    }

}
void printv(int x){
    for(int i=0;i<x;++i){
        cout<<arr[i]<<' ';
    }
//    v.clear();
    cout<<endl;
}
