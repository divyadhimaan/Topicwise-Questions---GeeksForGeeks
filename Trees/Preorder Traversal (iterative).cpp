vector<int> preOrder(Node* root)
{
 
    stack<Node*> st;
    st.push(root);
    vector<int> v;

    if (root == NULL)
        return v;

    while (!st.empty()) {
        Node* node = st.top();
        v.push_back(node->data);
        st.pop();
 
        if (node->right)
            st.push(node->right);
        if (node->left)
            st.push(node->left);
    }
    return v;
}
