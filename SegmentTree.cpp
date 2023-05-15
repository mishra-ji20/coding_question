long long update(vector<long long> &segTree,int l,int r,int i,int curr)
    {
        if(curr>=segTree.size())
            return 0;
        if(l==i && r==i)
        {
            // cout<<l<<" "<<r<<endl;
            segTree[curr]+=1;
            return 1;
        }
        int mid=(l+r)/2;
        if(i>=l && i<=mid)
        {
            update(segTree,l,mid,i,2*curr+1);
        }
        else
            update(segTree,mid+1,r,i,2*curr+2);
        segTree[curr]++;
        return segTree[curr];   
    }
    void query(vector<long long> &segTree,int l, int r, int ql, int qr,int curr,long long &sum)
    {
        
        if(curr>=segTree.size())
            return;
        // cout<<ql<<" "<<qr<<" "<<endl;
        // cout<<l<<" "<<r<<" "<<segTree[curr]<<endl;
        if(l>=ql && r<=qr)
        {
            sum+=segTree[curr];
            return;
        }
        if(qr<l || r<ql)
            return;
        int mid=(l+r)/2;
        query(segTree,l,mid,ql,qr,2*curr+1,sum);
        query(segTree,mid+1,r,ql,qr,2*curr+2,sum);
        
    }
