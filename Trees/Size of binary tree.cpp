int getSize(Node* node)
{
   if(node)
   {
       int x = getSize(node->left);
       int y = getSize(node->right);
       
       return x+y+1;
   }
   return 0;
}
