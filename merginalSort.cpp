#include<bits/stdc++.h>
using namespace std;

void merging(int l, int h, int mid, int a[]){
    int n = mid -l + 1;
    int m = h- mid;
    int A[n], B[m];

    for(int i = 0; i < n; i++){
        A[i] = a[l+i];
    }
    for(int j = 0; j < m; j++){
        B[j] = a[mid + 1 + j];
    }
    int i = 0, k = l, j = 0;
    while(i < n && j < m){
        if(A[i] < B[j]){
            a[k] = A[i];
            i++;
            k++;
        }
        else{
            a[k] = B[j];
            j++;
            k++;
        }
    }
    for( ; i < n; i++){
        a[k] = A[i];
        i++;
        k++;

    }
    for( ; j < m; j++){
        a[k] = B[j];
        j++;
        k++;
    }
}

void mergeSort(int l, int h, int a[]){
    if(l < h){
        int mid = (l+h)/2;
        mergeSort(l, mid, a);
        mergeSort(mid+1, h, a);
        merging(l,h,mid,a);
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];

    }
    mergeSort(0, n-1, a);

    for(int i = 0; i < n; i++){
        cout << a[i] <<" " ;
    }
    return 0;
}
/*
8
9 3 7 5 6 4 8 2
2 3 4 5 6 7 8 9*/
