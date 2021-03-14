int sumOfLeafNodes(Node *r ){
     
     if(r==NULL)
        return 0;
     else if(r->left==NULL && r->right==NULL)
        return r->data;
      else
        return sumOfLeafNodes(r->left) + sumOfLeafNodes(r->right);
}
