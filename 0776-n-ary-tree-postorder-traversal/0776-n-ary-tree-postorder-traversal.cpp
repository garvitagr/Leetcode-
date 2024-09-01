/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void traverse(Node* root,vector<int>&ans){
        if(root==NULL)return;
        int ct=root->children.size();
        for(int i=0;i<ct;i++){
            Node* it=root->children[i];
            traverse(it,ans);
        }
        ans.push_back(root->val);
    }

    vector<int> postorder(Node* root) {
        vector<int>ans;
        traverse(root,ans);
        return ans;
    }
};