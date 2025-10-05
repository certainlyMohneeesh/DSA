#include<bits/stdc++.h>

using namespace std;

void merge(vector<int> &arr, int l, int r){
    int mid = l + (r - l)/ 2;
    int len1 = mid - l + 1;
    int len2 = r - mid;

    int *first = new int [len1];
    int *second = new int [len2];

    //copy values
    int mainArrayIndex = l;
    for (int i = 0; i<len1; i++){
      first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for (int i=0; i<len2; i++){
      second[i] = arr[mainArrayIndex++];
    }

    // merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = l;

    while (index1<len1 && index2<len2){
      if (first[index1] < second[index2]){
        arr[mainArrayIndex++] = first[index1++];
      }
      else{
        arr[mainArrayIndex++] = second[index2++];
      }
    }

    while (index1 < len1){
      arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2){
      arr[mainArrayIndex++] = second[index2++];
    }

    // Free dynamically allocated memory
    delete[] first;
    delete[] second;
}

void mergeSort(vector<int>& arr, int l, int r) {
//base case 
if (l>=r)return;
int mid = l+(r-l)/2;

//left part sort 
mergeSort(arr, l, mid);

//right part sort
mergeSort(arr, mid+1, r);

//merge
merge(arr, l, r);

}

int main() {
  vector<int> arr = {13,46,89,52,78,9};
  int n = arr.size();
   cout << "Before selection sort: " << "\n";
   for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  mergeSort(arr, 0, n-1);
  cout << "After merge sort: " << "\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  return 0;
}