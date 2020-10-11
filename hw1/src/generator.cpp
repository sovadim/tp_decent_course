#include <iostream>
#include <exception>
#include "generator.h"
#include "string_hash-inl.h"

namespace generator {

void generate_vars(std::istream &in, std::ostream &out, int num, int pparam) {
    std::string buff;
    while (std::getline(in, buff)) {
        out << buff << " " << num << " " << pparam << '\n';
    }
}

}  // namespace generator
