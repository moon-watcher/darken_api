#pragma once

#include "../darken/darken.h"

typedef struct deSystemAPI  deSystemAPI;
typedef struct deManagerAPI deManagerAPI;
typedef struct deEntityAPI  deEntityAPI;
typedef struct deStateAPI   deStateAPI;

typedef struct deSystemAPI {
    deSystemAPI *( *const init   ) ( deSystem_t *const, deSystem_f const, unsigned, unsigned );
    deSystemAPI *( *const update ) ( deSystem_t *const );
    deSystemAPI *( *const end    ) ( deSystem_t *const );
    deSystemAPI *( *const add    ) ( deSystem_t *const, void *const[]);
} deSystemAPI;

typedef struct deManagerAPI {
    deManagerAPI *( *const init   ) ( deManager_t *const, unsigned, unsigned );
    deManagerAPI *( *const update ) ( deManager_t *const );
    deManagerAPI *( *const reset  ) ( deManager_t *const );
    deManagerAPI *( *const end    ) ( deManager_t *const );
} deManagerAPI;

typedef struct deEntityAPI {
    deEntity_t  *( *const new    ) ( const deState_t *, deManager_t *const );
    deEntityAPI *( *const update ) ( deEntity_t *const );
    deEntityAPI *( *const change ) ( deEntity_t *const, const deState_t *const );
    deEntityAPI *( *const jump   ) ( deEntity_t *const, const deState_t *const );
    deEntityAPI *( *const delete ) ( deEntity_t *const );
} deEntityAPI;

typedef struct deStateAPI {
    deStateAPI *( *const exec   ) ( deEntity_t *const, deState_f const );
    deStateAPI *( *const enter  ) ( deEntity_t *const );
    deStateAPI *( *const update ) ( deEntity_t *const );
    deStateAPI *( *const leave  ) ( deEntity_t *const );
} deStateAPI;

typedef struct {
    int  ( *const start ) ( deState_t *const );
    void ( *const end   ) ( int );
} DarkenAPI;

const deSystemAPI  *const deSystem;
const deManagerAPI *const deManager;
const deEntityAPI  *const deEntity;
const deStateAPI   *const deState;
const DarkenAPI    *const darkEn;
