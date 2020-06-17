/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* tmp=q.front();
            q.pop();
            if(tmp){
                ans+=to_string(tmp->val);
                q.push(tmp->left);
                q.push(tmp->right);
            }else{
                ans+="null";
            }
            ans+=",";
        }
        return ans;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        vector<string> val=split(data);
        if(val[0]=="null"){
            return NULL; 
        }
        TreeNode* root=new TreeNode(stoi(val[0]));
        queue<TreeNode*> q;
        q.push(root);
        for(int i=1;i<val.size();){
            if(val[i]!="null"){
                TreeNode* p=new TreeNode(stoi(val[i]));
                q.push(p);
                q.front()->left=p;
            }
            i++;
            if(val[i]!="null"){
                TreeNode *p=new TreeNode(stoi(val[i]));
                q.push(p);
                q.front()->right=p;

            }
            i++;
            q.pop();
        }
        return root;
    }

     vector<string> split(string& data) {
    	vector<string> ans;
    	int start = 0;
    	while (1) {
    		auto end = data.find(',',start);
    		if (end == string::npos) break;
    		ans.push_back(data.substr(start, end-start));
    		start = end + 1;
        }
    	return ans;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));