#pragma once

// My own DarkenAPI API

#include "../darken/darken.h"

typedef struct {
    void ( *init   ) ( deSystem_t *const, const deDefinition_t * );
    void ( *update ) ( deSystem_t *const );
    void ( *end    ) ( deSystem_t *const );
} DarkenAPI_deSystem_t;

typedef struct {
    void ( *init   ) ( deManager_t *const, const deDefinition_t * );
    void ( *update ) ( deManager_t *const );
    void ( *end    ) ( deManager_t *const );
} DarkenAPI_deManager_t;

typedef struct {
    deEntity_t  *( *new    ) ( const deDefinition_t* );
    void     ( *state  ) ( deEntity_t *const, const deState_t *const );
    void     ( *delete ) ( deEntity_t *const );
} DarkenAPI_deEntity_t;

typedef struct {
    DarkenAPI_deSystem_t  *const system;
    DarkenAPI_deManager_t *const manager;
    DarkenAPI_deEntity_t  *const entity;
    void ( *init ) ( const deDefinition_t* );
} DarkenAPI;


const DarkenAPI         *const $;
const DarkenAPI_deSystem_t  *const $s;
const DarkenAPI_deManager_t *const $m;
const DarkenAPI_deEntity_t  *const $e;