int sumTree(Node* node){
        if(node==NULL)
            return 0;
        int l=sumTree(node->left);
        int r=sumTree(node->right);
        int val=node->data;
        node->data=l+r;
        return l+r+val;
    }
    void toSumTree(Node *node)
    {
        // Your code here
        sumTree(node);
    }
