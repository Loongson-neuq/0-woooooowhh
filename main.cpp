#include ".assignment/test.h"

// 比较三个数的大小
void CompareThreeNumbers(int a, int b, int c, Result &result)
{
    // 在这里完成你的代码
    int d;

    if(a>b){
        d = a;
        a = b;
        b = d;
    }

    if(a>c){
        d = a;
        a = c;
        c = d;
    }

    if(b>c){
        d = b;
        b = c;
        c = d;
    }

    result.min = a;
    result.mid = b;
    result.max = c;
}
