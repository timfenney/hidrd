#
# Copyright (C) 2010 Nikolai Kondrashov
#
# This file is part of hidrd.
#
# Hidrd is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# Hidrd is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with hidrd; if not, write to the Free Software
# Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

SUBDIRS = natv

hidrd_fmtdir = $(includedir)/hidrd/fmt

hidrd_fmt_HEADERS = \
    inst.h          \
    list.h          \
    natv.h

if ENABLE_FMT_XML
WITH_XML_DIRECTIVE = define
SUBDIRS += xml
hidrd_fmt_HEADERS += xml.h
else
WITH_XML_DIRECTIVE = undef
endif

if ENABLE_FMT_SPEC
WITH_SPEC_DIRECTIVE = define
SUBDIRS += spec
hidrd_fmt_HEADERS += spec.h
else
WITH_SPEC_DIRECTIVE = undef
endif

if ENABLE_FMT_CODE
WITH_CODE_DIRECTIVE = define
SUBDIRS += code
hidrd_fmt_HEADERS += code.h
else
WITH_CODE_DIRECTIVE = undef
endif

cfg.h: cfg.h.m4
	m4 -DWITH_XML_DIRECTIVE=$(WITH_XML_DIRECTIVE) \
       -DWITH_SPEC_DIRECTIVE=$(WITH_SPEC_DIRECTIVE) \
       -DWITH_CODE_DIRECTIVE=$(WITH_CODE_DIRECTIVE) \
        $< > $@

dist_noinst_DATA = cfg.h.m4
BUILT_SOURCES = cfg.h
CLEANFILES = $(BUILT_SOURCES)
nodist_hidrd_fmt_HEADERS = $(BUILT_SOURCES)
