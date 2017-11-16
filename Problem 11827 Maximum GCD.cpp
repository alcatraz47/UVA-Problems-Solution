#include <iostream>
#include <cstdio>
#include <cmath>
#include <sstream>
#include <string>
#include <vector>

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
    int N,max=0,g;
    string s;
    scanf("%d", &N);
    getline(cin,s);
    while(N){
        getline(cin,s);
        istringstream streamInt(s);
        int m;
        vector<int> vec;
        while(streamInt>>m){
            vec.push_back(m);
        }
        for(int i = 0; i<vec.size(); i++){
            for(int j=i+1; j<vec.size(); j++){
                g = GCD(vec[i],vec[j]);
                if(max<g)
                    max = g;
            }
        }
        printf("%d\n", max);
        max = 0;
        N--;
    }
    return 0;
}
