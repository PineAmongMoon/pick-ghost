//
//  main.cpp
//  pick-ghost
//
//  Created by Ju Yuanmao on 2017/7/15.
//  Copyleft
//

#include <iostream>
#include <fstream>
#include <algorithm>
#include "randi.hpp"
#include "cards.hpp"
#include "player.hpp"

using std::cin;
using std::cout;
using std::endl;

int main(int argc, const char * argv[]) {
    std::ofstream out;
    switch (argc) {
        case 2:
            out.open(argv[1]);
        case 1:
            break;
        default:
            cout << "usage: ./pick-ghost.out [output_film]\n";
            exit(1);
            break;
    }
    cards c;
    int t;
    unsigned long long n;
    cout << "How many people will join the game?\n";
    cin >> t;
    cout << "How many times will the game be played?\n";
    cin >> n;
    while (n--) {
        c.reset();
        player *now = new player('a');
        for (char i='b'; i<'a'+t; i++) {
            now->insert(i);
            now = now->next();
        }
        now = now->next();
        
        while (!c.empty()) {
            now->push(c.pop());
            now = now->next();
        }
        for (int i=0; i<t; i++) {
            if (now->last()->empty()) {
                now->last()->erase();
            }
            now = now->next();
        }
        int m = randi(0, t);
        while (m--) {
            now = now -> next();
        }
        while (now->next() != now && now->last() != now) {
            now->push(now->next()->pop());
            if (now->next()->empty()) {
                now->next()->erase();
            }
            if (now->empty()) {
                now = now->next();
                now->last()->erase();
                continue;
            }
            now = now->next();
        }
        
        if (out.is_open()) {
            out << now->name() << endl;
        } else {
            cout << now->name() << endl;
        }
        
        delete now;
    }
    
    if (out.is_open()) {
        out.close();
    }
    
    return 0;
}
