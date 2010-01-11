/** @file
 * @brief HID report descriptor - option
 *
 * Copyright (C) 2010 Nikolai Kondrashov
 *
 * This file is part of hidrd.
 *
 * Hidrd is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Hidrd is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with hidrd; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * @author Nikolai Kondrashov <spbnick@gmail.com>
 *
 * @(#) $Id$
 */

#ifndef __HIDRD_STRM_OPT_H__
#define __HIDRD_STRM_OPT_H__

#include <stdbool.h>
#include "hidrd/strm/opt_type.h"

#ifdef __cplusplus
extern "C" {
#endif

/** Option */
typedef struct hidrd_strm_opt {
    const char             *name;
    hidrd_strm_opt_type     type;
    hidrd_strm_opt_value    value;
} hidrd_strm_opt;


/**
 * Check if an option is valid.
 *
 * @param opt   Option to check.
 *
 * @return True if the option is valid, false otherwise.
 */
extern bool hidrd_strm_opt_valid(const hidrd_strm_opt *opt);

/**
 * Get a string value.
 *
 * @param opt   Option pointer.
 *
 * @return Option value.
 */
extern const char *hidrd_strm_opt_get_string(const hidrd_strm_opt *opt);

/**
 * Get a boolean value.
 *
 * @param opt   Option pointer.
 *
 * @return Option value.
 */
extern bool hidrd_strm_opt_get_boolean(const hidrd_strm_opt *opt);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* __HIDRD_STRM_OPT_H__ */