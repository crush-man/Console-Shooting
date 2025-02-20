#pragma once

struct Bullet
{
	bool isAlive;
	int x;
	int y;
	char body;
	WORD fColor;
	WORD bColor;
};

void BulletInit();
void BulletUpdate();
void BulletDraw();
void CreatBullet(int x, int y);

void BulletMove();
void BulletClipping();

extern Bullet bullet[D_BULLET_MAX];