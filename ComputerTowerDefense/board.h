/* File: board.h
   Author: Samy Lanka
   PennKey: lankas
   Description: This file contains the definition
   of all the functions and member variables associated with
   the Board object
*/
#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include "projectile.h"
#include "bug.h"
#include "tower.h"

using namespace std;

#define START_MONEY 5
#define PATH_LENGTH 5
#define NO_OBJECT 0
#define TOWER 1
#define PROJECTILE 2
#define BUG 3

class Board {
  private:
    vector<Tower*> m_towers; 
    vector< vector< int > > m_towerPlacement;
    vector<int> m_pathXCoords;
    vector<int> m_pathYCoords;
    vector<Bug*> m_bugPlacement;
    vector<Projectile*> m_projectiles;

    int m_money;
    void removeBug(Bug *b);
    void addBug();
    Bug *findBug(int x, int y);
    void removeProjectile(Projectile *p);

  public:
    void printBugs();
    void printTowerLocations();

    void addPath();
    bool containsPath(int x, int y);

    
    int moveBugs();

    void moveProjectile(Projectile *p);
    void moveProjectiles();
    void attackBug(Bug *bug, int attack);
    void attack();
    
    // change to buy each specific tower and spell
    vector<Tower*> getTowers();
    Tower *buyTower();
    void placeTower(Tower *t, int x, int y);
    void buySpell();
    void playSpell();

    Board();
};   

#endif
