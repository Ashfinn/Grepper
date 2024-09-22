# Grepper

[![progress-banner](https://backend.codecrafters.io/progress/shell/d2c1f252-4929-4703-a65a-863874d64979)](https://app.codecrafters.io/users/codecrafters-bot?r=2qF)

This repository contains an implementation of the `grep` tool built in C++ as part of the [Codecrafters "Build Your Own Grep" Challenge](https://app.codecrafters.io/courses/grep/overview). The project focuses on building a regular expression (Regex) engine from scratch, capable of searching through text with support for various Regex patterns and features.

<a id="readme-top"></a>

<!-- PROJECT SHIELDS -->
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]

<!-- ABOUT THE PROJECT -->
## About The Project

This project is an attempt to implement `grep`, a command-line utility for searching text using regular expressions, in C++. Along the way, we will dive into the workings of regex syntax, character classes, quantifiers, and more. By the end of the challenge, you will have a deeper understanding of how Regex works under the hood and be able to search and match patterns in text just like the real `grep` tool.

### Key Features:
* Matching literal characters
* Supporting various regex features such as character classes, anchors, quantifiers, and more
* Backreference support
* Regex alternation
* Wildcard matches

<p align="right">(<a href="#readme-top">back to top</a>)</p>

### Built With

The project is developed using:
* **C++**: The core language for implementing our custom `grep` functionality.
* **POSIX standard**: For guiding the implementation to match `grep`'s expected behavior.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

## Getting Started

To get started with building and running your own `grep` implementation, follow the instructions below.

### Prerequisites

Make sure you have the following installed:
* **GCC** or any other C++ compiler.
* **Make** (optional, for build automation).

### Repository Setup

1. Clone the repository:
   ```sh
   git clone https://github.com/your_username/grep_cpp.git
   ```

2. Navigate to the project directory:
   ```sh
   cd grep_cpp
   ```

3. Compile the project:
   ```sh
   g++ -o grep_cpp main.cpp
   ```

4. Run the program with a test file:
   ```sh
   ./grep_cpp "pattern" test_file.txt
   ```

<p align="right">(<a href="#readme-top">back to top</a>)</p>

## Features

### Match a Literal Character
The most basic functionality of `grep` is to search for a literal string within a text.

### Match Digits
Our implementation supports matching digits (e.g., `\d`).

### Match Alphanumeric Characters
Match alphanumeric characters using character classes.

### Positive Character Groups
We can match specific groups of characters like `[a-zA-Z]`.

### Negative Character Groups
Supports negation in character groups, like `[^a-z]`.

### Combining Character Classes
You can combine character classes and patterns for complex matching.

### Anchors (Start and End of String)
Use the `^` (start of string) and `$` (end of string) anchors to match text at the beginning or end of a string.

### Quantifiers
- `+`: Match one or more times
- `?`: Match zero or one times

### Wildcards
Supports `.` wildcard to match any single character.

### Alternation
Supports the `|` operator to match alternative patterns (e.g., `abc|xyz`).

### Backreferences
- **Single Backreference**: Allows matching repeated patterns.
- **Multiple Backreferences**: Matches more complex repeated groups.
- **Nested Backreferences**: Supports matching nested patterns using backreferences.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

## Roadmap

- [x] Match literal characters
- [x] Implement digit matching and alphanumeric character groups
- [x] Add support for character groups (positive and negative)
- [x] Implement anchors (start/end of string)
- [ ] Add quantifiers and alternation support
- [ ] Implement backreferences
- [ ] Optimize regex matching algorithm for performance

<p align="right">(<a href="#readme-top">back to top</a>)</p>

## Contributing

Contributions are welcome! If you'd like to contribute to the project, feel free to fork the repo and submit a pull request.

1. Fork the project.
2. Create your feature branch (`git checkout -b feature/newFeature`).
3. Commit your changes (`git commit -m 'Add some feature'`).
4. Push to the branch (`git push origin feature/newFeature`).
5. Open a pull request.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

## License

Distributed under the MIT License. See `LICENSE` for more information.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

## Contact

Your Name - [@Linkedin](https://linkedin.com/in/obidur-rahman-shawal) - obidur.shawal@gmail.com

Project Link: [https://github.com/Ashfinn/grepper](https://github.com/Ashfinn/grepper)

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- MARKDOWN LINKS & IMAGES -->
[forks-shield]: https://img.shields.io/github/forks/Ashfinn/Grepper.svg?style=for-the-badge
[forks-url]: https://github.com/Ashfinn/Grepper/network/members
[stars-shield]: https://img.shields.io/github/stars/Ashfinn/Grepper.svg?style=for-the-badge
[stars-url]: https://github.com/Ashfinn/Grepper/stargazers
[issues-shield]: https://img.shields.io/github/issues/Ashfinn/Grepper.svg?style=for-the-badge
[issues-url]: https://github.com/Ashfinn/Grepper/issues
