#pragma once

#include "quantum.h"

#define ___ KC_NO

#define LAYOUT( \
	K00, K01, K02, K03, K04, K05, K06, \
	K10, K11, K12, K13, K14,      K16, \
	K20, K21, K22, K23,      K25, K26, \
	     K31, K32,           K35, K36, \
	                    K44,      K46  \
) { \
	{ K00,   K01,   K02,   K03,   K04,   K05,   K06 }, \
	{ K10,   K11,   K12,   K13,   K14,   KC_NO, K16 }, \
	{ K20,   K21,   K22,   K23,   KC_NO, K25,   K26 }, \
	{ KC_NO, K31,   K32,   KC_NO, KC_NO, K35,   K36 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, K44,   KC_NO, K46 }  \
}

