#pragma once

class Scene
{
private:
public:
    Scene(){

    };

    // Initialises the scene, called every time the scene is switched.
    virtual void init() = 0;
    // Updates the scene physics, runs once every frame
    virtual void update() = 0;
    // Draws all drawables in the scene, runs once every frame
    virtual void draw() = 0;
};
