// MIT License
// Copyright (c) 2025 Abiza Chiheb
// See the LICENSE file for full details.
#include <iostream>
#include "clsDate.h"

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

    system("read -p '\nPress Enter to continue...'");
    
    return 0;
}