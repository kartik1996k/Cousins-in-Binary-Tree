/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


  int height( TreeNode * root, int v, int h)
{
    if(root==NULL)
        return -1 ;
    else if(root->val==v)
        {
     //   cout<<h<<"&";
    return h;
        }
   
    else 
    {
         int a=height(root->left,v,h+1);
         int b=height(root->right,v,h+1);
         if(a==-1)
             return b;
        else
            return a;
            
    }

    
}
int parent( TreeNode * root, int v, int p)
{
    if(root==NULL)
        return -1 ;
    else if( root->val==v)
    {
        return p;
    }
   
    else 
    {
         int a=parent(root->left,v,root->val);
         int b=parent(root->right,v,root->val);
         if(a==-1)
             return b;
        else
            return a;
            
    }

    
}


class Solution {
public:
  
    bool isCousins(TreeNode* root, int x, int y) {
     
     int a= height(root,x,0);
      int b=height(root,y,0);
      cout<<a<<b;
    int c= parent(root,x,0);
      int d=parent(root,y,0);
        cout<<c<<d;
      if(a==b&&c!=d)
          return true;
        else
            return false;
        
    }
};
