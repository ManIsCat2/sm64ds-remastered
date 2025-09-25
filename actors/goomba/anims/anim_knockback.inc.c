static const s16 goomba_anim_knockback_values[] = {
	11, 0, 0, 3296, 3296, 4368, 4368, 63295, 63295, 
	13, -2, 0, 3328, 3328, 3808, 3808, 5808, 5808, 
	13, -2, 0, 6064, 6064, 65535, 65535, 6288, 6288, 
};

static const u16 goomba_anim_knockback_indices[] = {
	1, 0, 1, 1, 1, 2, 2, 3, 2, 
	5, 2, 7, 1, 9, 1, 10, 1, 11, 
	2, 12, 2, 14, 2, 16, 1, 18, 1, 
	19, 1, 20, 2, 21, 2, 23, 2, 25, 
};

static const struct Animation goomba_anim_knockback = {
	256,
	0,
	0,
	1,
	2,
	ANIMINDEX_NUMPARTS(goomba_anim_knockback_indices),
	goomba_anim_knockback_values,
	goomba_anim_knockback_indices,
	0,
};
