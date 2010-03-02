/** @file
 * @brief HID report descriptor - XML format
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

#include <libxml/parser.h>
#include "hidrd/fmt/xml.h"

static bool
hidrd_xml_init(void)
{
    xmlInitParser();
    return true;
}


static void
hidrd_xml_clnp(void)
{
    xmlCleanupParser();
}


const hidrd_fmt hidrd_xml  = {
    .name   = "xml",
    .desc   = "XML",
    .init   = hidrd_xml_init,
    .clnp   = hidrd_xml_clnp,
    .src    = hidrd_xml_src,
    .snk    = hidrd_xml_snk
};


