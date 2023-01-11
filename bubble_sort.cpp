#include<bits/stdc++.h>

using namespace std;

vector<int>bubbleSort(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    };
    return arr;
}

int main()
{
    vector<int>arr={5,1,4,3,7,2};
    vector<int>ans=bubbleSort(arr);
    for(int i=0;i<ans.size();i++)
        cout << ans[i] << " ";
    return 0;
}
