/*
*
* Tag: Math & Implemetation
* Time:O(m) where m is the number of query
* Space: O(1)
*/
#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<fstream>
#include<algorithm>
#include<map>
#include<climits>
#include<stdlib.h>
#include<vector>
#include<utility>
#include<stack>
#include<queue>
#include<bitset>
#include<set>
#include<cmath>
#include<list>
#include<sstream>
#include<time.h>
using namespace std;
const int M = 3000;
const int N = 100500;
const double eps = 1e-8;
const double dinf = 1e15;
const int MOD = 100000007;
int nums[] = {7,13,19,23,31,79,97,103,109,139,167,193,239,263,293,313,331,367,379,383,397,409,487,563,617,653,673,683,709,739,761,863,881,907,937,1009,1033,1039,1093,1151,1277,1303,1373,1427,1447,1481,1487,1511,1607,1663,1697,1733,1847,1933,2003,2039,2063,2111,2221,2309,2333,2339,2383,2393,2417,2557,2693,2741,2833,2851,2903,2963,3001,3019,3067,3079,3083,3109,3137,3209,3301,3313,3319,3323,3329,3331,3371,3391,3463,3607,3637,3643,3673,3709,3779,3797,3803,3823,3833,3907,3923,3931,4111,4127,4157,4217,4271,4363,4441,4447,4481,4517,4663,4721,4751,4817,4871,5147,5227,5281,5417,5471,5477,5527,5569,5659,5741,5821,5879,5897,5987,6037,6053,6073,6163,6197,6203,6329,6337,6343,6353,6361,6367,6373,6389,6637,6661,6673,6701,6703,6719,6733,6763,6791,6803,6899,6917,6971,6983,7039,7127,7309,7331,7451,7457,7481,7541,7547,7589,7603,7691,7793,7841,7937,8081,8147,8233,8369,8521,8597,8693,8699,8741,8821,8929,8963,8969,9001,9007,9013,9103,9133,9203,9323,9377,9587,9623,9689,9829,9857,10009,10039,10067,10093};
int ans[M], cnt;
/*
bool isprime(int val){
    for(int i = 2; i <= sqrt(val); ++ i){
        if(val%i == 0)
            return false;
    }
    return true;
}

bool ishappy(int val){
    set<int> st;
    st.insert(val);
    while(val != 1){
        int sum = 0, tmp = val;
        while(tmp){
            int tsum = tmp%10;
            tmp /= 10;
            sum += tsum*tsum;
        }
        val = sum;
        if(st.find(val) != st.end())
            return false;
        st.insert(val);
    }
    return true;
}

void init(){
    cnt = 0;
    ans[cnt ++] = 7;
    for(int i = 11; i <= 10100; ++ i){
        if(isprime(i) && ishappy(i)){
            ans[cnt ++] = i;
        }
    }
}
*/
set<int> dict;
void init(){
    for(int i = 0; i < 204; ++ i){
        dict.insert(nums[i]);
    }
}

int main(){

    init();
    int T;
    scanf("%d",&T);
    while(T --){
        int k, v;
        scanf("%d%d",&k,&v);
        printf("%d %d ",k,v);
        if(dict.find(v) == dict.end())
            puts("NO");
        else
            puts("YES");
    }
    return 0;
}
