//https://www.hackerrank.com/contests/all-india-contest-by-coding-club-india-30-may-2020/challenges/ritesh-first-love/editorial

import java.io.*;
import java.util.*;

public class Solution {
    public static long power(long a, long n, long mod){
        if(n == 0)return 1;
        if(n == 1)return a;
        long p = power(a, n / 2, mod);
        p = (p * p) % mod;
        if(n % 2 == 1)p = (p * a) % mod;
        return p;
    }
    public static void main(String[] args) {
        long mod = 1000000007;
        Scanner sc = new Scanner(System.in);
        long ans,n,k,t;
        t = sc.nextLong();
        while(t-->0){
            ans = 1;
            n = sc.nextLong();
            k = sc.nextLong();
            n--;
            for(long i = k+n+2; i > n; --i)ans = (ans * i) % mod;
            ans = (ans * power(k+2,mod-2,mod)) % mod;
            System.out.println(ans);
        }
    }
}
#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
long long power(long long a, long long n){
    if(n == 0)return 1LL;
    if(n == 1)return a;
    long long p = power(a, n >> 1);
    p = p * p % mod;
    if(n & 1)p = p * a % mod;
    return p;
}

int main(){
    long long ans = 1,n,k,t;
    cin >> t;
    while(t--){
        ans = 1;
        cin >> n >> k;
        n--;
        for(long long l = k + 2 + n; l > n; --l)ans = ans * l % mod;
        ans = ans * power(k+2,mod-2) % mod;
        cout << ans << "\n";
    }
    return 0;
}