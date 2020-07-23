#pragma once

#include "quantum.h"

/* LAYOUT_horizontal
 * ┌───┐
 * │USB│
 * ├───┼───┬───┬───┐
 * │K00│K01│K02│K03│
 * ├───┼───┼───┼───┤
 * │K10│K11│K12│K13│
 * ├───┼───┼───┼───┤
 * │K20│K21│K22│K23│
 * └───┴───┴───┴───┘
 */
#define LAYOUT_horizontal( \
	K00, K01, K02, K03, \
	K10, K11, K12, K13, \
	K20, K21, K22, K23  \
) { \
	{ K00, K01, K02, K03 }, \
	{ K10, K11, K12, K13 }, \
	{ K20, K21, K22, K23 }  \
}
