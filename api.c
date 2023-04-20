#include "api.h"

static deManagerAPI *const manager_init(deManager_t *const a, unsigned b, unsigned c)
{
    deManager_init(a, b, c);
    return deManager;
}

static deManagerAPI *const manager_update(deManager_t *const a)
{
    deManager_update(a);
    return deManager;
}

static deManagerAPI *const manager_reset(deManager_t *const a)
{
    deManager_reset(a);
    return deManager;
}

static deManagerAPI *const manager_end(deManager_t *const a)
{
    deManager_end(a);
    return deManager;
}

static deSystemAPI *const system_init(deSystem_t *const a, deSystem_f const b, unsigned c, unsigned d)
{
    deSystem_init(a, b, c, d);
    return deSystem;
}

static deSystemAPI *const system_update(deSystem_t *const a)
{
    deSystem_update(a);
    return deSystem;
}

static deSystemAPI *const system_end(deSystem_t *const a)
{
    deSystem_end(a);
    return deSystem;
}

static deSystemAPI *const system_add(deSystem_t *const a, void *const b[])
{
    deSystem_add(a, b);
    return deSystem;
}

static deEntityAPI *const entity_update(deEntity_t *const a)
{
    deEntity_update(a);
    return deEntity;
}

static deEntityAPI *const entity_change(deEntity_t *const a, const deState_t *const b)
{
    deEntity_change(a, b);
    return deEntity;
}

static deEntityAPI *const entity_set(deEntity_t *const a, const deState_t *const b)
{
    deEntity_set(a, b);
    return deEntity;
}

static deEntityAPI *const entity_delete(deEntity_t *const a)
{
    deEntity_delete(a);
    return deEntity;
}

static deStateAPI *const state_exec(deEntity_t *const a, deState_f const b)
{
    deState_exec(a, b);
    return deState;
}

static deStateAPI *const state_enter(deEntity_t *const a)
{
    deState_enter(a);
    return deState;
}

static deStateAPI *const state_update(deEntity_t *const a)
{
    deState_update(a);
    return deState;
}

static deStateAPI *const state_leave(deEntity_t *const a)
{
    deState_leave(a);
    return deState;
}

const deSystemAPI  *const deSystem  = & ( deSystemAPI  ) { system_init,  system_update,  system_end,    system_add                 };
const deManagerAPI *const deManager = & ( deManagerAPI ) { manager_init, manager_update, manager_reset, manager_end                };
const deEntityAPI  *const deEntity  = & ( deEntityAPI  ) { deEntity_new, entity_update,  entity_change, entity_set,  entity_delete };
const deStateAPI   *const deState   = & ( deStateAPI   ) { state_exec,   state_enter,    state_update,  state_leave                };
const DarkenAPI    *const darkEn    = & ( DarkenAPI    ) { darken,       darken_end                                                };