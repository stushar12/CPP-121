       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int> v;
            int i=0,j=0,k=0;
            while(i<n1 && j<n2 && k<n3)
            {
                if(A[i]==B[j] && B[j]==C[k])
                {
                     v.push_back(A[i]);
                    i++;
                    j++;
                    k++;
                }
                else if(A[i]<B[j])
                {
                    i++;
                }
                else if(B[j]<C[k])
                {
                    j++;
                }
                else
                {
                    k++;
                }
                
                int xx=A[i-1];
                int yy=B[j-1];
                int zz=C[k-1];
                while(i<n1 and xx==A[i])i++;                    //if there are repeating elements then just skip those elements
                while(j<n2 and yy==B[j])j++;                     //eg. A[]={3,3,3}       
                while(k<n3 and zz==C[k])k++;                  //       B[]={3,3,3}
                                                                //     C[]={3,3,3}
                  }
            if(v.size()==0)
            v.push_back(-1);
            return v;
        }
