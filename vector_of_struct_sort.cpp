#include <iostream>
#include <algorithm>
struct SINGLE_BEAM
{
	char pre_str[128];
	double pre_score;
	short replace_limit;
};
bool Beam_sort(SINGLE_BEAM a,SINGLE_BEAM b)
{
	return (a.pre_score>b.pre_score);
}
int main()
{
	SINGLE_BEAM beam[40]=
	{
		{"abc",0.3,3},
		{"ddg",0.5,5}
	};
	std::sort(beam,beam+2,Beam_sort);
	std::cout << beam[0].pre_str << ' ';
	return 0;
}
