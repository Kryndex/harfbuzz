/*
 * Copyright © 2017  Google, Inc.
 *
 *  This is part of HarfBuzz, a text shaping library.
 *
 * Permission is hereby granted, without written agreement and without
 * license or royalty fees, to use, copy, modify, and distribute this
 * software and its documentation for any purpose, provided that the
 * above copyright notice and the following two paragraphs appear in
 * all copies of this software.
 *
 * IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
 * ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN
 * IF THE COPYRIGHT HOLDER HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 *
 * THE COPYRIGHT HOLDER SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING,
 * BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE COPYRIGHT HOLDER HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 *
 * Red Hat Author(s): Behdad Esfahbod
 */

#ifndef HB_OT_H_IN
#error "Include <hb-ot.h> instead."
#endif

#ifndef HB_OT_VAR_H
#define HB_OT_VAR_H

#include "hb.h"

HB_BEGIN_DECLS


#define HB_OT_TAG_fvar HB_TAG('f','v','a','r')
#define HB_OT_TAG_avar HB_TAG('a','v','a','r')


/*
 * fvar / avar
 */

/**
 * hb_ot_var_axis_t:
 *
 * Since: 1.4.2
 */
typedef struct hb_ot_var_axis_t {
  hb_tag_t tag;
  unsigned int name_id;
  double min_value;
  double def_value;
  double max_value;
} hb_ot_var_axis_t;

HB_EXTERN hb_bool_t
hb_ot_var_has_data (hb_face_t *face);

#if 0

HB_EXTERN unsigned int
Xhb_ot_var_get_axes (hb_face_t        *face,
		    unsigned int      start_offset,
		    unsigned int     *axes_count /* IN/OUT */,
		    hb_ot_var_axis_t *axes_array /* OUT */);

/* TODO Add "find_axis", etc API? Are they needed at all? */

HB_EXTERN unsigned int
Xhb_ot_var_get_named_instances (hb_face_t        *face, ... );

#endif


HB_END_DECLS

#endif /* HB_OT_VAR_H */