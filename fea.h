#pragma once

// FEA
// Freaking Estupid darken Api


#include "../darken/darken.h"

typedef deEntity_t     $E;
typedef deManager_t    $M;
typedef deSystem_t     $S;
typedef deDefinition_t $DEF;
typedef deState_t      $STA;

typedef struct {
    void ( *init   ) ( $S *const, const $DEF * );
    void ( *update ) ( $S *const );
    void ( *end    ) ( $S *const );
} DarkenAPI_System;

typedef struct {
    void ( *init   ) ( $M *const, const $DEF * );
    void ( *update ) ( $M *const );
    void ( *end    ) ( $M *const );
} DarkenAPI_Manager;

typedef struct {
    $E   *( *new    ) ( const $DEF * );
    void  ( *state  ) ( $E *const, const $STA *const );
    void  ( *delete ) ( $E *const );
} DarkenAPI_Entity;

typedef struct {
    int  ( *init ) ( const $STA * );
    void ( *end  ) ( int );
} DarkenAPI_fea;

const DarkenAPI_fea     *const $;
const DarkenAPI_System  *const $s;
const DarkenAPI_Manager *const $m;
const DarkenAPI_Entity  *const $e;