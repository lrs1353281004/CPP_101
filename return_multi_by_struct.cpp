#include <iostream>
#include <string>

struct SINGLE_BEAM
{
    std::string pre_str;
    double pre_score;
};

class StrCorrect
{
public:
    SINGLE_BEAM* Beam_Search()
    {
        static SINGLE_BEAM beam[5]=
    	{
			{"```",0.0},
			{"abc",0.1}

		};
        return beam;
    }
};

int main()
{
    StrCorrect strCor;
    SINGLE_BEAM *sBeam= strCor.Beam_Search();
    std::string sResult1=(*(sBeam+1)).pre_str;
    std::string sResult2=(*(sBeam)).pre_str;
    std::cout << sResult1 << std::endl;
    std::cout << sResult2 << std::endl;
    return 0;
}

