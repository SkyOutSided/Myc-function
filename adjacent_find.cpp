#include <iostream>
using namespace std;

/*
    This function can find two adjacent same elements
    in a scope you designative , you can also use your
    custom rule.

    这个函数可以在一个你指定的范围内寻找两个相邻的相同元素，
    你也可以用你自定义的规则。

    Function's parameter:
        1.an array
        2.an pointer which point the start of range.
        3.an pointer which point the end of range(It can't point out of range of the array).
    
    函数参数：
        1.一个数组
        2.一个指针，指向范围开始处。
        3.一个指针，指向范围结束处。

    Type of return value: a pointer of the first two elements which adjacent and same.

    函数返回值类型：一个指向第一个相邻相同元素的指针

    The code in the main function is an example.

    主函数中的代码是一个例子。
*/
template <typename T>
T* s1_adjacent_find(T a[], T *first, T *second){
    T *i;
    for(i = first;i < second;i++){
        if(*i == *(i+1)){
            return i;
        }
    }
    return second+1;
}

int main(){
    int a[3] = {0,1,1};
    int *first = &a[0],*second = &a[2];
    int* result = s1_adjacent_find(a,first,second);
    cout<<*result;

    return 0;
}