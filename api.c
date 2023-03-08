#include "include.h"
#include "api.h"

#define SYSTEM   & ( DarkenAPI_deSystem_t  ) { deSystem_init,  deSystem_update,    deSystem_end    }
#define MANAGER  & ( DarkenAPI_deManager_t ) { deManager_init, deManager_update,   deManager_end   }
#define ENTITY   & ( DarkenAPI_deEntity_t  ) { deEntity_new,   deEntity_set_state, deEntity_delete }

const DarkenAPI         *const $  = &(DarkenAPI) { SYSTEM, MANAGER, ENTITY, darken };
const DarkenAPI_deSystem_t  *const $s = SYSTEM;
const DarkenAPI_deManager_t *const $m = MANAGER;
const DarkenAPI_deEntity_t  *const $e = ENTITY;
