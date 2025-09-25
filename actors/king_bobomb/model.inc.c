Lights1 king_bobomb_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Gfx king_bobomb_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 king_bobomb_rgba16[] = {
	#include "actors/king_bobomb/king_bobomb.rgba16.inc.c"
};

Gfx king_bobomb_body_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 king_bobomb_body_rgba16[] = {
	#include "actors/king_bobomb/king_bobomb_body.rgba16.inc.c"
};

Vtx king_bobomb_kbob_arm_l_mesh_layer_4_vtx_0[5] = {
	{{{110, 0, -11}, 0, {148, 1336}, {0xCA, 0x01, 0x8D, 0xFF}}},
	{{{110, -11, 0}, 0, {148, 1500}, {0xCA, 0x8D, 0x01, 0xFF}}},
	{{{104, 0, 0}, 0, {106, 1336}, {0x81, 0x03, 0x00, 0xFF}}},
	{{{110, 0, 11}, 0, {148, 1336}, {0xCA, 0x03, 0x73, 0xFF}}},
	{{{110, 10, 0}, 0, {148, 1192}, {0xCC, 0x74, 0xFF, 0xFF}}},
};

Gfx king_bobomb_kbob_arm_l_mesh_layer_4_tri_0[] = {
	gsSPVertex(king_bobomb_kbob_arm_l_mesh_layer_4_vtx_0 + 0, 5, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
	gsSP2Triangles(2, 3, 4, 0, 0, 2, 4, 0),
	gsSPEndDisplayList(),
};

Vtx king_bobomb_kbob_hand_l_skinned_mesh_layer_4_vtx_0[4] = {
	{{{110, 0, -11}, 0, {148, 1336}, {0xCA, 0x01, 0x8D, 0xFF}}},
	{{{110, -11, 0}, 0, {148, 1500}, {0xCA, 0x8D, 0x01, 0xFF}}},
	{{{110, 0, 11}, 0, {148, 1336}, {0xCA, 0x03, 0x73, 0xFF}}},
	{{{110, 10, 0}, 0, {148, 1192}, {0xCC, 0x74, 0xFF, 0xFF}}},
};

Gfx king_bobomb_kbob_hand_l_skinned_mesh_layer_4_tri_0[] = {
	gsSPVertex(king_bobomb_kbob_hand_l_skinned_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx king_bobomb_kbob_hand_l_mesh_layer_4_vtx_0[4] = {
	{{{1, 0, -11}, 0, {362, 1336}, {0x00, 0x01, 0x81, 0xFF}}},
	{{{1, -11, 0}, 0, {362, 1500}, {0x00, 0x81, 0x01, 0xFF}}},
	{{{1, 0, 11}, 0, {362, 1336}, {0x00, 0x04, 0x7F, 0xFF}}},
	{{{1, 10, 0}, 0, {362, 1192}, {0x00, 0x7F, 0xFF, 0xFF}}},
};

Gfx king_bobomb_kbob_hand_l_mesh_layer_4_tri_0[] = {
	gsSPVertex(king_bobomb_kbob_hand_l_mesh_layer_4_vtx_0 + 0, 4, 4),
	gsSP2Triangles(4, 5, 0, 0, 1, 0, 5, 0),
	gsSP2Triangles(1, 5, 2, 0, 6, 2, 5, 0),
	gsSP2Triangles(2, 6, 7, 0, 7, 3, 2, 0),
	gsSP2Triangles(3, 7, 0, 0, 4, 0, 7, 0),
	gsSPEndDisplayList(),
};

Vtx king_bobomb_kbob_hand_l_mesh_layer_4_vtx_1[42] = {
	{{{-7, -23, 0}, 0, {374, 250}, {0xBD, 0x94, 0x05, 0xFF}}},
	{{{-7, 0, 27}, 0, {374, 4}, {0xBE, 0x00, 0x6C, 0xFF}}},
	{{{-7, -5, -25}, 0, {578, 250}, {0xBC, 0xF2, 0x96, 0xFF}}},
	{{{-7, 23, 0}, 0, {578, 4}, {0xBF, 0x6D, 0xF9, 0xFF}}},
	{{{12, -4, -23}, 0, {352, 384}, {0xC0, 0x01, 0x92, 0xFF}}},
	{{{13, 19, 0}, 0, {352, 322}, {0xEA, 0x7D, 0xFB, 0xFF}}},
	{{{39, 14, -36}, 0, {414, 348}, {0xDD, 0x50, 0xA4, 0xFF}}},
	{{{63, 27, 0}, 0, {466, 322}, {0x00, 0x7F, 0xFF, 0xFF}}},
	{{{45, 16, 34}, 0, {414, 348}, {0xE3, 0x54, 0x5B, 0xFF}}},
	{{{12, 0, 24}, 0, {352, 384}, {0xC6, 0x1E, 0x6D, 0xFF}}},
	{{{54, -23, 45}, 0, {414, 418}, {0x0D, 0x14, 0x7D, 0xFF}}},
	{{{20, -21, 40}, 0, {352, 418}, {0xAA, 0xFD, 0x5D, 0xFF}}},
	{{{13, -19, 0}, 0, {352, 418}, {0xB9, 0x96, 0x02, 0xFF}}},
	{{{43, -49, 36}, 0, {394, 496}, {0xCE, 0x8E, 0x18, 0xFF}}},
	{{{32, -41, 16}, 0, {362, 476}, {0xBC, 0x95, 0x0C, 0xFF}}},
	{{{31, -44, -22}, 0, {362, 476}, {0xCB, 0x96, 0xD3, 0xFF}}},
	{{{46, -19, -45}, 0, {414, 418}, {0xE4, 0xE9, 0x86, 0xFF}}},
	{{{93, -4, -40}, 0, {516, 384}, {0x4C, 0x10, 0x9B, 0xFF}}},
	{{{88, 18, -31}, 0, {496, 340}, {0x36, 0x59, 0xB7, 0xFF}}},
	{{{99, 18, 0}, 0, {526, 332}, {0x5B, 0x59, 0x03, 0xFF}}},
	{{{85, 18, 33}, 0, {496, 340}, {0x31, 0x5C, 0x48, 0xFF}}},
	{{{90, 0, 41}, 0, {516, 384}, {0x47, 0x18, 0x66, 0xFF}}},
	{{{91, -28, 36}, 0, {516, 418}, {0x48, 0xC2, 0x55, 0xFF}}},
	{{{64, -38, 28}, 0, {456, 456}, {0x07, 0x8B, 0x31, 0xFF}}},
	{{{85, -48, 0}, 0, {506, 456}, {0x1C, 0x84, 0x04, 0xFF}}},
	{{{64, -38, -32}, 0, {456, 456}, {0x03, 0x96, 0xBA, 0xFF}}},
	{{{54, -41, 18}, 0, {414, 470}, {0x0E, 0x88, 0xD8, 0xFF}}},
	{{{66, -55, 27}, 0, {456, 496}, {0x2B, 0x90, 0xD6, 0xFF}}},
	{{{70, -37, 26}, 0, {456, 456}, {0x72, 0x15, 0xCD, 0xFF}}},
	{{{73, -46, 39}, 0, {476, 476}, {0x6B, 0xDD, 0x3B, 0xFF}}},
	{{{47, -39, 51}, 0, {414, 470}, {0xF4, 0xD9, 0x78, 0xFF}}},
	{{{93, -32, -34}, 0, {526, 434}, {0x49, 0xBF, 0xB0, 0xFF}}},
	{{{106, 0, 0}, 0, {536, 374}, {0x7E, 0x13, 0x03, 0xFF}}},
	{{{104, -28, 0}, 0, {536, 414}, {0x75, 0xCF, 0x05, 0xFF}}},
	{{{13, 19, 0}, 0, {-16, -16}, {0xEA, 0x7D, 0xFB, 0xFF}}},
	{{{12, -4, -23}, 0, {-16, 270}, {0xC0, 0x01, 0x92, 0xFF}}},
	{{{-7, -5, -25}, 0, {322, 270}, {0xBC, 0xF2, 0x96, 0xFF}}},
	{{{13, -19, 0}, 0, {-16, 516}, {0xB9, 0x96, 0x02, 0xFF}}},
	{{{-7, -23, 0}, 0, {322, 516}, {0xBD, 0x94, 0x05, 0xFF}}},
	{{{-7, 0, 27}, 0, {322, 270}, {0xBE, 0x00, 0x6C, 0xFF}}},
	{{{12, 0, 24}, 0, {-16, 270}, {0xC6, 0x1E, 0x6D, 0xFF}}},
	{{{-7, 23, 0}, 0, {322, -16}, {0xBF, 0x6D, 0xF9, 0xFF}}},
};

Gfx king_bobomb_kbob_hand_l_mesh_layer_4_tri_1[] = {
	gsSPVertex(king_bobomb_kbob_hand_l_mesh_layer_4_vtx_1 + 0, 42, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 7, 6, 5, 0),
	gsSP2Triangles(7, 5, 8, 0, 9, 8, 5, 0),
	gsSP2Triangles(9, 10, 8, 0, 10, 9, 11, 0),
	gsSP2Triangles(12, 11, 9, 0, 11, 12, 13, 0),
	gsSP2Triangles(14, 13, 12, 0, 14, 12, 15, 0),
	gsSP2Triangles(4, 15, 12, 0, 15, 4, 16, 0),
	gsSP2Triangles(6, 16, 4, 0, 16, 6, 17, 0),
	gsSP2Triangles(18, 17, 6, 0, 6, 7, 18, 0),
	gsSP2Triangles(19, 18, 7, 0, 19, 7, 20, 0),
	gsSP2Triangles(8, 20, 7, 0, 8, 21, 20, 0),
	gsSP2Triangles(21, 8, 10, 0, 10, 22, 21, 0),
	gsSP2Triangles(22, 10, 23, 0, 23, 24, 22, 0),
	gsSP2Triangles(24, 23, 25, 0, 26, 25, 23, 0),
	gsSP2Triangles(26, 15, 25, 0, 15, 26, 14, 0),
	gsSP2Triangles(13, 14, 26, 0, 13, 26, 27, 0),
	gsSP2Triangles(28, 27, 26, 0, 27, 28, 29, 0),
	gsSP2Triangles(10, 29, 28, 0, 29, 10, 30, 0),
	gsSP2Triangles(11, 30, 10, 0, 11, 13, 30, 0),
	gsSP2Triangles(27, 30, 13, 0, 30, 27, 29, 0),
	gsSP2Triangles(16, 25, 15, 0, 25, 16, 31, 0),
	gsSP2Triangles(17, 31, 16, 0, 31, 17, 32, 0),
	gsSP2Triangles(18, 32, 17, 0, 18, 19, 32, 0),
	gsSP2Triangles(20, 32, 19, 0, 32, 20, 21, 0),
	gsSP2Triangles(32, 21, 22, 0, 22, 33, 32, 0),
	gsSP2Triangles(33, 22, 24, 0, 33, 24, 31, 0),
	gsSP2Triangles(25, 31, 24, 0, 31, 32, 33, 0),
	gsSP2Triangles(34, 35, 36, 0, 37, 36, 35, 0),
	gsSP2Triangles(36, 37, 38, 0, 39, 38, 37, 0),
	gsSP2Triangles(37, 40, 39, 0, 34, 39, 40, 0),
	gsSP2Triangles(39, 34, 41, 0, 36, 41, 34, 0),
	gsSPEndDisplayList(),
};

Vtx king_bobomb_kbob_arm_r_mesh_layer_4_vtx_0[5] = {
	{{{-110, 0, -11}, 0, {148, 1336}, {0x36, 0x01, 0x8D, 0xFF}}},
	{{{-110, 10, 0}, 0, {148, 1192}, {0x34, 0x74, 0xFF, 0xFF}}},
	{{{-104, 0, 0}, 0, {106, 1336}, {0x7F, 0x03, 0x00, 0xFF}}},
	{{{-110, 0, 11}, 0, {148, 1336}, {0x36, 0x03, 0x73, 0xFF}}},
	{{{-110, -11, 0}, 0, {148, 1500}, {0x36, 0x8D, 0x01, 0xFF}}},
};

Gfx king_bobomb_kbob_arm_r_mesh_layer_4_tri_0[] = {
	gsSPVertex(king_bobomb_kbob_arm_r_mesh_layer_4_vtx_0 + 0, 5, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
	gsSP2Triangles(2, 3, 4, 0, 4, 0, 2, 0),
	gsSPEndDisplayList(),
};

Vtx king_bobomb_kbob_hand_r_skinned_mesh_layer_4_vtx_0[4] = {
	{{{-110, 0, -11}, 0, {148, 1336}, {0x36, 0x01, 0x8D, 0xFF}}},
	{{{-110, -11, 0}, 0, {148, 1500}, {0x36, 0x8D, 0x01, 0xFF}}},
	{{{-110, 0, 11}, 0, {148, 1336}, {0x36, 0x03, 0x73, 0xFF}}},
	{{{-110, 10, 0}, 0, {148, 1192}, {0x34, 0x74, 0xFF, 0xFF}}},
};

Gfx king_bobomb_kbob_hand_r_skinned_mesh_layer_4_tri_0[] = {
	gsSPVertex(king_bobomb_kbob_hand_r_skinned_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx king_bobomb_kbob_hand_r_mesh_layer_4_vtx_0[4] = {
	{{{-1, 0, -11}, 0, {362, 1336}, {0x00, 0x01, 0x81, 0xFF}}},
	{{{-1, -11, 0}, 0, {362, 1500}, {0x00, 0x81, 0x01, 0xFF}}},
	{{{-1, 10, 0}, 0, {362, 1192}, {0x00, 0x7F, 0xFF, 0xFF}}},
	{{{-1, 0, 11}, 0, {362, 1336}, {0x00, 0x04, 0x7F, 0xFF}}},
};

Gfx king_bobomb_kbob_hand_r_mesh_layer_4_tri_0[] = {
	gsSPVertex(king_bobomb_kbob_hand_r_mesh_layer_4_vtx_0 + 0, 4, 4),
	gsSP2Triangles(4, 0, 5, 0, 4, 6, 0, 0),
	gsSP2Triangles(3, 0, 6, 0, 6, 2, 3, 0),
	gsSP2Triangles(6, 7, 2, 0, 5, 2, 7, 0),
	gsSP2Triangles(5, 1, 2, 0, 1, 5, 0, 0),
	gsSPEndDisplayList(),
};

Vtx king_bobomb_kbob_hand_r_mesh_layer_4_vtx_1[42] = {
	{{{7, -23, 0}, 0, {374, 250}, {0x43, 0x94, 0x05, 0xFF}}},
	{{{7, -5, -25}, 0, {578, 250}, {0x44, 0xF2, 0x96, 0xFF}}},
	{{{7, 0, 27}, 0, {374, 4}, {0x42, 0x00, 0x6C, 0xFF}}},
	{{{7, 23, 0}, 0, {578, 4}, {0x41, 0x6D, 0xF9, 0xFF}}},
	{{{-13, 19, 0}, 0, {352, 322}, {0x16, 0x7D, 0xFB, 0xFF}}},
	{{{-12, -4, -23}, 0, {352, 384}, {0x40, 0x01, 0x92, 0xFF}}},
	{{{-39, 14, -36}, 0, {414, 348}, {0x23, 0x50, 0xA4, 0xFF}}},
	{{{-46, -19, -45}, 0, {414, 418}, {0x1C, 0xE9, 0x86, 0xFF}}},
	{{{-31, -44, -22}, 0, {362, 476}, {0x35, 0x96, 0xD3, 0xFF}}},
	{{{-13, -19, 0}, 0, {352, 418}, {0x47, 0x96, 0x02, 0xFF}}},
	{{{-32, -41, 16}, 0, {362, 476}, {0x44, 0x95, 0x0C, 0xFF}}},
	{{{-43, -49, 36}, 0, {394, 496}, {0x32, 0x8E, 0x18, 0xFF}}},
	{{{-20, -21, 40}, 0, {352, 418}, {0x56, 0xFD, 0x5D, 0xFF}}},
	{{{-12, 0, 24}, 0, {352, 384}, {0x3A, 0x1E, 0x6D, 0xFF}}},
	{{{-54, -23, 45}, 0, {414, 418}, {0xF3, 0x14, 0x7D, 0xFF}}},
	{{{-45, 16, 34}, 0, {414, 348}, {0x1D, 0x54, 0x5B, 0xFF}}},
	{{{-63, 27, 0}, 0, {466, 322}, {0x00, 0x7F, 0xFF, 0xFF}}},
	{{{-88, 18, -31}, 0, {496, 340}, {0xCA, 0x59, 0xB7, 0xFF}}},
	{{{-93, -4, -40}, 0, {516, 384}, {0xB4, 0x10, 0x9B, 0xFF}}},
	{{{-93, -32, -34}, 0, {526, 434}, {0xB7, 0xBF, 0xB0, 0xFF}}},
	{{{-64, -38, -32}, 0, {456, 456}, {0xFD, 0x96, 0xBA, 0xFF}}},
	{{{-54, -41, 18}, 0, {414, 470}, {0xF2, 0x88, 0xD8, 0xFF}}},
	{{{-66, -55, 27}, 0, {456, 496}, {0xD5, 0x90, 0xD6, 0xFF}}},
	{{{-47, -39, 51}, 0, {414, 470}, {0x0C, 0xD9, 0x78, 0xFF}}},
	{{{-73, -46, 39}, 0, {476, 476}, {0x95, 0xDD, 0x3B, 0xFF}}},
	{{{-70, -37, 26}, 0, {456, 456}, {0x8E, 0x15, 0xCD, 0xFF}}},
	{{{-64, -38, 28}, 0, {456, 456}, {0xF9, 0x8B, 0x31, 0xFF}}},
	{{{-85, -48, 0}, 0, {506, 456}, {0xE4, 0x84, 0x04, 0xFF}}},
	{{{-91, -28, 36}, 0, {516, 418}, {0xB8, 0xC2, 0x55, 0xFF}}},
	{{{-90, 0, 41}, 0, {516, 384}, {0xB9, 0x18, 0x66, 0xFF}}},
	{{{-85, 18, 33}, 0, {496, 340}, {0xCF, 0x5C, 0x48, 0xFF}}},
	{{{-99, 18, 0}, 0, {526, 332}, {0xA5, 0x59, 0x03, 0xFF}}},
	{{{-106, 0, 0}, 0, {536, 374}, {0x82, 0x13, 0x03, 0xFF}}},
	{{{-104, -28, 0}, 0, {536, 414}, {0x8B, 0xCF, 0x05, 0xFF}}},
	{{{-12, 0, 24}, 0, {-16, 270}, {0x3A, 0x1E, 0x6D, 0xFF}}},
	{{{7, 0, 27}, 0, {322, 270}, {0x42, 0x00, 0x6C, 0xFF}}},
	{{{-13, 19, 0}, 0, {-16, -16}, {0x16, 0x7D, 0xFB, 0xFF}}},
	{{{-13, -19, 0}, 0, {-16, 516}, {0x47, 0x96, 0x02, 0xFF}}},
	{{{7, -23, 0}, 0, {322, 516}, {0x43, 0x94, 0x05, 0xFF}}},
	{{{7, -5, -25}, 0, {322, 270}, {0x44, 0xF2, 0x96, 0xFF}}},
	{{{-12, -4, -23}, 0, {-16, 270}, {0x40, 0x01, 0x92, 0xFF}}},
	{{{7, 23, 0}, 0, {322, -16}, {0x41, 0x6D, 0xF9, 0xFF}}},
};

Gfx king_bobomb_kbob_hand_r_mesh_layer_4_tri_1[] = {
	gsSPVertex(king_bobomb_kbob_hand_r_mesh_layer_4_vtx_1 + 0, 42, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 7, 6, 5, 0),
	gsSP2Triangles(7, 5, 8, 0, 9, 8, 5, 0),
	gsSP2Triangles(9, 10, 8, 0, 10, 9, 11, 0),
	gsSP2Triangles(12, 11, 9, 0, 12, 9, 13, 0),
	gsSP2Triangles(13, 14, 12, 0, 14, 13, 15, 0),
	gsSP2Triangles(4, 15, 13, 0, 15, 4, 16, 0),
	gsSP2Triangles(6, 16, 4, 0, 6, 17, 16, 0),
	gsSP2Triangles(17, 6, 18, 0, 6, 7, 18, 0),
	gsSP2Triangles(19, 18, 7, 0, 19, 7, 20, 0),
	gsSP2Triangles(8, 20, 7, 0, 8, 21, 20, 0),
	gsSP2Triangles(21, 8, 10, 0, 10, 11, 21, 0),
	gsSP2Triangles(22, 21, 11, 0, 11, 23, 22, 0),
	gsSP2Triangles(11, 12, 23, 0, 14, 23, 12, 0),
	gsSP2Triangles(23, 14, 24, 0, 25, 24, 14, 0),
	gsSP2Triangles(24, 25, 22, 0, 21, 22, 25, 0),
	gsSP2Triangles(24, 22, 23, 0, 26, 20, 21, 0),
	gsSP2Triangles(20, 26, 27, 0, 28, 27, 26, 0),
	gsSP2Triangles(26, 14, 28, 0, 29, 28, 14, 0),
	gsSP2Triangles(14, 15, 29, 0, 30, 29, 15, 0),
	gsSP2Triangles(15, 16, 30, 0, 16, 31, 30, 0),
	gsSP2Triangles(31, 16, 17, 0, 31, 17, 32, 0),
	gsSP2Triangles(18, 32, 17, 0, 18, 19, 32, 0),
	gsSP2Triangles(33, 32, 19, 0, 33, 19, 27, 0),
	gsSP2Triangles(20, 27, 19, 0, 27, 28, 33, 0),
	gsSP2Triangles(32, 33, 28, 0, 28, 29, 32, 0),
	gsSP2Triangles(30, 32, 29, 0, 32, 30, 31, 0),
	gsSP2Triangles(34, 35, 36, 0, 34, 37, 35, 0),
	gsSP2Triangles(38, 35, 37, 0, 37, 39, 38, 0),
	gsSP2Triangles(37, 40, 39, 0, 36, 39, 40, 0),
	gsSP2Triangles(36, 41, 39, 0, 41, 36, 35, 0),
	gsSPEndDisplayList(),
};

Vtx king_bobomb_kbob_body_dlist_mesh_layer_5_vtx_0[4] = {
	{{{-185, 0, 0}, 0, {-1040, 2032}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{0, -185, 0}, 0, {1008, 2032}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{185, 0, 0}, 0, {1008, -16}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{0, 185, 0}, 0, {-1040, -16}, {0x00, 0x00, 0x7F, 0xFF}}},
};

Gfx king_bobomb_kbob_body_dlist_mesh_layer_5_tri_0[] = {
	gsSPVertex(king_bobomb_kbob_body_dlist_mesh_layer_5_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx king_bobomb_kbob_eye_mesh_layer_4_vtx_0[6] = {
	{{{-38, 257, 108}, 0, {1008, 1152}, {0xDD, 0x22, 0x75, 0xFF}}},
	{{{-38, 204, 123}, 0, {1008, 1664}, {0xDD, 0x22, 0x75, 0xFF}}},
	{{{0, 204, 134}, 0, {618, 1664}, {0x00, 0x23, 0x7A, 0xFF}}},
	{{{0, 257, 119}, 0, {618, 1152}, {0x00, 0x23, 0x7A, 0xFF}}},
	{{{38, 204, 123}, 0, {1008, 1664}, {0x23, 0x22, 0x75, 0xFF}}},
	{{{38, 257, 108}, 0, {1008, 1152}, {0x23, 0x22, 0x75, 0xFF}}},
};

Gfx king_bobomb_kbob_eye_mesh_layer_4_tri_0[] = {
	gsSPVertex(king_bobomb_kbob_eye_mesh_layer_4_vtx_0 + 0, 6, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
	gsSPEndDisplayList(),
};

Vtx king_bobomb_kbob_crown_mesh_layer_4_vtx_0[16] = {
	{{{46, 335, -59}, 0, {486, 1704}, {0x59, 0xEE, 0xA8, 0xFF}}},
	{{{68, 380, -16}, 0, {1008, 2032}, {0x7F, 0xF6, 0x01, 0xFF}}},
	{{{61, 299, -9}, 0, {-16, 2032}, {0x7F, 0xF6, 0x01, 0xFF}}},
	{{{46, 343, 33}, 0, {486, 2360}, {0x59, 0xFD, 0x5A, 0xFF}}},
	{{{43, 303, 34}, 0, {-16, 2360}, {0x5A, 0xFD, 0x5A, 0xFF}}},
	{{{0, 305, 52}, 0, {-16, 2032}, {0x00, 0x01, 0x7F, 0xFF}}},
	{{{0, 386, 51}, 0, {1008, 2032}, {0x00, 0x01, 0x7F, 0xFF}}},
	{{{-46, 343, 33}, 0, {486, 1704}, {0xA7, 0xFD, 0x5A, 0xFF}}},
	{{{-43, 303, 34}, 0, {-16, 1704}, {0xA6, 0xFD, 0x5A, 0xFF}}},
	{{{-61, 299, -9}, 0, {-16, 2032}, {0x81, 0xF6, 0x01, 0xFF}}},
	{{{-68, 380, -16}, 0, {1008, 2032}, {0x81, 0xF6, 0x01, 0xFF}}},
	{{{-46, 335, -59}, 0, {486, 2360}, {0xA7, 0xEE, 0xA8, 0xFF}}},
	{{{-43, 295, -53}, 0, {-16, 2360}, {0xA7, 0xEE, 0xA8, 0xFF}}},
	{{{0, 294, -71}, 0, {-16, 2032}, {0x00, 0xEB, 0x83, 0xFF}}},
	{{{0, 374, -84}, 0, {1008, 2032}, {0x00, 0xEB, 0x83, 0xFF}}},
	{{{43, 295, -53}, 0, {-16, 1704}, {0x59, 0xEE, 0xA8, 0xFF}}},
};

Gfx king_bobomb_kbob_crown_mesh_layer_4_tri_0[] = {
	gsSPVertex(king_bobomb_kbob_crown_mesh_layer_4_vtx_0 + 0, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
	gsSP2Triangles(2, 3, 4, 0, 5, 4, 3, 0),
	gsSP2Triangles(3, 6, 5, 0, 7, 5, 6, 0),
	gsSP2Triangles(5, 7, 8, 0, 9, 8, 7, 0),
	gsSP2Triangles(7, 10, 9, 0, 11, 9, 10, 0),
	gsSP2Triangles(9, 11, 12, 0, 13, 12, 11, 0),
	gsSP2Triangles(11, 14, 13, 0, 0, 13, 14, 0),
	gsSP2Triangles(13, 0, 15, 0, 2, 15, 0, 0),
	gsSPEndDisplayList(),
};

Vtx king_bobomb_kbob_leg_l_mesh_layer_4_vtx_0[5] = {
	{{{4, 3, -1}, 0, {106, 1336}, {0x00, 0x7F, 0xF8, 0xFF}}},
	{{{4, -4, -11}, 0, {148, 1336}, {0x04, 0x29, 0x88, 0xFF}}},
	{{{-8, -5, 0}, 0, {148, 1500}, {0x8C, 0x32, 0xF8, 0xFF}}},
	{{{15, -5, 1}, 0, {148, 1192}, {0x75, 0x32, 0xFF, 0xFF}}},
	{{{3, -4, 12}, 0, {148, 1336}, {0xFC, 0x3D, 0x70, 0xFF}}},
};

Gfx king_bobomb_kbob_leg_l_mesh_layer_4_tri_0[] = {
	gsSPVertex(king_bobomb_kbob_leg_l_mesh_layer_4_vtx_0 + 0, 5, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(4, 3, 0, 0, 2, 4, 0, 0),
	gsSPEndDisplayList(),
};

Vtx king_bobomb_kbob_foot_l_skinned_mesh_layer_4_vtx_0[4] = {
	{{{-8, -5, 0}, 0, {148, 1500}, {0x8C, 0x32, 0xF8, 0xFF}}},
	{{{4, -4, -11}, 0, {148, 1336}, {0x04, 0x29, 0x88, 0xFF}}},
	{{{15, -5, 1}, 0, {148, 1192}, {0x75, 0x32, 0xFF, 0xFF}}},
	{{{3, -4, 12}, 0, {148, 1336}, {0xFC, 0x3D, 0x70, 0xFF}}},
};

Gfx king_bobomb_kbob_foot_l_skinned_mesh_layer_4_tri_0[] = {
	gsSPVertex(king_bobomb_kbob_foot_l_skinned_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx king_bobomb_kbob_foot_l_mesh_layer_4_vtx_0[4] = {
	{{{8, 1, 0}, 0, {362, 1500}, {0x7F, 0x01, 0xF8, 0xFF}}},
	{{{-4, 1, -12}, 0, {362, 1336}, {0x00, 0x12, 0x82, 0xFF}}},
	{{{-15, 1, 0}, 0, {362, 1192}, {0x81, 0x01, 0xF8, 0xFF}}},
	{{{-4, 1, 11}, 0, {362, 1336}, {0x00, 0xEE, 0x7E, 0xFF}}},
};

Gfx king_bobomb_kbob_foot_l_mesh_layer_4_tri_0[] = {
	gsSPVertex(king_bobomb_kbob_foot_l_mesh_layer_4_vtx_0 + 0, 4, 4),
	gsSP2Triangles(4, 0, 1, 0, 5, 0, 4, 0),
	gsSP2Triangles(5, 3, 0, 0, 6, 3, 5, 0),
	gsSP2Triangles(6, 2, 3, 0, 7, 2, 6, 0),
	gsSP2Triangles(7, 1, 2, 0, 4, 1, 7, 0),
	gsSPEndDisplayList(),
};

Vtx king_bobomb_kbob_foot_l_mesh_layer_4_vtx_1[39] = {
	{{{-5, 7, -28}, 0, {578, 824}, {0x00, 0x3C, 0x90, 0xFF}}},
	{{{-32, 7, 0}, 0, {578, 578}, {0x90, 0x3C, 0x00, 0xFF}}},
	{{{23, 7, 0}, 0, {374, 824}, {0x70, 0x3C, 0x00, 0xFF}}},
	{{{-5, 7, 27}, 0, {374, 578}, {0x00, 0x3C, 0x70, 0xFF}}},
	{{{-28, -9, 0}, 0, {-16, 1090}, {0x88, 0x29, 0x00, 0xFF}}},
	{{{-32, 7, 0}, 0, {322, 1090}, {0x90, 0x3C, 0x00, 0xFF}}},
	{{{-5, 7, -28}, 0, {322, 844}, {0x00, 0x3C, 0x90, 0xFF}}},
	{{{-5, -9, 23}, 0, {-16, 844}, {0xF6, 0x2A, 0x78, 0xFF}}},
	{{{-5, 7, 27}, 0, {322, 844}, {0x00, 0x3C, 0x70, 0xFF}}},
	{{{18, -9, 0}, 0, {-16, 598}, {0x64, 0x4E, 0x00, 0xFF}}},
	{{{23, 7, 0}, 0, {322, 598}, {0x70, 0x3C, 0x00, 0xFF}}},
	{{{-5, -9, -23}, 0, {-16, 844}, {0xF6, 0x2A, 0x88, 0xFF}}},
	{{{-28, -9, 0}, 0, {608, 926}, {0x88, 0x29, 0x00, 0xFF}}},
	{{{-38, -38, 23}, 0, {608, 1090}, {0xA1, 0x20, 0x4E, 0xFF}}},
	{{{-5, -9, 23}, 0, {558, 926}, {0xF6, 0x2A, 0x78, 0xFF}}},
	{{{-46, -38, 0}, 0, {650, 1090}, {0x83, 0x17, 0x00, 0xFF}}},
	{{{-38, -38, -23}, 0, {608, 1090}, {0xA1, 0x20, 0xB2, 0xFF}}},
	{{{-5, -9, -23}, 0, {558, 926}, {0xF6, 0x2A, 0x88, 0xFF}}},
	{{{8, -38, -43}, 0, {526, 1090}, {0xFC, 0x21, 0x85, 0xFF}}},
	{{{54, -38, -27}, 0, {414, 1090}, {0x1F, 0x49, 0x9D, 0xFF}}},
	{{{18, -9, 0}, 0, {506, 926}, {0x64, 0x4E, 0x00, 0xFF}}},
	{{{65, -22, 0}, 0, {404, 968}, {0xE6, 0x7C, 0x00, 0xFF}}},
	{{{54, -38, 27}, 0, {414, 1090}, {0x1F, 0x49, 0x63, 0xFF}}},
	{{{8, -38, 42}, 0, {526, 1090}, {0xFC, 0x21, 0x7B, 0xFF}}},
	{{{96, -7, 0}, 0, {332, 968}, {0x49, 0x68, 0x00, 0xFF}}},
	{{{-38, -38, -23}, 0, {968, 598}, {0xA1, 0x20, 0xB2, 0xFF}}},
	{{{8, -38, -43}, 0, {916, 598}, {0xFC, 0x21, 0x85, 0xFF}}},
	{{{-31, -72, -31}, 0, {968, 968}, {0xC1, 0xB1, 0xB3, 0xFF}}},
	{{{61, -72, -39}, 0, {834, 968}, {0x32, 0xB8, 0xA4, 0xFF}}},
	{{{54, -38, -27}, 0, {814, 598}, {0x1F, 0x49, 0x9D, 0xFF}}},
	{{{96, -7, 0}, 0, {722, 598}, {0x49, 0x68, 0x00, 0xFF}}},
	{{{96, -49, 0}, 0, {722, 864}, {0x79, 0xD8, 0x00, 0xFF}}},
	{{{61, -72, 38}, 0, {834, 968}, {0x32, 0xB8, 0x5C, 0xFF}}},
	{{{54, -38, 27}, 0, {814, 598}, {0x1F, 0x49, 0x63, 0xFF}}},
	{{{8, -38, 42}, 0, {916, 598}, {0xFC, 0x21, 0x7B, 0xFF}}},
	{{{-31, -72, 30}, 0, {968, 968}, {0xC1, 0xB1, 0x4D, 0xFF}}},
	{{{-38, -38, 23}, 0, {968, 598}, {0xA1, 0x20, 0x4E, 0xFF}}},
	{{{-46, -38, 0}, 0, {1008, 598}, {0x83, 0x17, 0x00, 0xFF}}},
	{{{-38, -72, 0}, 0, {1008, 968}, {0xAA, 0xA3, 0x00, 0xFF}}},
};

Gfx king_bobomb_kbob_foot_l_mesh_layer_4_tri_1[] = {
	gsSPVertex(king_bobomb_kbob_foot_l_mesh_layer_4_vtx_1 + 0, 39, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 7, 5, 4, 0),
	gsSP2Triangles(7, 8, 5, 0, 9, 8, 7, 0),
	gsSP2Triangles(9, 10, 8, 0, 11, 10, 9, 0),
	gsSP2Triangles(11, 6, 10, 0, 4, 6, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 13, 12, 15, 0),
	gsSP2Triangles(16, 15, 12, 0, 12, 17, 16, 0),
	gsSP2Triangles(18, 16, 17, 0, 18, 17, 19, 0),
	gsSP2Triangles(20, 19, 17, 0, 20, 21, 19, 0),
	gsSP2Triangles(21, 20, 22, 0, 14, 22, 20, 0),
	gsSP2Triangles(14, 23, 22, 0, 23, 14, 13, 0),
	gsSP2Triangles(24, 21, 22, 0, 24, 19, 21, 0),
	gsSP2Triangles(25, 26, 27, 0, 28, 27, 26, 0),
	gsSP2Triangles(26, 29, 28, 0, 30, 28, 29, 0),
	gsSP2Triangles(30, 31, 28, 0, 31, 30, 32, 0),
	gsSP2Triangles(33, 32, 30, 0, 33, 34, 32, 0),
	gsSP2Triangles(35, 32, 34, 0, 34, 36, 35, 0),
	gsSP2Triangles(37, 35, 36, 0, 37, 38, 35, 0),
	gsSP2Triangles(38, 37, 27, 0, 25, 27, 37, 0),
	gsSP2Triangles(27, 35, 38, 0, 27, 28, 35, 0),
	gsSP2Triangles(32, 35, 28, 0, 32, 28, 31, 0),
	gsSPEndDisplayList(),
};

Vtx king_bobomb_kbob_leg_r_mesh_layer_4_vtx_0[5] = {
	{{{4, 3, 1}, 0, {106, 1336}, {0x00, 0x7F, 0x08, 0xFF}}},
	{{{-8, -5, 0}, 0, {148, 1500}, {0x8C, 0x32, 0x09, 0xFF}}},
	{{{4, -4, 11}, 0, {148, 1336}, {0x04, 0x29, 0x78, 0xFF}}},
	{{{3, -4, -12}, 0, {148, 1336}, {0xFC, 0x3D, 0x90, 0xFF}}},
	{{{15, -5, -1}, 0, {148, 1192}, {0x75, 0x32, 0x00, 0xFF}}},
};

Gfx king_bobomb_kbob_leg_r_mesh_layer_4_tri_0[] = {
	gsSPVertex(king_bobomb_kbob_leg_r_mesh_layer_4_vtx_0 + 0, 5, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(4, 3, 0, 0, 2, 4, 0, 0),
	gsSPEndDisplayList(),
};

Vtx king_bobomb_kbob_foot_r_skinned_mesh_layer_4_vtx_0[4] = {
	{{{4, -4, 11}, 0, {148, 1336}, {0x04, 0x29, 0x78, 0xFF}}},
	{{{-8, -5, 0}, 0, {148, 1500}, {0x8C, 0x32, 0x09, 0xFF}}},
	{{{3, -4, -12}, 0, {148, 1336}, {0xFC, 0x3D, 0x90, 0xFF}}},
	{{{15, -5, -1}, 0, {148, 1192}, {0x75, 0x32, 0x00, 0xFF}}},
};

Gfx king_bobomb_kbob_foot_r_skinned_mesh_layer_4_tri_0[] = {
	gsSPVertex(king_bobomb_kbob_foot_r_skinned_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx king_bobomb_kbob_foot_r_mesh_layer_4_vtx_0[4] = {
	{{{-4, 1, -11}, 0, {362, 1336}, {0x00, 0xEE, 0x82, 0xFF}}},
	{{{-15, 1, 0}, 0, {362, 1192}, {0x81, 0x01, 0x08, 0xFF}}},
	{{{-4, 1, 12}, 0, {362, 1336}, {0x00, 0x12, 0x7E, 0xFF}}},
	{{{8, 1, 0}, 0, {362, 1500}, {0x7F, 0x01, 0x08, 0xFF}}},
};

Gfx king_bobomb_kbob_foot_r_mesh_layer_4_tri_0[] = {
	gsSPVertex(king_bobomb_kbob_foot_r_mesh_layer_4_vtx_0 + 0, 4, 4),
	gsSP2Triangles(4, 0, 1, 0, 5, 0, 4, 0),
	gsSP2Triangles(5, 3, 0, 0, 6, 3, 5, 0),
	gsSP2Triangles(6, 2, 3, 0, 7, 2, 6, 0),
	gsSP2Triangles(7, 1, 2, 0, 4, 1, 7, 0),
	gsSPEndDisplayList(),
};

Vtx king_bobomb_kbob_foot_r_mesh_layer_4_vtx_1[39] = {
	{{{-5, 7, 28}, 0, {578, 824}, {0x00, 0x3C, 0x70, 0xFF}}},
	{{{23, 7, 0}, 0, {374, 824}, {0x70, 0x3C, 0x00, 0xFF}}},
	{{{-32, 7, 0}, 0, {578, 578}, {0x90, 0x3C, 0x00, 0xFF}}},
	{{{-5, 7, -27}, 0, {374, 578}, {0x00, 0x3C, 0x90, 0xFF}}},
	{{{-5, -9, 23}, 0, {-16, 844}, {0xF6, 0x2A, 0x78, 0xFF}}},
	{{{-5, 7, 28}, 0, {322, 844}, {0x00, 0x3C, 0x70, 0xFF}}},
	{{{-32, 7, 0}, 0, {322, 1090}, {0x90, 0x3C, 0x00, 0xFF}}},
	{{{18, -9, 0}, 0, {-16, 598}, {0x64, 0x4E, 0x00, 0xFF}}},
	{{{23, 7, 0}, 0, {322, 598}, {0x70, 0x3C, 0x00, 0xFF}}},
	{{{-5, -9, -23}, 0, {-16, 844}, {0xF6, 0x2A, 0x88, 0xFF}}},
	{{{-5, 7, -27}, 0, {322, 844}, {0x00, 0x3C, 0x90, 0xFF}}},
	{{{-28, -9, 0}, 0, {-16, 1090}, {0x88, 0x29, 0x00, 0xFF}}},
	{{{-5, -9, 23}, 0, {558, 926}, {0xF6, 0x2A, 0x78, 0xFF}}},
	{{{54, -38, 27}, 0, {414, 1090}, {0x1F, 0x49, 0x63, 0xFF}}},
	{{{18, -9, 0}, 0, {506, 926}, {0x64, 0x4E, 0x00, 0xFF}}},
	{{{8, -38, 43}, 0, {526, 1090}, {0xFC, 0x21, 0x7B, 0xFF}}},
	{{{-38, -38, 23}, 0, {608, 1090}, {0xA1, 0x20, 0x4E, 0xFF}}},
	{{{-28, -9, 0}, 0, {608, 926}, {0x88, 0x29, 0x00, 0xFF}}},
	{{{-46, -38, 0}, 0, {650, 1090}, {0x83, 0x17, 0x00, 0xFF}}},
	{{{-38, -38, -23}, 0, {608, 1090}, {0xA1, 0x20, 0xB2, 0xFF}}},
	{{{-5, -9, -23}, 0, {558, 926}, {0xF6, 0x2A, 0x88, 0xFF}}},
	{{{8, -38, -42}, 0, {526, 1090}, {0xFC, 0x21, 0x85, 0xFF}}},
	{{{54, -38, -27}, 0, {414, 1090}, {0x1F, 0x49, 0x9D, 0xFF}}},
	{{{65, -22, 0}, 0, {404, 968}, {0xE6, 0x7C, 0x00, 0xFF}}},
	{{{96, -7, 0}, 0, {332, 968}, {0x49, 0x68, 0x00, 0xFF}}},
	{{{8, -38, 43}, 0, {916, 598}, {0xFC, 0x21, 0x7B, 0xFF}}},
	{{{-38, -38, 23}, 0, {968, 598}, {0xA1, 0x20, 0x4E, 0xFF}}},
	{{{-31, -72, 31}, 0, {968, 968}, {0xC1, 0xB1, 0x4D, 0xFF}}},
	{{{-46, -38, 0}, 0, {1008, 598}, {0x83, 0x17, 0x00, 0xFF}}},
	{{{-38, -72, 0}, 0, {1008, 968}, {0xAA, 0xA3, 0x00, 0xFF}}},
	{{{-31, -72, -30}, 0, {968, 968}, {0xC1, 0xB1, 0xB3, 0xFF}}},
	{{{-38, -38, -23}, 0, {968, 598}, {0xA1, 0x20, 0xB2, 0xFF}}},
	{{{8, -38, -42}, 0, {916, 598}, {0xFC, 0x21, 0x85, 0xFF}}},
	{{{61, -72, -38}, 0, {834, 968}, {0x32, 0xB8, 0xA4, 0xFF}}},
	{{{54, -38, -27}, 0, {814, 598}, {0x1F, 0x49, 0x9D, 0xFF}}},
	{{{96, -7, 0}, 0, {722, 598}, {0x49, 0x68, 0x00, 0xFF}}},
	{{{96, -49, 0}, 0, {722, 864}, {0x79, 0xD9, 0x00, 0xFF}}},
	{{{61, -72, 39}, 0, {834, 968}, {0x32, 0xB8, 0x5C, 0xFF}}},
	{{{54, -38, 27}, 0, {814, 598}, {0x1F, 0x49, 0x63, 0xFF}}},
};

Gfx king_bobomb_kbob_foot_r_mesh_layer_4_tri_1[] = {
	gsSPVertex(king_bobomb_kbob_foot_r_mesh_layer_4_vtx_1 + 0, 39, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 7, 5, 4, 0),
	gsSP2Triangles(7, 8, 5, 0, 9, 8, 7, 0),
	gsSP2Triangles(9, 10, 8, 0, 11, 10, 9, 0),
	gsSP2Triangles(11, 6, 10, 0, 4, 6, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 13, 12, 15, 0),
	gsSP2Triangles(16, 15, 12, 0, 12, 17, 16, 0),
	gsSP2Triangles(18, 16, 17, 0, 18, 17, 19, 0),
	gsSP2Triangles(20, 19, 17, 0, 19, 20, 21, 0),
	gsSP2Triangles(22, 21, 20, 0, 20, 14, 22, 0),
	gsSP2Triangles(23, 22, 14, 0, 23, 14, 13, 0),
	gsSP2Triangles(13, 24, 23, 0, 22, 23, 24, 0),
	gsSP2Triangles(25, 26, 27, 0, 28, 27, 26, 0),
	gsSP2Triangles(27, 28, 29, 0, 30, 29, 28, 0),
	gsSP2Triangles(28, 31, 30, 0, 32, 30, 31, 0),
	gsSP2Triangles(30, 32, 33, 0, 34, 33, 32, 0),
	gsSP2Triangles(33, 34, 35, 0, 33, 35, 36, 0),
	gsSP2Triangles(37, 36, 35, 0, 38, 37, 35, 0),
	gsSP2Triangles(38, 25, 37, 0, 27, 37, 25, 0),
	gsSP2Triangles(37, 27, 30, 0, 29, 30, 27, 0),
	gsSP2Triangles(30, 33, 37, 0, 36, 37, 33, 0),
	gsSPEndDisplayList(),
};

Vtx king_bobomb_kbob_mustach_mesh_layer_4_vtx_0[46] = {
	{{{46, 112, 113}, 0, {834, 1544}, {0xEE, 0x87, 0xDC, 0xFF}}},
	{{{19, 121, 122}, 0, {812, 1544}, {0xB5, 0x9C, 0xED, 0xFF}}},
	{{{36, 157, 102}, 0, {832, 1416}, {0xD5, 0x0C, 0x89, 0xFF}}},
	{{{34, 127, 139}, 0, {824, 1504}, {0xF5, 0xA8, 0x5B, 0xFF}}},
	{{{73, 114, 103}, 0, {854, 1544}, {0x08, 0x88, 0xD7, 0xFF}}},
	{{{100, 123, 93}, 0, {874, 1544}, {0x38, 0x99, 0xCE, 0xFF}}},
	{{{90, 154, 88}, 0, {876, 1420}, {0xD5, 0x06, 0x89, 0xFF}}},
	{{{80, 184, 108}, 0, {864, 1278}, {0x26, 0x74, 0xDC, 0xFF}}},
	{{{62, 198, 117}, 0, {844, 1330}, {0x25, 0x78, 0xEB, 0xFF}}},
	{{{42, 202, 123}, 0, {834, 1258}, {0xF9, 0x7F, 0xFD, 0xFF}}},
	{{{19, 194, 128}, 0, {812, 1278}, {0xC5, 0x71, 0x03, 0xFF}}},
	{{{0, 177, 129}, 0, {792, 1340}, {0x00, 0x7B, 0xE0, 0xFF}}},
	{{{0, 161, 126}, 0, {792, 1386}, {0x00, 0x1A, 0x84, 0xFF}}},
	{{{0, 146, 122}, 0, {792, 1432}, {0x00, 0xAA, 0xA2, 0xFF}}},
	{{{0, 161, 142}, 0, {794, 1422}, {0x00, 0x04, 0x7F, 0xFF}}},
	{{{42, 153, 156}, 0, {824, 1402}, {0x08, 0xFC, 0x7F, 0xFF}}},
	{{{81, 154, 141}, 0, {854, 1402}, {0x45, 0x01, 0x6A, 0xFF}}},
	{{{88, 130, 116}, 0, {864, 1504}, {0x46, 0xB4, 0x4A, 0xFF}}},
	{{{117, 143, 82}, 0, {894, 1504}, {0x52, 0xB7, 0xBF, 0xFF}}},
	{{{125, 164, 77}, 0, {894, 1402}, {0x61, 0xDF, 0xB5, 0xFF}}},
	{{{126, 192, 74}, 0, {894, 1298}, {0x36, 0x67, 0xCD, 0xFF}}},
	{{{115, 183, 83}, 0, {884, 1324}, {0xCC, 0x72, 0x13, 0xFF}}},
	{{{100, 178, 95}, 0, {874, 1350}, {0xEF, 0x7D, 0xF0, 0xFF}}},
	{{{103, 161, 116}, 0, {874, 1402}, {0x5E, 0x19, 0x52, 0xFF}}},
	{{{-19, 194, 128}, 0, {812, 1278}, {0x3B, 0x71, 0x03, 0xFF}}},
	{{{-36, 157, 102}, 0, {832, 1416}, {0x2B, 0x0C, 0x89, 0xFF}}},
	{{{-19, 121, 122}, 0, {812, 1544}, {0x4B, 0x9C, 0xED, 0xFF}}},
	{{{-34, 127, 139}, 0, {824, 1504}, {0x0B, 0xA8, 0x5B, 0xFF}}},
	{{{-42, 153, 156}, 0, {824, 1402}, {0xF8, 0xFC, 0x7F, 0xFF}}},
	{{{-42, 202, 123}, 0, {834, 1258}, {0x07, 0x7F, 0xFD, 0xFF}}},
	{{{-62, 198, 117}, 0, {844, 1330}, {0xDB, 0x78, 0xEB, 0xFF}}},
	{{{-80, 184, 108}, 0, {864, 1278}, {0xDA, 0x74, 0xDC, 0xFF}}},
	{{{-90, 154, 88}, 0, {876, 1420}, {0x2B, 0x06, 0x89, 0xFF}}},
	{{{-100, 123, 93}, 0, {874, 1544}, {0xC8, 0x99, 0xCE, 0xFF}}},
	{{{-73, 114, 103}, 0, {854, 1544}, {0xF8, 0x88, 0xD7, 0xFF}}},
	{{{-46, 112, 113}, 0, {834, 1544}, {0x12, 0x87, 0xDC, 0xFF}}},
	{{{-88, 130, 116}, 0, {864, 1504}, {0xBA, 0xB4, 0x4A, 0xFF}}},
	{{{-81, 154, 141}, 0, {854, 1402}, {0xBB, 0x01, 0x6A, 0xFF}}},
	{{{-103, 161, 116}, 0, {874, 1402}, {0xA2, 0x19, 0x52, 0xFF}}},
	{{{-100, 178, 95}, 0, {874, 1350}, {0x11, 0x7D, 0xF0, 0xFF}}},
	{{{-115, 183, 83}, 0, {884, 1324}, {0x34, 0x72, 0x13, 0xFF}}},
	{{{-126, 192, 74}, 0, {894, 1298}, {0xCA, 0x67, 0xCD, 0xFF}}},
	{{{-125, 164, 77}, 0, {894, 1402}, {0x9F, 0xDF, 0xB5, 0xFF}}},
	{{{-117, 143, 82}, 0, {894, 1504}, {0xAE, 0xB7, 0xBF, 0xFF}}},
	{{{-120, 176, 89}, 0, {884, 1350}, {0xA8, 0x2C, 0x50, 0xFF}}},
	{{{120, 176, 89}, 0, {884, 1350}, {0x58, 0x2C, 0x50, 0xFF}}},
};

Gfx king_bobomb_kbob_mustach_mesh_layer_4_tri_0[] = {
	gsSPVertex(king_bobomb_kbob_mustach_mesh_layer_4_vtx_0 + 0, 46, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 0, 4, 0, 2, 4, 0, 0),
	gsSP2Triangles(4, 2, 5, 0, 6, 5, 2, 0),
	gsSP2Triangles(2, 7, 6, 0, 7, 2, 8, 0),
	gsSP2Triangles(9, 8, 2, 0, 2, 10, 9, 0),
	gsSP2Triangles(10, 2, 11, 0, 12, 11, 2, 0),
	gsSP2Triangles(2, 13, 12, 0, 13, 2, 1, 0),
	gsSP2Triangles(1, 14, 13, 0, 14, 1, 3, 0),
	gsSP2Triangles(3, 15, 14, 0, 15, 3, 16, 0),
	gsSP2Triangles(17, 16, 3, 0, 3, 4, 17, 0),
	gsSP2Triangles(5, 17, 4, 0, 17, 5, 18, 0),
	gsSP2Triangles(6, 18, 5, 0, 6, 19, 18, 0),
	gsSP2Triangles(19, 6, 20, 0, 21, 20, 6, 0),
	gsSP2Triangles(21, 6, 22, 0, 7, 22, 6, 0),
	gsSP2Triangles(7, 23, 22, 0, 23, 7, 16, 0),
	gsSP2Triangles(8, 16, 7, 0, 16, 8, 15, 0),
	gsSP2Triangles(9, 15, 8, 0, 15, 9, 10, 0),
	gsSP2Triangles(10, 14, 15, 0, 14, 10, 11, 0),
	gsSP2Triangles(11, 24, 14, 0, 24, 11, 25, 0),
	gsSP2Triangles(12, 25, 11, 0, 25, 12, 13, 0),
	gsSP2Triangles(13, 26, 25, 0, 26, 13, 14, 0),
	gsSP2Triangles(14, 27, 26, 0, 14, 28, 27, 0),
	gsSP2Triangles(28, 14, 24, 0, 24, 29, 28, 0),
	gsSP2Triangles(29, 24, 25, 0, 25, 30, 29, 0),
	gsSP2Triangles(30, 25, 31, 0, 32, 31, 25, 0),
	gsSP2Triangles(25, 33, 32, 0, 33, 25, 34, 0),
	gsSP2Triangles(25, 35, 34, 0, 35, 25, 26, 0),
	gsSP2Triangles(35, 26, 27, 0, 27, 34, 35, 0),
	gsSP2Triangles(34, 27, 36, 0, 27, 37, 36, 0),
	gsSP2Triangles(37, 27, 28, 0, 28, 30, 37, 0),
	gsSP2Triangles(30, 28, 29, 0, 31, 37, 30, 0),
	gsSP2Triangles(37, 31, 38, 0, 39, 38, 31, 0),
	gsSP2Triangles(31, 32, 39, 0, 40, 39, 32, 0),
	gsSP2Triangles(32, 41, 40, 0, 41, 32, 42, 0),
	gsSP2Triangles(43, 42, 32, 0, 43, 32, 33, 0),
	gsSP2Triangles(43, 33, 36, 0, 34, 36, 33, 0),
	gsSP2Triangles(36, 38, 43, 0, 38, 36, 37, 0),
	gsSP2Triangles(42, 43, 38, 0, 38, 44, 42, 0),
	gsSP2Triangles(38, 39, 44, 0, 40, 44, 39, 0),
	gsSP2Triangles(44, 40, 41, 0, 41, 42, 44, 0),
	gsSP2Triangles(16, 17, 23, 0, 18, 23, 17, 0),
	gsSP2Triangles(23, 18, 19, 0, 23, 19, 45, 0),
	gsSP2Triangles(20, 45, 19, 0, 20, 21, 45, 0),
	gsSP2Triangles(22, 45, 21, 0, 45, 22, 23, 0),
	gsSPEndDisplayList(),
};


Gfx mat_king_bobomb_king_bobomb_mats[] = {
	gsSPSetLights1(king_bobomb_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, king_bobomb_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_MIRROR, 6, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_king_bobomb_king_bobomb_mats[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_king_bobomb_king_bobomb_body[] = {
	gsSPSetLights1(king_bobomb_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, king_bobomb_body_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_MIRROR, 6, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_king_bobomb_king_bobomb_body[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx king_bobomb_kbob_arm_l_mesh_layer_4[] = {
	gsSPDisplayList(mat_king_bobomb_king_bobomb_mats),
	gsSPDisplayList(king_bobomb_kbob_arm_l_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_king_bobomb_king_bobomb_mats),
	gsSPEndDisplayList(),
};

Gfx king_bobomb_kbob_hand_l_skinned_mesh_layer_4[] = {
	gsSPDisplayList(mat_king_bobomb_king_bobomb_mats),
	gsSPDisplayList(king_bobomb_kbob_hand_l_skinned_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_king_bobomb_king_bobomb_mats),
	gsSPEndDisplayList(),
};

Gfx king_bobomb_kbob_hand_l_mesh_layer_4[] = {
	gsSPDisplayList(mat_king_bobomb_king_bobomb_mats),
	gsSPDisplayList(king_bobomb_kbob_hand_l_mesh_layer_4_tri_0),
	gsSPDisplayList(king_bobomb_kbob_hand_l_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_king_bobomb_king_bobomb_mats),
	gsSPEndDisplayList(),
};

Gfx king_bobomb_kbob_arm_r_mesh_layer_4[] = {
	gsSPDisplayList(mat_king_bobomb_king_bobomb_mats),
	gsSPDisplayList(king_bobomb_kbob_arm_r_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_king_bobomb_king_bobomb_mats),
	gsSPEndDisplayList(),
};

Gfx king_bobomb_kbob_hand_r_skinned_mesh_layer_4[] = {
	gsSPDisplayList(mat_king_bobomb_king_bobomb_mats),
	gsSPDisplayList(king_bobomb_kbob_hand_r_skinned_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_king_bobomb_king_bobomb_mats),
	gsSPEndDisplayList(),
};

Gfx king_bobomb_kbob_hand_r_mesh_layer_4[] = {
	gsSPDisplayList(mat_king_bobomb_king_bobomb_mats),
	gsSPDisplayList(king_bobomb_kbob_hand_r_mesh_layer_4_tri_0),
	gsSPDisplayList(king_bobomb_kbob_hand_r_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_king_bobomb_king_bobomb_mats),
	gsSPEndDisplayList(),
};

Gfx king_bobomb_kbob_body_dlist_mesh_layer_5[] = {
	gsSPDisplayList(mat_king_bobomb_king_bobomb_body),
	gsSPDisplayList(king_bobomb_kbob_body_dlist_mesh_layer_5_tri_0),
	gsSPDisplayList(mat_revert_king_bobomb_king_bobomb_body),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx king_bobomb_kbob_eye_mesh_layer_4[] = {
	gsSPDisplayList(mat_king_bobomb_king_bobomb_mats),
	gsSPDisplayList(king_bobomb_kbob_eye_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_king_bobomb_king_bobomb_mats),
	gsSPEndDisplayList(),
};

Gfx king_bobomb_kbob_crown_mesh_layer_4[] = {
	gsSPDisplayList(mat_king_bobomb_king_bobomb_mats),
	gsSPDisplayList(king_bobomb_kbob_crown_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_king_bobomb_king_bobomb_mats),
	gsSPEndDisplayList(),
};

Gfx king_bobomb_kbob_leg_l_mesh_layer_4[] = {
	gsSPDisplayList(mat_king_bobomb_king_bobomb_mats),
	gsSPDisplayList(king_bobomb_kbob_leg_l_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_king_bobomb_king_bobomb_mats),
	gsSPEndDisplayList(),
};

Gfx king_bobomb_kbob_foot_l_skinned_mesh_layer_4[] = {
	gsSPDisplayList(mat_king_bobomb_king_bobomb_mats),
	gsSPDisplayList(king_bobomb_kbob_foot_l_skinned_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_king_bobomb_king_bobomb_mats),
	gsSPEndDisplayList(),
};

Gfx king_bobomb_kbob_foot_l_mesh_layer_4[] = {
	gsSPDisplayList(mat_king_bobomb_king_bobomb_mats),
	gsSPDisplayList(king_bobomb_kbob_foot_l_mesh_layer_4_tri_0),
	gsSPDisplayList(king_bobomb_kbob_foot_l_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_king_bobomb_king_bobomb_mats),
	gsSPEndDisplayList(),
};

Gfx king_bobomb_kbob_leg_r_mesh_layer_4[] = {
	gsSPDisplayList(mat_king_bobomb_king_bobomb_mats),
	gsSPDisplayList(king_bobomb_kbob_leg_r_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_king_bobomb_king_bobomb_mats),
	gsSPEndDisplayList(),
};

Gfx king_bobomb_kbob_foot_r_skinned_mesh_layer_4[] = {
	gsSPDisplayList(mat_king_bobomb_king_bobomb_mats),
	gsSPDisplayList(king_bobomb_kbob_foot_r_skinned_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_king_bobomb_king_bobomb_mats),
	gsSPEndDisplayList(),
};

Gfx king_bobomb_kbob_foot_r_mesh_layer_4[] = {
	gsSPDisplayList(mat_king_bobomb_king_bobomb_mats),
	gsSPDisplayList(king_bobomb_kbob_foot_r_mesh_layer_4_tri_0),
	gsSPDisplayList(king_bobomb_kbob_foot_r_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_king_bobomb_king_bobomb_mats),
	gsSPEndDisplayList(),
};

Gfx king_bobomb_kbob_mustach_mesh_layer_4[] = {
	gsSPDisplayList(mat_king_bobomb_king_bobomb_mats),
	gsSPDisplayList(king_bobomb_kbob_mustach_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_king_bobomb_king_bobomb_mats),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

