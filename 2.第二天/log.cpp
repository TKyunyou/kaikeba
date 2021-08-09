/*************************************************************************
	> File Name: log.cpp
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <vector>
using namespace std;

#ifdef DEBUG

#define LOG(frm, args...) { \
    printf("\033[0;33m[%s : %s : %d] \033[0m", __FILE__, __func__, __LINE__); \
    printf(frm, ##args); \
    printf("\n"); \
}

#else 

#define LOG(frm, args...)

#endif

void test() {
    LOG("hello world");
    int a = 1, b = 2;
    printf("%d %d\n", a, b);
    return ;
}

#define CAT(a, b) a##_##b
#define N 100
#undef N
#define N 99

int main() {
    LOG("N = %d", N);
    int kaikeba_var = 9973;
    CAT(kaikeba, var) = 10000;
    LOG("kaikeba_var = %d", kaikeba_var);
    LOG("hello world");
    test();
    return 0;
}
