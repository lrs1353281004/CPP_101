#include <iostream>
#include <hash_map>
#include <string>
using namespace std;
using namespace __gnu_cxx;

int main()
{
    hash_map<int,string> mymap;
    mymap[1]="�ѹ�";
    mymap[2]="����";
    mymap[3]="��Ѷ";
    //��find��������λ���ݳ���λ�ã������ص�һ���������������ݳ���ʱ����������������λ�õĵ�����
    //���map��û��Ҫ���ҵ����ݣ������صĵ���������end�������صĵ�����
    if (mymap.find(1)!=mymap.end())
        {cout << mymap[1] <<endl;}
    return 0;
}
