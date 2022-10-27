#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <list>
#include <iterator>

class IOperation;

int main(void)
{

    int a[] = {6 , 7, 42, 39, 24, 77, 13, 14, 11};

    std::vector<int>    test1(a, a + sizeof(a) / sizeof(int));
    std::vector<int>    alloha(test1);

    std::map<std::string, int> map;

    map["Patate"] = 5;
    map["Patate2"] = 6;
    map["Leo"] = 7 - 5;

    std::vector<int>::iterator  it;
    std::vector<int>::iterator  ite = alloha.end();;
    for (it = alloha.begin(); it != alloha.end(); ++it)
    {
        if (it == alloha.begin() + (alloha.size() / 2))
        {
            alloha.insert(it + 1, 3, 811);
            break;
        }
        //std::cout << *it << std::endl;
    }
 
    for (it = alloha.begin(); it != alloha.end(); ++it)
    {
        std::cout << *it << std::endl;
    }
 
    std::map<std::string, int>::iterator    itm;

    for (itm = map.begin(); itm != map.end(); itm++)
    {
        std::cout << "Key: " << itm->first << "   Results : " << itm->second << std::endl;
    }
    



    return (0);
}