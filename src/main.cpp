/**
 * @file main.cpp
 * @author Autumn
 * @brief Entrypoint to the application.
 * @version 0.1
 * @date 2022-05-26 Initial Creation
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "engine/Core.h"
#include "TestScene.h"
#include <iostream>

using namespace std;

int main()
{
    uge::TestScene *scene = new uge::TestScene();
    uge::App app{};

    app.addScene(scene, "firstScene");
    app.switchScene("firstScene");
    app.run();

    return 0;
}