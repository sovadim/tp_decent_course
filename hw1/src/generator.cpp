#include <iostream>
#include <functional>
#include "generator.h"

namespace generator {

void generate_vars(std::istream &in, std::ostream &out, int num, int pparam) {
    std::string buff;
    while (std::getline(in, buff)) {
        out << buff << ": " << (std::hash<std::string>{}(buff) + pparam) % num + 1 << '\n';
    }
}

}  // namespace generator
