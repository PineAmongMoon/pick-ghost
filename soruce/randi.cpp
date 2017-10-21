//
//  randi.cpp
//  pick-ghost
//
//  Created by Ju Yuanmao on 2017/7/16.
//  Copyleft
//

#include <cstdlib>
#include <ctime>
#include "randi.hpp"

int randi(int begin, int end) {
    static bool sflg = false;
    if (!sflg) {
        srand((int)time(nullptr));
        sflg = true;
    }
    return begin+rand()%(end-begin);
}
