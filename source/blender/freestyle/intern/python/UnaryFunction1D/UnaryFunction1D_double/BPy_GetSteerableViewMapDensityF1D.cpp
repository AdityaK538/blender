/* SPDX-FileCopyrightText: 2004-2023 Blender Authors
 *
 * SPDX-License-Identifier: GPL-2.0-or-later */

/** \file
 * \ingroup freestyle
 */

#include "BPy_GetSteerableViewMapDensityF1D.h"

#include "../../../stroke/AdvancedFunctions1D.h"
#include "../../BPy_Convert.h"
#include "../../BPy_IntegrationType.h"

using namespace Freestyle;

///////////////////////////////////////////////////////////////////////////////////////////

//------------------------INSTANCE METHODS ----------------------------------

PyDoc_STRVAR(
    /* Wrap. */
    GetSteerableViewMapDensityF1D___doc__,
    "Class hierarchy: :class:`freestyle.types.UnaryFunction1D` > "
    ":class:`freestyle.types.UnaryFunction1DDouble` > :class:`GetSteerableViewMapDensityF1D`\n"
    "\n"
    ".. method:: __init__(level, integration_type=IntegrationType.MEAN, sampling=2.0)\n"
    "\n"
    "   Builds a GetSteerableViewMapDensityF1D object.\n"
    "\n"
    "   :arg level: The level of the pyramid from which the pixel must be\n"
    "      read.\n"
    "   :type level: int\n"
    "   :arg integration_type: The integration method used to compute a single value\n"
    "      from a set of values.\n"
    "   :type integration_type: :class:`freestyle.types.IntegrationType`\n"
    "   :arg sampling: The resolution used to sample the chain: the\n"
    "      corresponding 0D function is evaluated at each sample point and\n"
    "      the result is obtained by combining the resulting values into a\n"
    "      single one, following the method specified by integration_type.\n"
    "   :type sampling: float\n"
    "\n"
    ".. method:: __call__(inter)\n"
    "\n"
    "   Returns the density of the ViewMap for a given Interface1D. The\n"
    "   density of each :class:`freestyle.types.FEdge` is evaluated in the\n"
    "   proper steerable :class:`freestyle.types.ViewMap` depending on its\n"
    "   orientation.\n"
    "\n"
    "   :arg inter: An Interface1D object.\n"
    "   :type inter: :class:`freestyle.types.Interface1D`\n"
    "   :return: The density of the ViewMap for a given Interface1D.\n"
    "   :rtype: float\n");

static int GetSteerableViewMapDensityF1D___init__(BPy_GetSteerableViewMapDensityF1D *self,
                                                  PyObject *args,
                                                  PyObject *kwds)
{
  static const char *kwlist[] = {"level", "integration_type", "sampling", nullptr};
  PyObject *obj = nullptr;
  int i;
  float f = 2.0;

  if (!PyArg_ParseTupleAndKeywords(
          args, kwds, "i|O!f", (char **)kwlist, &i, &IntegrationType_Type, &obj, &f))
  {
    return -1;
  }
  IntegrationType t = (obj) ? IntegrationType_from_BPy_IntegrationType(obj) : MEAN;
  self->py_uf1D_double.uf1D_double = new Functions1D::GetSteerableViewMapDensityF1D(i, t, f);
  return 0;
}

/*-----------------------BPy_GetSteerableViewMapDensityF1D type definition ----------------------*/

PyTypeObject GetSteerableViewMapDensityF1D_Type = {
    /*ob_base*/ PyVarObject_HEAD_INIT(nullptr, 0)
    /*tp_name*/ "GetSteerableViewMapDensityF1D",
    /*tp_basicsize*/ sizeof(BPy_GetSteerableViewMapDensityF1D),
    /*tp_itemsize*/ 0,
    /*tp_dealloc*/ nullptr,
    /*tp_vectorcall_offset*/ 0,
    /*tp_getattr*/ nullptr,
    /*tp_setattr*/ nullptr,
    /*tp_as_async*/ nullptr,
    /*tp_repr*/ nullptr,
    /*tp_as_number*/ nullptr,
    /*tp_as_sequence*/ nullptr,
    /*tp_as_mapping*/ nullptr,
    /*tp_hash*/ nullptr,
    /*tp_call*/ nullptr,
    /*tp_str*/ nullptr,
    /*tp_getattro*/ nullptr,
    /*tp_setattro*/ nullptr,
    /*tp_as_buffer*/ nullptr,
    /*tp_flags*/ Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
    /*tp_doc*/ GetSteerableViewMapDensityF1D___doc__,
    /*tp_traverse*/ nullptr,
    /*tp_clear*/ nullptr,
    /*tp_richcompare*/ nullptr,
    /*tp_weaklistoffset*/ 0,
    /*tp_iter*/ nullptr,
    /*tp_iternext*/ nullptr,
    /*tp_methods*/ nullptr,
    /*tp_members*/ nullptr,
    /*tp_getset*/ nullptr,
    /*tp_base*/ &UnaryFunction1DDouble_Type,
    /*tp_dict*/ nullptr,
    /*tp_descr_get*/ nullptr,
    /*tp_descr_set*/ nullptr,
    /*tp_dictoffset*/ 0,
    /*tp_init*/ (initproc)GetSteerableViewMapDensityF1D___init__,
    /*tp_alloc*/ nullptr,
    /*tp_new*/ nullptr,
};

///////////////////////////////////////////////////////////////////////////////////////////
