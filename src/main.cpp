/**
 * @file main.cpp
 * @author Autumn
 * @brief EntryPoint to the file.
 * @version 0.1
 * @date 2022-05-26 Initial Creation
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include "engine/App.hpp"

#include <iostream>

using namespace std;

int main()
{
    uge::App app{};

    app.run();

    return 0;
}