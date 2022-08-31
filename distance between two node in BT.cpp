Node* LCA(Node* root,int n1,int n2){
if(root==NULL || root->key==n1 ||root->key==n2)
            return root;
        
        Node* left=LCA(root->left,n1,n2);
        Node* right=LCA(root->right,n1,n2);
        
        
        if(left==NULL)
            return right;
        if(right==NULL)
            return left;
        else{
            return root;
        }

}
int distance(Node* root,int k,int dist){
	if(root==NULL)
      return -1;
   if(root->key==k)
     return dist;
  int l=distance(root->left,k,dist+1);
  if(l!=-1)
    return l;
  return distance(root->right,k,dist+1);

}
int distBwNodes(Node *root, int n1, int n2)
{
	Node* lca=LCA(root,n1,n2);
  int d1=distance(lca,n1,0);
  int d2=distance(lca,n2,0);
  return d1+d2;
}
