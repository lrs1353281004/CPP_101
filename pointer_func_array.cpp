#include <iostream>
//函数参数 指针传递 数组
double get_score(unsigned short* position)
{
	std::cout << position[1] << ' ';
	return position[0]+0.1;
}
int main()
{
    unsigned short pos_list[6];
    pos_list[0]=612;
    pos_list[1]=345;
    double s;
    s=get_score(&pos_list[0]);
    std::cout << s << ' ';
    return 0;
}
