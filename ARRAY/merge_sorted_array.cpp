#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums1;
    vector<int>nums2;
    nums1.push_back(1);
    nums1.push_back(4);
    nums1.push_back(5);
    nums1.push_back(8);

    int m= nums1.size();

    nums2.push_back(2);
    nums2.push_back(3);
    nums2.push_back(6);
    nums2.push_back(7);
     nums2.push_back(10);
    nums2.push_back(12);

    int n= nums2.size();

    vector<int>arr(m+n);
    int i=0;
    int j=0;
    int k=0;
    while(i<=m && j<=n){
        if(nums1[i]< nums2[j]){
            arr[k]=nums1[i];
            i++;
            k++;
        }
         else if(nums1[i]> nums2[j]){
            arr[k]=nums2[j];
            j++;
            k++;
        }
      if(i==m){
        while(j<=n-1){
            arr[k]=nums2[j];
            k++;
            j++;
        }
      }
      if(j==n){
        while(i<=m-1){
            arr[k]=nums1[i];
            k++;
            i++;
            
        }
      }
      

    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}