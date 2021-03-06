/* File: projectile.cpp
   Author: Samy Lanka
   PennKey: lankas
   Description: Defines all functions associated with the Projectile Object
*/

#include "projectile.h"
#include <iostream>

using namespace std;

void Projectile::setAttack(int attack) {
	if (attack > 0) {
		m_attack = attack;
	}
}

void Projectile::setXPosition(int x) {
	if (x > 0) {
		m_x = x;	
	}
}

void Projectile::setYPosition(int y) {
	if (y > 0) {
		m_y = y;
	}
}

void Projectile::setDirection(direction dir) {
	m_dir = dir;
}

void Projectile::setDistance(int distance) {
	if (distance > 0) {
		m_distance = distance;
	}
}

void Projectile::setWidth(int width) {
	if (width > 0) {
		m_width = width;
	}
}

void Projectile::setLength(int length) {
	if (length > 0) {
		m_length = length;
	}
}

int Projectile::getAttack() {
	return m_attack;
}

int Projectile::getXPosition() {
	return m_x;
}

int Projectile::getYPosition() {
	return m_y;
}

int Projectile::move() {
	if (m_distance <= 0) {
		return ERROR;
	}
	switch(m_dir) {
		case N:
			m_y--;
			if (m_y < 0) {
				return ERROR;
			}
			break;
		case E:
			m_x++;
			if (m_x > m_width) {
				return ERROR;
			}
			break;
		case S:
			m_y++;
			if (m_y > m_length) {
				return ERROR;
			}
			break;
		case W:
			m_x--;
			if (m_x < 0) {
				return ERROR;
			}
			break;
	}
	m_distance--;
	return NO_ERROR;
}

void Projectile::printProjectile() {
	cout << "projectile: " << m_x << " " << m_y << endl;
}

Projectile::Projectile(int x, int y, int attack, direction dir, int distance,
					   int width, int length) {
	m_x = DEF_X_PROJ;
	m_y = DEF_Y_PROJ;
	m_attack = DEF_ATTACK;
	m_dir = DEF_DIR;
	m_distance = DEF_DIST;
	m_width = GAME_WIDTH;
	m_length = GAME_LENGTH;

	setWidth(width);
	setLength(length);
	setAttack(attack);
	setXPosition(x);
	setYPosition(y);
	setDirection(dir);
	setDistance(distance);
}
