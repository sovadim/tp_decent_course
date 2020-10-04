#include <iostream>
#include <getopt.h>
#include <exception>
#include <filesystem>

int main(int argc, char **argv) {
    std::string help_message(
        "Usage: exam-var-generator --file <filename> --numbilets <N> --parameter <N>"
    );

    // Supported arguments
    std::string filename;
    int numbilets = 0;
    int parameter = 0;

    struct option opts[] = {
        {"file", required_argument, 0, 'f'},
        {"numbilets", required_argument, 0, 'n'},
        {"parameter", required_argument, 0, 'p'},
        {0,0,0,0},
    };
    int opchar = 0;
    int opindex = 0;

    try{
        while (-1 != (opchar = getopt_long(argc, argv, "f:n:p:", opts, &opindex))) {
            switch (opchar) {
            case 'f':
                filename = std::string(optarg);
                break;
            case 'n':
                numbilets = std::stoi(optarg);
                break;
            case 'p':
                parameter = std::stoi(optarg);
                break;
            case '?':
            default:
                break;
            }
        }
    } catch(std::exception &e) {
        std::cerr << "Error while parcing arguments: " << e.what() << std::endl;
        std::cerr << help_message << std::endl;
        std::exit(1);
    }

    std::cout << filename << '\n' << numbilets << '\n' << parameter << std::endl;

    return 0;
}
