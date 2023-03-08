#pragma once

// My own DarkenAPI API

#include "../darken/darken.h"

typedef deEntity_t     $e_t;
typedef deManager_t    $m_t;
typedef deSystem_t     $s_t;
typedef deDefinition_t $de_t;
typedef deState_t      $st_t;

typedef struct {
    void ( *init   ) ( $s_t *const, const $de_t * );
    void ( *update ) ( $s_t *const );
    void ( *end    ) ( $s_t *const );
} DarkenAPI_System;

typedef struct {
    void ( *init   ) ( $m_t *const, const $de_t * );
    void ( *update ) ( $m_t *const );
    void ( *end    ) ( $m_t *const );
} DarkenAPI_Manager;

typedef struct {
    $e_t *( *new    ) ( const $de_t * );
    void  ( *state  ) ( $e_t *const, const $st_t *const );
    void  ( *delete ) ( $e_t *const );
} DarkenAPI_Entity;

typedef struct {
    DarkenAPI_System  *const system;
    DarkenAPI_Manager *const manager;
    DarkenAPI_Entity  *const entity;
    int  ( *init ) ( const $st_t* );
    void ( *end )  ( int );
} DarkenAPI;

const DarkenAPI         *const $;
const DarkenAPI_System  *const $s;
const DarkenAPI_Manager *const $m;
const DarkenAPI_Entity  *const $e;