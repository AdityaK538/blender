/* SPDX-FileCopyrightText: 2023 Blender Authors
 *
 * SPDX-License-Identifier: GPL-2.0-or-later */

/** \file
 * \ingroup freestyle
 */

#pragma once

#include "../BPy_UnaryPredicate1D.h"

///////////////////////////////////////////////////////////////////////////////////////////

extern PyTypeObject WithinImageBoundaryUP1D_Type;

#define BPy_WithinImageBoundaryUP1D_Check(v) \
  (PyObject_IsInstance((PyObject *)v, (PyObject *)&WithinImageBoundaryUP1D_Type))

/*---------------------------Python BPy_WithinImageBoundaryUP1D structure definition----------*/
typedef struct {
  BPy_UnaryPredicate1D py_up1D;
} BPy_WithinImageBoundaryUP1D;

///////////////////////////////////////////////////////////////////////////////////////////
