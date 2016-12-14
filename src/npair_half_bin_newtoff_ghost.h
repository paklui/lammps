/* -*- c++ -*- ----------------------------------------------------------
   LAMMPS - Large-scale Atomic/Molecular Massively Parallel Simulator
   http://lammps.sandia.gov, Sandia National Laboratories
   Steve Plimpton, sjplimp@sandia.gov

   Copyright (2003) Sandia Corporation.  Under the terms of Contract
   DE-AC04-94AL85000 with Sandia Corporation, the U.S. Government retains
   certain rights in this software.  This software is distributed under
   the GNU General Public License.

   See the README file in the top-level LAMMPS directory.
------------------------------------------------------------------------- */

#ifdef NPAIR_CLASS

NPairStyle(half/bin/newtoff/ghost,
           NPairHalfBinNewtoffGhost,
           NP_HALF | NP_BIN | NP_NEWTOFF | NP_GHOST | NP_ORTHO | NP_TRI)

#else

#ifndef LMP_NPAIR_HALF_BIN_NEWTOFF_GHOST_H
#define LMP_NPAIR_HALF_BIN_NEWTOFF_GHOST_H

#include "npair.h"

namespace LAMMPS_NS {

class NPairHalfBinNewtoffGhost : public NPair {
 public:
  NPairHalfBinNewtoffGhost(class LAMMPS *);
  ~NPairHalfBinNewtoffGhost() {}
  void build(class NeighList *);
};

}

#endif
#endif

/* ERROR/WARNING messages:

*/
