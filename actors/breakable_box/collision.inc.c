// Breakable Box

const Collision breakable_box_seg8_collision_08012D70[] = {
    COL_INIT(),
    COL_VERTEX_INIT(8),
	COL_VERTEX(-102, 0, -102),
	COL_VERTEX(-102, 0, 102),
	COL_VERTEX(-102, 205, 102),
	COL_VERTEX(-102, 205, -102),
	COL_VERTEX(102, 0, 102),
	COL_VERTEX(102, 0, -102),
	COL_VERTEX(102, 205, -102),
	COL_VERTEX(102, 205, 102),
    COL_TRI_INIT(SURFACE_NO_CAM_COLLISION, 12),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(4, 5, 6),
	COL_TRI(4, 6, 7),
	COL_TRI(0, 5, 4),
	COL_TRI(0, 4, 1),
	COL_TRI(3, 6, 5),
	COL_TRI(3, 5, 0),
	COL_TRI(2, 7, 6),
	COL_TRI(2, 6, 3),
	COL_TRI(1, 4, 7),
	COL_TRI(1, 7, 2),
    COL_TRI_STOP(),
    COL_END(),
};

UNUSED static const u32 breakable_box_unused_1 = 0;
UNUSED static const u64 breakable_box_unused_2 = 0;
