/**
 * @file Ship.hpp
 * @author Ian Codding II, Balin Becker, Ryan Flores
 * @brief 
 * @version 0.1
 * @date 2025-04-23
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#ifndef SHIP_HPP
#define SHIP_HPP

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

struct Ship {
    Ship() {
        mSymbol = 's';
        mName = "Ship";
        mLength = 5;
    }
    Ship(char symbol, string name, int length) {
        mSymbol = symbol;
        mName = name;
        mLength = length;
    }
    
    char mSymbol;
    string mName;
    int mLength;
};

struct Stats {
    Stats() : mTotalHits(0), mTotalMisses(0), mTotalShots(0), mHMRatio(0.0) {}
    Stats(vector<int> hitsVec, vector<int> missesVec) {
        mTotalHitsVec = hitsVec;
        mTotalMissesVec = missesVec;
        recalculate();
    }

    void recalculate() {
        mTotalHits = mTotalHitsVec.size();
        mTotalMisses = mTotalMissesVec.size();
        mTotalShots = mTotalHits + mTotalMisses;
        mHMRatio = (mTotalShots > 0) ? static_cast<double>(mTotalHits) / mTotalShots * 100 : 0.0;
    }
    int mTotalHits;
    int mTotalMisses;
    int mTotalShots;
    double mHMRatio;
    vector<int> mTotalHitsVec;
    vector<int> mTotalMissesVec;
};

#endif