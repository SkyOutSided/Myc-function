#include <iostream>
#include <vector>
using namespace std;

/*
    This function will return true or false,
    and if in the target array, every elements
    are qualified, it will return true , else,
    it will return false;

    这个函数会返回true或者false，如果在目标数组中，
    每个元素都是满足条件的，那么就返回true，否则返回
    false

    Parameter:
        1.an arrary
        2.your custom condition function

    参数：
        1.一个数组
        2.你的自定义条件函数

    Return value:bool

    返回值类型：布尔型
*/

template <typename T>
bool s_all_of(vector<T> v,bool(*cmp)(T)){
    int i;
    for(i = 0;i < v.size();i++){
        if(cmp(i) == false) return false;
    }
    return true;
}

bool cmp(int a){
    if(a % 2 == 0) return true;
    return false;
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    bool r = s_all_of(v,cmp);
    cout<<r;
}
