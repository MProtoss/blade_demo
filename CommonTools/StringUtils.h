#ifndef STRING_UTILS_H
#define STRING_UTILS_H
#include <string>
#include <vector>
namespace common_tools
{
class StringUtils
{
public:
    static void string_split(const std::string &s, std::vector<std::string> &v, const std::string &c);
};
}
#endif
