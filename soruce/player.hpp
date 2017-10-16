//
//  player.hpp
//  pick-ghost
//
//  Created by Ju Yuanmao on 2017/7/15.
//  Copyright © 2017年 Ju Yuanmao. All rights reserved.
//

#ifndef player_hpp
#define player_hpp

#include <set>
using std::set;

class player {
private:
    set<char> cards_;
    char name_;
    player *last_;
    player *next_;
    
public:
    player(char);
    
    char name() const
    {   return name_;   }
    player* last() const
    {   return last_;   }
    player* next() const
    {   return next_;   }
    
    void insert(char);
    
    void erase();
    
    void reset();
    void push(char);
    char pop();
    
    bool empty() const
    {   return cards_.empty();  }
};

#endif /* player_hpp */
