#include <iostream>
//函数参数 指针传递 字符串
char get_score(char* new_str)
{
	std::cout << new_str[1] << ' ';
	return new_str[0];
}
int main()
{
    char strs[10]="abc";
    char s;
    s=get_score(strs);
    std::cout << s << ' ';
    return 0;
}
