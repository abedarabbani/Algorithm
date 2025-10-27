#include<bits/stdc++.h>
using namespace std;

void insertion(int n, int a[]){
    for(int i = 0; i < n; i++){
        int p = a[i];

        int j = i-1;
        while(j >= 0 && a[j] > p){
            swap(a[j + 1], a[j]);
            j--;
        }
        a[j+1] = p;

    }
}
int main(){

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];

    }
    insertion(n,a);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}
