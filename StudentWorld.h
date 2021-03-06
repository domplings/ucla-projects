#ifndef STUDENTWORLD_H_
#define STUDENTWORLD_H_

#include "GameWorld.h"
#include "Actor.h"
#include <string>
#include <vector>
using namespace std;


// Students:  Add code to this file, StudentWorld.cpp, Actor.h, and Actor.cpp

class StudentWorld : public GameWorld
{
public:
    StudentWorld(std::string assetPath);
    virtual ~StudentWorld() {cleanUp();}
    virtual int init();
    virtual int move();
    virtual void cleanUp();

private:
    vector<Actor*> m_actors;
    Socrates* player;
    int m_level;
};

#endif // STUDENTWORLD_H_
