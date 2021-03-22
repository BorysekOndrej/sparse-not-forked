#pragma once

#include <unordered_map>
#include <string>


namespace sparse::common
{
    void print_program_args(int argc_, char* argv_[]);
    std::string load_file_into_string(const std::string & filename);

} // namespace sparse::common
void print_map(std::unordered_map<std::string,std::string> M);