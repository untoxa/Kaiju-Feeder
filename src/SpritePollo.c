#include "Banks/SetAutoBank.h"

#include "SpriteManager.h"
#include "Scroll.h"

UINT8 anim_pollo_dying[] = {6, 1, 2, 3, 4, 5, 5};
extern Sprite* sprite_gancho;

typedef struct {
	INT8 vy;
} CUSTOM_DATA;

void START(void) {
	CUSTOM_DATA* data = (CUSTOM_DATA*)THIS->custom_data;
	UINT8 coll_tile;

	if(sprite_gancho && sprite_gancho->anim_frame != 0) {
		SpriteManagerRemove(THIS_IDX);
		return;
	}

	data->vy = 0;
	coll_tile = GetScrollTile(THIS->x >> 3, (THIS->y + 16) >> 3);
	if(!scroll_collisions[coll_tile]) {
		data->vy = 1;
	}
}

void UPDATE(void) {
	CUSTOM_DATA* data = (CUSTOM_DATA*)THIS->custom_data;
	UINT8 tile_coll;

	if(THIS->anim_data) {
		if(THIS->anim_frame == 5) {
			SpriteManagerRemove(THIS_IDX);
		}
	} else {
		if(data->vy) {
			if(tile_coll = TranslateSprite(THIS, 0, data->vy)) {
				SetSpriteAnim(THIS, anim_pollo_dying, 15);
			}
		}
	}
}

void DESTROY(void) {
}