#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>&arr,int left,int mid,int right){
    // to merge the splitted array
    int n1 = mid - left +1 ;
    int n2 = right - mid;

    // create two temp store 
    vector<int> L(n1);
    vector<int> R(n2);

    // copy values in temp arrays
    for(int i =0; i<n1 ;i++){
        L[i] = arr[left + i];

    }
    for(int i =0; i<n2 ;i++){
        R[i] = arr[mid + 1 + i];
    }

    // now comparing values in these two array and storing in order
    int i =0,j=0, k = left;

    while(i<n1 && j<n2){
        if(L[i]<= R[j]){
            arr[k++] = L[i++];
        }else{
            arr[k++] = R[j++];
        }
    }

    while(i<n1){
        arr[k++] = L[i++];
    }

    while(j<n2){
        arr[k++] = R[j++];
    }
    
}


void mergeSort(vector<int>&arr,int left, int right){
    if(left<right){
        int mid = left + (right-left)/2;

        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);

        merge(arr,left,mid,right);
    }

}

void display(vector<int>arr){
    cout<<"Array after Merge Sort : ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";


    }
}



int main(){
    vector<int>arr = {8, 3, 4, 12, 5, 6, 7, 1};
    int n = arr.size();

    mergeSort(arr,0,n-1);
    display(arr);
}