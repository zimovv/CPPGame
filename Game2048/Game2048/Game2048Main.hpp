//
//  Game2048Main.hpp
//  Game2048
//
//  Created by 紫陌vv on 18/1/10.
//  Copyright © 2018年 紫陌vv. All rights reserved.
//

#ifndef Game2048Main_hpp
#define Game2048Main_hpp

#include <stdio.h>

enum class Direction
{
    UP,
    DOWN,
    LEFT,
    RIGHT
};

class Game2048
{
public:
    void interface(Direction p_direction);
};

#endif /* Game2048Main_hpp */
