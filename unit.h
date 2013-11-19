#include<iostream>
#include<vector>
#include<list>

using namespace std;

class units
{
public:
        units();
        bool deleteNum(int num); 
        bool textEnableNum1();
        bool findNum(int num); 
        int findToPush(); 
        void clearEnableNum();
private:
        int enableNum;
        bool k[10];
};

class waitUnit
{
public:
        waitUnit(int row, int col, int num);
        int getRow();
        int getCol();
        int getNum();
private:
        int row;
        int col;
        int num;
};
