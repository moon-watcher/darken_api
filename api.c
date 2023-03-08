#include "include.h"
#include "api.h"

#define SYSTEM   & ( DarkenAPI_deSystem_t  ) { de_system_init,  de_system_update,    de_system_end    }
#define MANAGER  & ( DarkenAPI_deManager_t ) { de_manager_init, de_manager_update,   de_manager_end   }
#define ENTITY   & ( DarkenAPI_deEntity_t  ) { de_entity_new,   de_entity_set_state, de_entity_delete }

const DarkenAPI         *const $  = &(DarkenAPI) { SYSTEM, MANAGER, ENTITY, darken };
const DarkenAPI_deSystem_t  *const $s = SYSTEM;
const DarkenAPI_deManager_t *const $m = MANAGER;
const DarkenAPI_deEntity_t  *const $e = ENTITY;
