class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
string res;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){           
            int siz=que.size();        
            while(siz--){
                TreeNode* cur=que.front();
                que.pop();
                if(cur==nullptr){
                    res+="nullptr,";
                }else{
                    string str_val=to_string(cur->val)+",";
                    res+=str_val;                    
                    que.push(cur->left);
                    que.push(cur->right);            
                }                                
            }            
        }
        return res;    
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
stringstream s(data);
        string str_node;
        queue<TreeNode*> que;
        getline(s,str_node,',');
        TreeNode* root;
        if(str_node=="nullptr"){
            return nullptr;
        }else{
            int inte_node=stoi(str_node);
            root=new TreeNode(inte_node);
            que.push(root);
        }
        while(!que.empty()){
            int siz=que.size();
            while(siz--){
                TreeNode* cur=que.front();
                que.pop();                           
                if(cur!=nullptr){
                    string str_left,str_right;                                       
                    if(getline(s,str_left,',') && str_left!="nullptr"){
                        TreeNode* l=new TreeNode(stoi(str_left));
                        que.push(l);
                        cur->left=l;
                    }                    
                    if(getline(s,str_right,',') && str_right!="nullptr"){   
                        TreeNode* r=new TreeNode(stoi(str_right));
                        que.push(r);
                        cur->right=r;
                    }                      
                }
            }            
        }
        return root;        
    }
};
