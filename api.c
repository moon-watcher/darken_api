#include "include.h"
#include "api.h"

#define SYSTEM   & ( DarkenAPI_System  ) { system_init,  system_update,  system_destroy  }
#define MANAGER  & ( DarkenAPI_Manager ) { manager_init, manager_update, manager_destroy }
#define ENTITY   & ( DarkenAPI_Entity  ) { entity_new,   entity_state,   entity_delete   }

const DarkenAPI         *const $  = &(DarkenAPI) { SYSTEM, MANAGER, ENTITY, darken };
const DarkenAPI_System  *const $s = SYSTEM;
const DarkenAPI_Manager *const $m = MANAGER;
const DarkenAPI_Entity  *const $e = ENTITY;
