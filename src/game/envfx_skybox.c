#include <ultra64.h>

#include "camera.h"
#include "skybox_3d.h"

#define DISTANCE 0.97f

Gfx *sky_3d(s32 callContext, struct GraphNode *node, Mat4 mtxf) {
    switch (callContext) {
    case GEO_CONTEXT_RENDER:
      {
        struct GraphNodeGenerated *graphNode = (struct GraphNodeGenerated *) node;

        Gfx *dlE = alloc_display_list(4 * sizeof(Gfx));
        Gfx *dlS = dlE;
        Mtx *mtx = alloc_display_list(sizeof(Mtx));

        f32 x = (gCamera->pos[0] * DISTANCE);
        f32 y = (gCamera->pos[1] * DISTANCE);
        f32 z = (gCamera->pos[2] * DISTANCE);

        guTranslate(mtx, x, y, z);
        gSPMatrix(dlE++, mtx, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH);
        
        if ((gCurrLevelNum == LEVEL_BITDW) || (gCurrLevelNum == LEVEL_BOWSER_1)) {
            gSPDisplayList(dlE++, &bitdw_skybox);
        } else if ((gCurrLevelNum == LEVEL_BITS) || (gCurrLevelNum == LEVEL_BOWSER_3)) {
            gSPDisplayList(dlE++, &bits_skybox);
        }

        gSPPopMatrix(dlE++, G_MTX_MODELVIEW);
        gSPEndDisplayList(dlE);

        graphNode->fnNode.node.flags = (graphNode->fnNode.node.flags & 0xFF) | 0x000;
        return dlS;
      }
    }

    return NULL;
}

#undef DISTANCE
