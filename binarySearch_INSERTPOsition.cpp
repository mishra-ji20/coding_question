int search(vector<int> &arr,int a)
    {
        int l=0;
        int h=arr.size()-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(arr[mid]==a)
                return mid;
            else if(arr[mid]>a)
                h=mid-1;
            else
                l=mid+1;
        }
        return l;
    }
