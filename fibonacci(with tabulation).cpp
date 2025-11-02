#include<bits/stdc++.h>
using namespace std;

int fibo(int n, int f[]){

    for(int i = 2; i<= n; i++){
        f[i] = f[i-1] + f[i-2];
    }
    return f[n];
}

int main(){

    int n;
    cin >> n;
    int f[n];
    f[0] = 0;
    f[1] = 1;
    int result = fibo(n, f);
    cout << result << endl;

    return 0;

}
