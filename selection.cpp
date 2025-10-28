#include<bits/stdc++.h>
using namespace std;

void selection(int n, int a[]){
   for(int i = 0; i < n-1; i++){
    for(int j = i+1; j < n; j++){
        if(a[i] > a[j]){
            swap(a[i], a[j]);
        }
    }
   }
}

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i =0; i < n; i++){
        cin >> a[i];
    }
    selection(n, a);

    for(int i = 0; i < n; i++){
        cout<< a[i] <<" ";
    }
    return 0;

}
