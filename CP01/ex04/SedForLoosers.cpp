#include <iostream>
#include <fstream>
#include <string>

void trunkThisBitch(std::string &text, std::string str1, std::string str2)
{
    size_t index = 0;

    while (1)
    {
        index = text.find(str1);
        if (index == SIZE_MAX)
            break;
        text.erase(index, str1.length());
        text.insert(index, str2);
    }
    return;
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "       👾 Error 🖕, use correct usage:" << std::endl << std::endl;
        std::cerr << "[  ./SedForloosers   <filename>   <word_to_erase>   <word_to_insert>  ]" << std::endl << std::endl;
        return (1);
    }
    std::ifstream in_files(argv[1]);
    if (!in_files.is_open())
    {
        std::cerr << "       👾 Error 🖕, file [" << argv[1] << "] does not exist !" << std::endl;
        return (1);
    }
    std::string text, str1, str2, file_name;
    char c;

    str1 = argv[2];
    str2 = argv[3];
    file_name = argv[1];
    file_name += ".replace";
    std::ofstream out_file(file_name);
    while (in_files.get(c))
        text += c;

    trunkThisBitch(text, str1, str2);
    out_file << text;

    out_file.close();
    in_files.close();
    std::cout << "Success ! Word [" << str1 << "] has changed to ["
              << str2 << "] in file [" << file_name << "]" << std::endl;

    return (0);
}