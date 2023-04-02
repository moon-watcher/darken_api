#pragma once

#include "../darken/darken.h"

typedef struct {
    void ( *init   ) ( deSystem_t *const, deSystem_f, unsigned, unsigned );
    void ( *update ) ( deSystem_t *const );
    void ( *end    ) ( deSystem_t *const );
    void ( *add    ) ( deSystem_t *const, void *const[]);
} deSystemAPI;

typedef struct {
    void ( *init   ) ( deManager_t *const, unsigned, unsigned );
    void ( *update ) ( deManager_t *const );
    void ( *end    ) ( deManager_t *const );
} deManagerAPI;

typedef struct {
    deEntity_t *( *new    ) ( const deState_t *, deManager_t *const );
    void        ( *update ) ( deEntity_t *const );
    void        ( *change ) ( deEntity_t *const, const deState_t *const );
    void        ( *jump   ) ( deEntity_t *const, const deState_t *const );
    void        ( *delete ) ( deEntity_t *const );
} deEntityAPI;

typedef struct {
    int  ( *start ) ( deState_t *const );
    void ( *end   ) ( int );
} DarkenAPI;

const deSystemAPI  *const deSystem;
const deManagerAPI *const deManager;
const deEntityAPI  *const deEntity;
const DarkenAPI    *const darkEn;
