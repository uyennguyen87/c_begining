/*
 * =====================================================================================
 *
 *       Filename:  ex19.h
 *
 *    Description:  Simple Object System
 *
 *        Version:  1.0
 *        Created:  10/24/2016 05:05:37 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  cue, 
 *   Organization:  MIT
 *
 * =====================================================================================
 */
#ifndef _ex19_h
#define _ex19_h

#include "object.h"

struct Monster {
    Object proto;
    int hit_points;
};

typedef struct Monster Monster;

int Monster_attack(void *self, int damage);
int Monster_int(void *self);

struct Room {
    Object proto;

    Monster *bad_guy;

    struct Room *north;
    struct Romm *south;
    struct Room *east;
    struct Room *west;
};

typedef struct Room Room;

void *Room_move(void *self, Direction direction);
int Room_attack(void *self, int damage);
int Room_init(void *self);

struct Map {
    Object proto;
    Room *start;
    Room *location;
};

typedef struct Map Map;

void *Map_move(void *self, Direction direction);
int Map_attack(void *self, int damage);
int Map_init(void *self);

#endif
