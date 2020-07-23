#include <iostream>
#include <hash_map>
#include <string>
using namespace std;
using namespace __gnu_cxx;

int main()
{
    hash_map<int,string> mymap;
    mymap[1]="搜狗";
    mymap[2]="阿里";
    mymap[3]="腾讯";
    //用find函数来定位数据出现位置，它返回的一个迭代器，当数据出现时，它返回数据所在位置的迭代器
    //如果map中没有要查找的数据，它返回的迭代器等于end函数返回的迭代器
    if (mymap.find(1)!=mymap.end())
        {cout << mymap[1] <<endl;}
    return 0;
}
