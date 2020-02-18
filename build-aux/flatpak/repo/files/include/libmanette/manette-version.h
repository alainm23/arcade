/* libmanette-version.h.in
 *
 * Copyright (C) 2017 Adrien Plazas <kekun.plazas@laposte.net>
 *
 * This file is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2.1 of the
 * License, or (at your option) any later version.
 *
 * This file is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LIBMANETTE_VERSION_H
#define LIBMANETTE_VERSION_H

#if !defined(__MANETTE_INSIDE__) && !defined(MANETTE_COMPILATION)
# error "Only <libmanette.h> can be included directly."
#endif

/**
 * SECTION:libmanetteversion
 * @short_description: libmanette version checking
 *
 * libmanette provides macros to check the version of the library
 * at compile-time
 */

/**
 * LIBMANETTE_MAJOR_VERSION:
 *
 * libmanette major version component (e.g. 1 if %LIBMANETTE_VERSION is 1.2.3)
 */
#define LIBMANETTE_MAJOR_VERSION (0)

/**
 * LIBMANETTE_MINOR_VERSION:
 *
 * libmanette minor version component (e.g. 2 if %LIBMANETTE_VERSION is 1.2.3)
 */
#define LIBMANETTE_MINOR_VERSION (2)

/**
 * LIBMANETTE_MICRO_VERSION:
 *
 * libmanette micro version component (e.g. 3 if %LIBMANETTE_VERSION is 1.2.3)
 */
#define LIBMANETTE_MICRO_VERSION (3)

/**
 * LIBMANETTE_VERSION
 *
 * libmanette version.
 */
#define LIBMANETTE_VERSION (0.2.3)

/**
 * LIBMANETTE_VERSION_S:
 *
 * libmanette version, encoded as a string, useful for printing and
 * concatenation.
 */
#define LIBMANETTE_VERSION_S "0.2.3"

#define LIBMANETTE_ENCODE_VERSION(major,minor,micro) \
        ((major) << 24 | (minor) << 16 | (micro) << 8)

/**
 * LIBMANETTE_VERSION_HEX:
 *
 * libmanette version, encoded as an hexadecimal number, useful for
 * integer comparisons.
 */
#define LIBMANETTE_VERSION_HEX \
        (LIBMANETTE_ENCODE_VERSION (LIBMANETTE_MAJOR_VERSION, LIBMANETTE_MINOR_VERSION, LIBMANETTE_MICRO_VERSION))

/**
 * LIBMANETTE_CHECK_VERSION:
 * @major: required major version
 * @minor: required minor version
 * @micro: required micro version
 *
 * Compile-time version checking. Evaluates to %TRUE if the version
 * of libmanette is greater than the required one.
 */
#define LIBMANETTE_CHECK_VERSION(major,minor,micro)   \
        (LIBMANETTE_MAJOR_VERSION > (major) || \
         (LIBMANETTE_MAJOR_VERSION == (major) && LIBMANETTE_MINOR_VERSION > (minor)) || \
         (LIBMANETTE_MAJOR_VERSION == (major) && LIBMANETTE_MINOR_VERSION == (minor) && \
          LIBMANETTE_MICRO_VERSION >= (micro)))

#endif /* LIBMANETTE_VERSION_H */
