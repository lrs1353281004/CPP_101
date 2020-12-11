#include <vector>
#include <iostream>
#include <string>
struct match_list
{
    std::string chunk;
    int32_t start;
    int32_t end;
};
void clean_match_list(std::vector<match_list>& or_match_list)
{
    std::vector<match_list>::iterator itr=or_match_list.begin();
    while(itr!=or_match_list.end())
    {
        if ((*itr).end==7)
        {
            itr=or_match_list.erase(itr);
        }
        else
        {
            ++itr;
        }
    }
}
int main()
{
    std::vector<match_list> or_match_list;
    or_match_list.push_back({"ab",1,3});
    or_match_list.push_back({"sc",2,3});
    or_match_list.push_back({"ac",5,7});
    or_match_list.push_back({"sc",6,8});
    std::cout << or_match_list.size() << std::endl;
    clean_match_list(or_match_list);
    std::cout << or_match_list.size() << std::endl;

    return 0;

}
