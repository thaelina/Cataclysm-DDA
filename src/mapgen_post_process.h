#pragma once
#ifndef CATA_SRC_MAPGEN_POST_PROCESS_H
#define CATA_SRC_MAPGEN_POST_PROCESS_H

#include "coords_fwd.h"

class map;

// Post-process generators applied after normal mapgen.
// Called from map::generate() dispatch site.
void GENERATOR_riot_damage( map &md, const tripoint_abs_omt &p, bool is_a_road );
void GENERATOR_aftershock_ruin( map &md, const tripoint_abs_omt &p );

#endif // CATA_SRC_MAPGEN_POST_PROCESS_H
