#include "api.h"

const deSystemAPI  *const deSystem  = & ( deSystemAPI  ) { deSystem_init,  deSystem_update,  deSystem_end,   deSystem_add };
const deManagerAPI *const deManager = & ( deManagerAPI ) { deManager_init, deManager_update, deManager_end   };
const deEntityAPI  *const deEntity  = & ( deEntityAPI  ) { deEntity_new,   deEntity_update,  deEntity_change, deEntity_jump, deEntity_delete };
const DarkenAPI    *const darkEn    = & ( DarkenAPI    ) { darken, darken_end };
