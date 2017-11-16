#include <bits/stdc++.h>

using namespace std;


int main()
{
    int test;
    scanf("%d", &test);
    int n;
    char N,equals;
    for(int t=1; t<=test; t++){
        scanf("%c", &N);
        scanf("%c %c %d", &N,&equals,&n);
        long long arr[n][n];
        bool flag = true;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                scanf("%ld", &arr[i][j]);
                if(arr[i][j]<0) flag = false;
            }
        }
        int s = n-1;
        if(flag==false) printf("Test #%d: Non-symmetric.\n", t);
        else{
            for(int i=0; i<=n/2; i++){
                for(int j=0; j<n; j++){
                    if(arr[i][j]!=arr[s-i][s-j]) {flag = false; break;}
                }
            }
            if(flag==true) printf("Test #%d: Symmetric.\n", t);
            else printf("Test #%d: Non-symmetric.\n", t);
        }
    }
    return 0;
}
