#include <bits/stdc++.h>
#include<cmath>
using namespace std;

float root(int a,int b,int c)
{
    float root1;
    
    root1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    
    return root1;
}

int main(){
    printf("%f", root(6, -17, 12));
}

// 1.5
