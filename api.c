// #include "include.h"
#include "api.h"

#define SYSTEM   & ( DarkenAPI_System  ) { deSystem_init,  deSystem_update,    deSystem_end    }
#define MANAGER  & ( DarkenAPI_Manager ) { deManager_init, deManager_update,   deManager_end   }
#define ENTITY   & ( DarkenAPI_Entity  ) { deEntity_new,   deEntity_set_state, deEntity_delete }

const DarkenAPI         *const $  = &(DarkenAPI) { SYSTEM, MANAGER, ENTITY, darken, darken_end };
const DarkenAPI_System  *const $s = SYSTEM;
const DarkenAPI_Manager *const $m = MANAGER;
const DarkenAPI_Entity  *const $e = ENTITY;
