//
//  cards.cpp
//  pick-ghost
//
//  Created by Ju Yuanmao on 2017/7/15.
//  Copyright © 2017年 Ju Yuanmao. All rights reserved.
//

#include "cards.hpp"
#include "randi.hpp"

cards::cards() {
    v_.reserve(60);
}

void cards::reset() {
    v_.clear();
    for (char i = 1; i <= 13; i++) {
        for (int j = 0; j < 4; j++) {
            v_.push_back(i);
        }
    }
    v_.push_back(14);
}

char cards::pop () {
    auto it = v_.begin() + randi(0, int(v_.size()));
    char ans = *it;
    *it = *v_.rbegin();
    v_.pop_back();
    return ans;
}
