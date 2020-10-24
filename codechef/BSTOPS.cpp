#include<bits/stdc++.h>
using namespace std;
#define jaadu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long int uli;
struct node{
	uli num;
	uli pos;
	struct node *left, *right;
};

struct node* insert(struct node* bst, uli ele, uli p){
	if(bst == NULL){
	    cout<<p<<endl;
		struct node *temp = (struct node *) malloc(sizeof(struct node));
		bst = temp;
		bst->num = ele;
		bst->pos = p;
		bst->left = NULL;
		bst->right = NULL;
		
	}else{
		if(ele < bst->num){
			bst->left = insert(bst->left, ele, 2*p);
		}else{
			bst->right = insert(bst->right, ele, 2*p+1);
		}
	}
	return bst;
}
struct node* inorderSuccessor(struct node* root){
	while(root->left){
		root = root->left;
	}
	return root;
}
struct node* delNode(struct node* bst, uli ele){
	if(bst == NULL){
		return bst;
	}
	if(ele < bst->num){
		bst->left = delNode(bst->left, ele);
	}else if(bst->num < ele){
		bst->right = delNode(bst->right, ele);
	}
	else{
		cout<<bst->pos<<endl;
		if(bst->left == NULL){
			struct node* temp = (struct node*)malloc(sizeof(struct node));
			temp = bst->right;
			free(bst);
			return temp;
		}
		if(bst->right == NULL){
			struct node* temp = (struct node*)malloc(sizeof(struct node));
			temp = bst->left;
			free(bst);
			return temp;
		}
		struct node* temp = inorderSuccessor(bst->right);
		bst->num = temp->num;
		bst->right = delNode(bst->right, temp->num);
		
	}
	return bst;
}
int main()
{
	jaadu;
	int t;
	cin>>t;
	struct node *bst = NULL;
	while(t--){
		char s;
		uli ele;
		cin>>s>>ele;
		if(s == 'i'){			
			bst = insert(bst, ele, 1);
		}else{
			bst = delNode(bst, ele);
		}
	}
	return 0;
}