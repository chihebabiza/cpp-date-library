# Date Library in C++

## Overview
This C++ library provides a collection of functions for handling date-related operations, built using object-oriented programming (OOP) principles. It simplifies date manipulations such as formatting, calculations, and comparisons.

## Features
- Get the current date
- Format date in various styles
- Add or subtract days, months, or years
- Compare dates
- Calculate the difference between two dates
- Validate a given date
- Convert between different date formats ...etc

## Installation
To use this library in your C++ project:

1. Clone the repository or download the source files.
2. Include the necessary header file in your C++ program.
3. Compile and link the library with your project.

```cpp
#include "Date.h"
```

## Usage
Here is an example of how to use the library:

```cpp
#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
    clsDate Date1;
    Date1.Print();
    clsDate Date2("31/1/2022");
    Date2.Print();
    clsDate Date3(20, 12, 2022);
    Date3.Print();
    clsDate Date4(250, 2022);
    Date4.Print();
    Date1.IncreaseDateByOneMonth();
    Date1.Print();


    return 0;
}
```

## Requirements
- A C++ compiler (GCC, Clang, MSVC, etc.)

## Statistics
- **Total Functions:** 75
- **Total Lines of Code:** 1,104

## Contributing
Feel free to contribute by submitting pull requests, reporting issues, or suggesting new features.

## License
This project is licensed under the MIT License.

## Author
Developed by Chiheb Abiza

## Contact
For any inquiries, feel free to reach out:
- Email: chihababiza9@gmail.com
- GitHub: [chihebabiza](https://github.com/ChihebAbiza)
- LinkedIn: [@ChihebAbiza](https://www.linkedin.com/in/chihebabiza/)

## Open Source
This project is open source and welcomes contributions from the community!

