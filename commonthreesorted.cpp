#include <bits/stdc++.h>
using namespace std;

    vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
    {
        vector<int> vec;
        int i = 0, j = 0, k = 0;
        while(i < n1 && j < n2 && k < n3)
        {
            if(A[i] < B[j] || A[i] < C[k])
                i++;
            if(B[j] < A[i] || B[j] < C[k])
                j++;
            if(C[k] < A[i] || C[k] < B[j])
                k++;
            if(A[i] == B[j] && B[j] == C[k])
            {
                vec.push_back(A[i]);
                i++;
                j++;
                k++;
            }
        }
        if(vec.size())
        {
            int temp = vec[0];
            for(int i = 1 ; i < vec.size();)
            {
                if(vec[i] == temp)
                    vec.erase(vec.begin()+i);
                else
                {
                    temp = vec[i];
                    i++;
                }
            }
            return vec;
        }
        else
        {
            vec.push_back(-1);
            return vec;
        }
    }


int main()
{
    vector<int> A = {1, 5, 10, 20, 40, 80};
    int n1 = A.size();
    vector<int> B = {6, 7, 20, 80, 100};
    int n2 = B.size();
    vector<int> C = {3, 4, 15, 20, 30, 70, 80, 120};
    int n3 = C.size();
    vector<int> v=commonElements(A,B,C,n1,n2,n3);
    for (int i=0; i<v.size(); i++){
        cout<<v[i]<<"\n";
    }
    return 0;
}
