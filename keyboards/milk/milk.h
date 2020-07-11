#pragma once

#include "quantum.h"

#define LAYOUT_horizontal( \
	K00, \
	K01 \
) { \
	{ K01, K01 }, \
	{ K00, K00 } \
}
