#pragma once
#include "engine/Core.h"
#include <Utils/Logger.h>

namespace uge
{
    class TestScene : public Scene
    {
    private:
        Logger logger{};

    public:
        TestScene(){

        };

        void init()
        {
            logger.log("Scene initialised!", Logger::Level::Notice);
        };
        void update(){
            // logger.log("Scene Updated!", Logger::Level::Info);
        };
        void draw()
        {
        }
    };
}