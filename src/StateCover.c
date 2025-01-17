#include "Banks/SetAutoBank.h"

#include "Keys.h"
#include "ZGBMain.h"
#include "Scroll.h"
#include "Print.h"
#include "SGB.h"

IMPORT_TILES(font);

IMPORT_MAP(cover);
IMPORT_TILES(font);
IMPORT_MAP(sgb_border);

extern UINT8 current_level;

void START(void) {
	LOAD_SGB_BORDER(sgb_border);
	InitScroll(BANK(cover), &cover, 0, 0);

	INIT_FONT(font, PRINT_BKG);
	PRINT(0, 14, "EMILIO J. DOMINGUEZ");
	PRINT(7, 15, "ZALO");
	PRINT(4, 17, "ZGBJAM2 2019");

	current_level = 0;
}

void UPDATE(void) {
	if(keys != 0) {
		SetState(StateCoverWin);
	}
}