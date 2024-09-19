#include <iostream>
#include <string>
#include <algorithm>

bool match_pattern(const std::string& input_line, const std::string& pattern) {
    if (pattern.length() == 1) {
        return input_line.find(pattern) != std::string::npos;
    }
    else if (pattern == "\\d") {
        return input_line.find_first_of("0123456789") != std::string::npos;
    }
    else if (pattern == "\\w") {
        return std::find_if(input_line.begin(), input_line.end(), [](char c) {
            return std::isalnum(c); }) != input_line.end();
    }
    else if (pattern.front() == '[' && pattern.back() == ']') {
       
       bool negative = pattern[1] == '^';
       
        std::string chars_to_match = pattern.substr(negative ? 2 : 1, pattern.size() - negative ? 3 : 2);
    
        for (const auto &c : input_line) {
            if (chars_to_match.find(c) != std::string::npos && !negative) {
                // Positive match: character is found in the group
                return true;
            } else if (chars_to_match.find(c) == std::string::npos && negative) {
                // Negative match: character is not found in the group
                return true;
            }
        }

        return false;  // No match found in input
    }
    else {
        throw std::runtime_error("Unhandled pattern " + pattern);
    }
}

int main(int argc, char* argv[]) {
    // Flush after every std::cout / std::cerr
    std::cout << std::unitbuf;
    std::cerr << std::unitbuf;

    // You can use print statements as follows for debugging, they'll be visible when running tests.
    std::cout << "Logs from your program will appear here" << std::endl;

    if (argc != 3) {
        std::cerr << "Expected two arguments" << std::endl;
        return 1;
    }

    std::string flag = argv[1];
    std::string pattern = argv[2];

    if (flag != "-E") {
        std::cerr << "Expected first argument to be '-E'" << std::endl;
        return 1;
    }

    std::string input_line;
    std::getline(std::cin, input_line);
    try {
      if (match_pattern(input_line, pattern)) {
          
          return 0;
      } else {
          return 1;
      }
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
        return 1;
        }

}
