#include "api.h"

static deManagerAPI *manager_init(deManager_t *const a, unsigned b, unsigned c)
{
    deManager_init(a, b, c);
    return (deManagerAPI *) deManager;
}

static deManagerAPI *manager_update(deManager_t *const a)
{
    deManager_update(a);
    return (deManagerAPI *) deManager;
}

static deManagerAPI *manager_reset(deManager_t *const a)
{
    deManager_reset(a);
    return (deManagerAPI *) deManager;
}

static deManagerAPI *manager_end(deManager_t *const a)
{
    deManager_end(a);
    return (deManagerAPI *) deManager;
}

static deSystemAPI *system_init(deSystem_t *const a, deSystem_f const b, unsigned c, unsigned d)
{
    deSystem_init(a, b, c, d);
    return (deSystemAPI *) deSystem;
}

static deSystemAPI *system_update(deSystem_t *const a)
{
    deSystem_update(a);
    return (deSystemAPI *) deSystem;
}

static deSystemAPI *system_end(deSystem_t *const a)
{
    deSystem_end(a);
    return (deSystemAPI *) deSystem;
}

static deSystemAPI *system_add(deSystem_t *const a, void *const b[])
{
    deSystem_add(a, b);
    return (deSystemAPI *) deSystem;
}

static deEntityAPI *entity_update(deEntity_t *const a)
{
    deEntity_update(a);
    return (deEntityAPI *) deEntity;
}

static deEntityAPI *entity_change(deEntity_t *const a, const deState_t *const b)
{
    deEntity_change(a, b);
    return (deEntityAPI *) deEntity;
}

static deEntityAPI *entity_set(deEntity_t *const a, const deState_t *const b)
{
    deEntity_set(a, b);
    return (deEntityAPI *) deEntity;
}

static deEntityAPI *entity_delete(deEntity_t *const a)
{
    deEntity_delete(a);
    return (deEntityAPI *) deEntity;
}

static deStateAPI *state_exec(deEntity_t *const a, deState_f const b)
{
    deState_exec(a, b);
    return (deStateAPI *) deState;
}

static deStateAPI *state_enter(deEntity_t *const a)
{
    deState_enter(a);
    return (deStateAPI *) deState;
}

static deStateAPI *state_update(deEntity_t *const a)
{
    deState_update(a);
    return (deStateAPI *) deState;
}

static deStateAPI *state_leave(deEntity_t *const a)
{
    deState_leave(a);
    return (deStateAPI *) deState;
}

const deSystemAPI  *const deSystem  = & ( deSystemAPI  ) { system_init,  system_update,  system_end,    system_add                 };
const deManagerAPI *const deManager = & ( deManagerAPI ) { manager_init, manager_update, manager_reset, manager_end                };
const deEntityAPI  *const deEntity  = & ( deEntityAPI  ) { deEntity_new, entity_update,  entity_change, entity_set,  entity_delete };
const deStateAPI   *const deState   = & ( deStateAPI   ) { state_exec,   state_enter,    state_update,  state_leave                };
const DarkenAPI    *const darkEn    = & ( DarkenAPI    ) { darken,       darken_end                                                };