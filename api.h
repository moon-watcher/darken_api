#pragma once

// My own DarkenAPI API

#include "../darken/darken.h"

typedef struct {
    void ( *init   ) ( System *const, const Systemdef * );
    void ( *update ) ( System *const );
    void ( *end    ) ( System *const );
} DarkenAPI_System;

typedef struct {
    void ( *init   ) ( Manager *const, const Managerdef * );
    void ( *update ) ( Manager *const );
    void ( *end    ) ( Manager *const );
} DarkenAPI_Manager;

typedef struct {
    Entity  *( *new    ) ( const Entitydef* );
    void     ( *state  ) ( Entity *const, const State *const );
    void     ( *delete ) ( Entity *const );
} DarkenAPI_Entity;

typedef struct {
    DarkenAPI_System  *const system;
    DarkenAPI_Manager *const manager;
    DarkenAPI_Entity  *const entity;
    void ( *init ) ( const Entitydef* );
} DarkenAPI;


const DarkenAPI         *const $;
const DarkenAPI_System  *const $s;
const DarkenAPI_Manager *const $m;
const DarkenAPI_Entity  *const $e;