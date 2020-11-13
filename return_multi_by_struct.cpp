#include <iostream>
#include <string>

struct SINGLE_BEAM
{
    std::string pre_str;
    double pre_score;
};

struct RES
{
    SINGLE_BEAM *p;
    int ans;
};
class StrCorrect
{
public:
    RES Beam_Search()
    {
        static SINGLE_BEAM beam[5]=
    	{
			{"```",0.0},
			{"abc",0.1}

		};
	RES res={beam,2};
        return res;
    }
};

int main()
{
    StrCorrect strCor;
    RES res=strCor.Beam_Search();
    std::string sResult=(*(res.p)).pre_str;
    int score=res.ans;
    std::cout << sResult << std::endl;
    std::cout << score << std::endl;
    return 0;
}
