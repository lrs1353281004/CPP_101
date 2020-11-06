#include <vector>
#include <iostream>
struct SINGLE_BEAM
{
	std::string pre_str;
	double pre_score;
	short replace_limit;
};
int main()
{
	std::vector<SINGLE_BEAM> beam;
	SINGLE_BEAM sb;
	std::string a="abc";
	sb.pre_str=a;
	sb.pre_score=0.1;
	sb.replace_limit=3;
	beam.push_back(sb);
	std::cout << beam[0].pre_str[1] << ' ';
	return 0;
}
