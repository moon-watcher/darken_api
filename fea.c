// #include "include.h"
#include "fea.h"

const DarkenAPI         *const $  = & ( DarkenAPI         ) { darken, darken_end };
const DarkenAPI_System  *const $s = & ( DarkenAPI_System  ) { deSystem_init,  deSystem_update,    deSystem_end    };
const DarkenAPI_Manager *const $m = & ( DarkenAPI_Manager ) { deManager_init, deManager_update,   deManager_end   };
const DarkenAPI_Entity  *const $e = & ( DarkenAPI_Entity  ) { deEntity_new,   deEntity_set_state, deEntity_delete };
