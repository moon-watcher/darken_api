#pragma once

#include "../darken/darken.h"

typedef struct {
    void ( *const init   ) ( deSystem_t *const, deSystem_f const, unsigned, unsigned );
    void ( *const update ) ( deSystem_t *const );
    void ( *const end    ) ( deSystem_t *const );
    void ( *const add    ) ( deSystem_t *const, void *const[]);
} deSystemAPI;

typedef struct {
    void ( *const init   ) ( deManager_t *const, unsigned, unsigned );
    void ( *const update ) ( deManager_t *const );
    void ( *const end    ) ( deManager_t *const );
} deManagerAPI;

typedef struct {
    deEntity_t *( *const new    ) ( const deState_t *, deManager_t *const );
    void        ( *const update ) ( deEntity_t *const );
    void        ( *const change ) ( deEntity_t *const, const deState_t *const );
    void        ( *const jump   ) ( deEntity_t *const, const deState_t *const );
    void        ( *const delete ) ( deEntity_t *const );
} deEntityAPI;

typedef struct {
    void ( *const exec   ) ( deEntity_t *const, deState_f const );
    void ( *const enter  ) ( deEntity_t *const );
    void ( *const update ) ( deEntity_t *const );
    void ( *const leave  ) ( deEntity_t *const );
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
