#include"unit.h"
#include<iostream>
#include<windows.h>
#include<vector>
#include<list>
using namespace std;


class sudoku
{
public:
        sudoku();
		void gotoxy(int x, int y);
		void print_main();
        bool setNum(int row, int col, int num);
	    bool disEnable(int row, int col, int num);
        void textCount();
        void testRowCount(int num, int row);
        void testColCount(int num, int col);
        void testAreaCount(int num, int area);
        void print();
        void setAdd();
        bool trySetAdd();
        bool isProgramOver();
        bool trial( int id );
private:
        int final[9][9];
        int rowCount[10][9];
        int colCount[10][9];
        int areaCount[10][9];
        units u[9][9];
        list<waitUnit> add;
};

