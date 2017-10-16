//
//  cards.hpp
//  pick-ghost
//
//  Created by Ju Yuanmao on 2017/7/15.
//  Copyright © 2017年 Ju Yuanmao. All rights reserved.
//

#ifndef cards_hpp
#define cards_hpp

#include <vector>
using std::vector;

class cards {
private:
    vector<char> v_;
public:
    cards();
    void reset();
    char pop();
    bool empty() const
    {   return v_.empty();   }
};

#endif /* cards_hpp */
