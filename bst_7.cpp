int find(Node *root,int &cnt, int k) 
{
    if(root==NULL)
    {
        return -1;
    }
    int ans=find(root->left,cnt,k);
    if(ans!=-1)
    {
        return ans;
    }
    cnt++;
    if(cnt==k)
    {
        return root->data;
    }
    return find(root->right,cnt,k);
}

int KthSmallestElement(Node *root, int K)
{
    int cnt=0;
    return find(root,cnt,K);
}
