class Solution{
    public:
    int height(struct Node* node){
        if(node)
        {
            int x = height(node->left);
            int y = height(node->right);
            
            if(x>y)
                return x+1;
            else
                return y+1;
        }
        return 0;
    }
};
