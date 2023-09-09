#include<bits/stdc++.h>
using namespace std;

// iterative code for Binary Search
int BinarySearch(vector<int> arr,int x){
  int low =0,high =arr.size()-1;
  while(low <= high){
    int mid = low +(high - low)/2;
    if(arr[mid]==x){
      return mid;
    }
    else if(x > arr[mid]){
      low = mid+1;
    }
    else{
      high =mid-1;
    }
  }
  return -1;
}

// Recursive code for Binary Search
int RecurBinarySearch(vector<int> arr,int low,int high,int target){

  if(low > high) return -1;
  int mid =(low+high)/2;

  if(arr[mid]== target){
    return mid; 
}
else if(target > arr[mid]){
  return RecurBinarySearch(arr,mid+1,high,target);
}

return RecurBinarySearch(arr,low,mid-1,target);
}


int main(){
  vector<int> ar ={1,2,4,6,8,9,12};
  int target =1;
  // int ans=BinarySearch(ar,target);
  int ans = RecurBinarySearch(ar,0,ar.size()-1,target);
  cout<<ans;
}

// Time complexity :- O(log2(N))