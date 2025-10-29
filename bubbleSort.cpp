#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            if(a[j] < a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }
    for(int i = n-1; i >= 0; i--){
        cout << a[i] << " ";
    }
    return 0;

}
/*4
2 5 1 8
1 2 5 8*/
