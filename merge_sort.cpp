// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

void mergeSort(vector<int>& v, int l, int h){
    if(l >= h) return;
    int mid = (l + h) / 2;
    mergeSort(v, l, mid);
    mergeSort(v, mid+1, h);

    vector<int> leftVector(v.begin() + l, v.begin() + mid + 1);
    vector<int> rightVector(v.begin() + mid + 1, v.begin() + h + 1);

    int leftPointer = 0, rightPointer = 0, i = l;
    while(leftPointer < leftVector.size() && rightPointer < rightVector.size()){
        if(leftVector[leftPointer] < rightVector[rightPointer]){
            v[i] = leftVector[leftPointer];
            leftPointer++;
        }
        else{
            v[i] = rightVector[rightPointer];
            rightPointer++;
        }
        i++;
    }
    while(leftPointer < leftVector.size()){
        v[i] = leftVector[leftPointer];
        leftPointer++;
        i++;
    }
    while(rightPointer < rightVector.size()){
        v[i] = rightVector[rightPointer];
        rightPointer++;
        i++;
    }
}
int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    mergeSort(v, 0, n-1);
    for(auto it: v) cout << it << ' ' ;
    cout << '\n';
}