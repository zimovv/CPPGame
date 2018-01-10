//
//  main.cpp
//  Game2048
//
//  Created by 紫陌vv on 18/1/10.
//  Copyright © 2018年 紫陌vv. All rights reserved.
//

#include <iostream>
using namespace std;

int const COL = 4;
int const ROW = 4;
int gameUI[ROW][COL] = {0};

struct Cell
{
    int m_row;
    int m_col;
    int m_value;
};

void display()
{
    
    for(int irow=0; irow<ROW; irow++)
    {
        cout << "-----------------------\n";
        for(int icol=irow; icol<COL; icol++)
        {
            if(0==gameUI[irow][icol])
            {
                cout << "|\t \t";
            }
            else
            {
                cout << "|\t" << gameUI[irow][icol] << "\t";
            }
        }
        cout << "|\n";
    }
    cout << "-----------------------\n";
}

int generateRandomValue()
{
    int l_tmp = rand()%3;
    if(0==l_tmp)
    {
        return 4;
    }
    else
    {
        return 2;
    }
}

Cell chooseRandomCell()
{
    Cell l_cell;
    l_cell.m_col = rand() % COL;
    l_cell.m_row = rand() % ROW;
    return l_cell;
}

void interface(Direction p_direction)
{
    
}

int main(int argc, const char * argv[]) {
    Cell l_randomCell = chooseRandomCell();
    l_randomCell.m_value = generateRandomValue();
    gameUI[l_randomCell.m_row][l_randomCell.m_col] = l_randomCell.m_value;
    display();
    
    return 0;
}
