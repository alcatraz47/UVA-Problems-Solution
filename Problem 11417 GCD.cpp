#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int GCD(int a, int b){
    if(a==0 && b==0){
        return 0;
    }
    else{
        while(b){
            a = a%b;
            swap(a,b);
        }
    }
    return abs(a);
}

int main()
{

    int G = 0;
    int N;
    while(scanf("%d", &N)==1 && N!=0){
        for(int i = 1; i<N; i++){
            for(int j=i+1; j<=N; j++){
                G += GCD(i,j);
            }
        }
        printf("%d\n", G);
        G = 0;
    }
    return 0;
}
