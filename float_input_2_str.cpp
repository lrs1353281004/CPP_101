#include<string>
#include<iostream>
static std::string GetInput_orStr(unsigned short* p_pPosition, int p_nSize)
{
    std::string res;
    char cur_c[3];
    for (int i=0;i<p_nSize;i++)
    {
        sprintf(cur_c, "%3d", p_pPosition[i]); //float 2 str
        std::string cur=cur_c;
        res +=cur; //concat str
    }

    return res;
}
int main()
{

    unsigned short pos_list[128]={337,365,50,433,846,537,209,399,655,365,974,537,656,537,750,365,815,537};
    std::string res=GetInput_orStr(pos_list,4);
    std::cout << res<< std::endl;
    std::cout << res.size()<< std::endl;
    std::string str2;
    bool flag=res.substr(0,res.size()-5)==str2;  //comare str
    std::cout << flag << std::endl;
    return 0;
}
