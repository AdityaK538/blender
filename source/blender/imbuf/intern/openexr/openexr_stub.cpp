/* SPDX-FileCopyrightText: 2005 `Gernot Ziegler <gz@lysator.liu.se>`. All rights reserved.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later */

/** \file
 * \ingroup openexr
 */

#include "IMB_openexr.hh"

void *IMB_exr_get_handle()
{
  return nullptr;
}
void *IMB_exr_get_handle_name(const char * /*name*/)
{
  return nullptr;
}
void IMB_exr_add_channel(void * /*handle*/,
                         const char * /*layname*/,
                         const char * /*passname*/,
                         const char * /*view*/,
                         int /*xstride*/,
                         int /*ystride*/,
                         float * /*rect*/,
                         bool /*use_half_float*/)
{
}

bool IMB_exr_begin_read(void * /*handle*/,
                        const char * /*filepath*/,
                        int * /*width*/,
                        int * /*height*/,
                        const bool /*add_channels*/)
{
  return false;
}
bool IMB_exr_begin_write(void * /*handle*/,
                         const char * /*filepath*/,
                         int /*width*/,
                         int /*height*/,
                         const double /*ppm*/[2],
                         int /*compress*/,
                         int /*quality*/,
                         const StampData * /*stamp*/)
{
  return false;
}

bool IMB_exr_set_channel(void * /*handle*/,
                         const char * /*layname*/,
                         const char * /*passname*/,
                         int /*xstride*/,
                         int /*ystride*/,
                         float * /*rect*/)
{
  return false;
}

void IMB_exr_read_channels(void * /*handle*/) {}
void IMB_exr_write_channels(void * /*handle*/) {}

void IMB_exr_multilayer_convert(void * /*handle*/,
                                void * /*base*/,
                                void *(* /*addview*/)(void *base, const char *str),
                                void *(* /*addlayer*/)(void *base, const char *str),
                                void (* /*addpass*/)(void *base,
                                                     void *lay,
                                                     const char *str,
                                                     float *rect,
                                                     int totchan,
                                                     const char *chan_id,
                                                     const char *view))
{
}

void IMB_exr_close(void * /*handle*/) {}

void IMB_exr_add_view(void * /*handle*/, const char * /*name*/) {}
bool IMB_exr_has_multilayer(void * /*handle*/)
{
  return false;
}

bool IMB_exr_get_ppm(void * /*handle*/, double /*ppm*/[2])
{
  return false;
}
