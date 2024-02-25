#include "Banks/SetAutoBank.h"

#include "SpriteManager.h"
#include "Keys.h"

extern Sprite* sprite_chopter;
Sprite* sprite_turbo = 0;

UINT8 anim_turbo[] = {2, 0, 1};

void START(void) {
	sprite_turbo = THIS;
	SetSpriteAnim(THIS, anim_turbo, 15);
}

void UPDATE(void) {
	THIS->y = sprite_chopter->y;
	if(sprite_chopter->mirror == V_MIRROR) {
		THIS->x = sprite_chopter->x + 16;
		THIS->mirror = V_MIRROR;
	} else {
		THIS->x = sprite_chopter->x - 8;
		THIS->mirror = NO_MIRROR;
	}
}

void DESTROY(void) {
	sprite_turbo = 0;
}