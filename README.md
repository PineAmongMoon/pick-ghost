# pick-ghost

**English**

***

## What is pick ghost?

Pick Ghost is a poker game. About 4 players will join the game. The game uses a total of 53 cards, including ♥️A-K, ♦️A-K, ♣️A-K, ♠️A-K and the only one "ghost card", Joker. After shuffling, everyone will obtain playing cards by turn until the cards are over. Attention! Whenever you have two cards with the same digit, you need to throw away them. After the cards are over, each player needs to obtain a card form next player randomly by turn. When you don't have any card, you will win. However, finally, there must be only one player holding the "ghost card" and not throwing it. This player will lose.

## What does the program do?

The program is through the simulation to check whether the game is fair when the number of people joining the game is different.

## Other

The source code is in `./soruce`. The setting of poker cards is in the member function `cards::reset()` in  `./soruce/cards.cpp`. You can change the setting to check other circumstances. 

***

**中文**

***

## 什么是抽鬼牌？

抽鬼牌是一款扑克游戏。游戏大约有四个人参加。游戏所用的牌共计53张，包括♥️A-K、♦️A-K，♣️A-K，♠️A-K和唯一一张“鬼牌”。洗牌后，按照顺序发牌。注意，当你有两张点数相同的牌时，你需要丢掉它们。 当你没有任何牌时，你就赢了。但是最后“鬼牌”一定在一名玩家的手里，并且这名玩家不可能扔掉所有的牌。故这名玩家输了。

## 这个程序做什么？

该程序通过模拟检验在加入游戏人数不同时游戏是否公平。

## 其他

源代码在`./soruce`中。 扑克牌的设置是在`./soruce/cards.cpp`中的成员函数 `cards::reset()`中。 您可以更改设置以检查其他情况。

