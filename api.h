#pragma once

// My own DarkenAPI API

#include "../darken/darken.h"

typedef struct {
    void ( *init   ) ( deSystem_t *const, const deDefinition_t * );
    void ( *update ) ( deSystem_t *const );
    void ( *end    ) ( deSystem_t *const );
} DarkenAPI_System;

typedef struct {
    void ( *init   ) ( deManager_t *const, const deDefinition_t * );
    void ( *update ) ( deManager_t *const );
    void ( *end    ) ( deManager_t *const );
} DarkenAPI_Manager;

typedef struct {
    deEntity_t *( *new    ) ( const deDefinition_t* );
    void        ( *state  ) ( deEntity_t *const, const deState_t *const );
    void        ( *delete ) ( deEntity_t *const );
} DarkenAPI_Entity;

typedef struct {
    DarkenAPI_System  *const system;
    DarkenAPI_Manager *const manager;
    DarkenAPI_Entity  *const entity;
    int ( *init ) ( const deState_t* );
    void ( *end ) ( int );
} DarkenAPI;


const DarkenAPI         *const $;
const DarkenAPI_System  *const $s;
const DarkenAPI_Manager *const $m;
const DarkenAPI_Entity  *const $e;