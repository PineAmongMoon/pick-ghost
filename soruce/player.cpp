//
//  player.cpp
//  pick-ghost
//
//  Created by Ju Yuanmao on 2017/7/15.
//  Copyright © 2017年 Ju Yuanmao. All rights reserved.
//

#include "player.hpp"
#include <iostream>
#include "randi.hpp"

using std::cout;

player::player(char name): name_(name), last_(this), next_(this) {};

void player::insert(char name) {
    player *p = new player(name);
    p->next_ = this->next_;
    this->next_->last_ = p;
    this->next_ = p;
    p->last_ = this;
}

void player::erase() {
    this->last_->next_ = this->next_;
    this->next_->last_ = this->last_;
    delete this;
}

void player::reset() {
    cards_.clear();
}

void player::push (char card) {
    if (cards_.find(card) == cards_.end()) {
        cards_.insert(card);
    } else {
        cards_.erase(card);
    }
}

char player::pop() {
    if (cards_.empty()) {
        cout << "The set named 'cards' of calss 'player' has been empty!\b\n";
        exit(1);
    }
    auto it = cards_.begin();
    int n = randi(0, int(cards_.size()));
    for (int i = 0; i < n; i++) {
        it++;
    }
    char ans = *it;
    cards_.erase(it);
    return ans;
}
