#ifndef ZGBMAIN_H
#define ZGBMAIN_H

#define STATES \
_STATE(StateGame)\
_STATE(StateCover)\
_STATE(StateCoverWin)\
STATE_DEF_END

#define SPRITES \
_SPRITE_DMG_MIRROR(SpritePlayer, helo, V_MIRROR)\
_SPRITE_DMG(SpriteGancho, gancho)\
_SPRITE_DMG(SpriteRope, bolita)\
_SPRITE_DMG(SpritePollo, pollo)\
_SPRITE_DMG_MIRROR(SpriteTurbo, heloturbo, V_MIRROR)\
_SPRITE_DMG(SpriteMouth, monster)\
SPRITE_DEF_END

#include "ZGBMain_Init.h"

#endif