// This file is part of retro-gtk. License: GPL-3.0+.

#ifndef RETRO_GTK_VERSION_H
#define RETRO_GTK_VERSION_H

#if !defined(__RETRO_GTK_INSIDE__) && !defined(RETRO_GTK_COMPILATION)
# error "Only <retro-gtk.h> can be included directly."
#endif

/**
 * SECTION:retro-gtkversion
 * @short_description: retro-gtk version checking
 *
 * retro-gtk provides macros to check the version of the library
 * at compile-time
 */

/**
 * RETRO_GTK_MAJOR_VERSION:
 *
 * retro-gtk major version component (e.g. 1 if %RETRO_GTK_VERSION is 1.2.3)
 */
#define RETRO_GTK_MAJOR_VERSION (0)

/**
 * RETRO_GTK_MINOR_VERSION:
 *
 * retro-gtk minor version component (e.g. 2 if %RETRO_GTK_VERSION is 1.2.3)
 */
#define RETRO_GTK_MINOR_VERSION (18)

/**
 * RETRO_GTK_MICRO_VERSION:
 *
 * retro-gtk micro version component (e.g. 3 if %RETRO_GTK_VERSION is 1.2.3)
 */
#define RETRO_GTK_MICRO_VERSION (0)

/**
 * RETRO_GTK_VERSION
 *
 * retro-gtk version.
 */
#define RETRO_GTK_VERSION (0.18.0)

/**
 * RETRO_GTK_VERSION_S:
 *
 * retro-gtk version, encoded as a string, useful for printing and
 * concatenation.
 */
#define RETRO_GTK_VERSION_S "0.18.0"

#define RETRO_GTK_ENCODE_VERSION(major,minor,micro) \
        ((major) << 24 | (minor) << 16 | (micro) << 8)

/**
 * RETRO_GTK_VERSION_HEX:
 *
 * retro-gtk version, encoded as an hexadecimal number, useful for
 * integer comparisons.
 */
#define RETRO_GTK_VERSION_HEX \
        (RETRO_GTK_ENCODE_VERSION (RETRO_GTK_MAJOR_VERSION, RETRO_GTK_MINOR_VERSION, RETRO_GTK_MICRO_VERSION))

/**
 * RETRO_GTK_CHECK_VERSION:
 * @major: required major version
 * @minor: required minor version
 * @micro: required micro version
 *
 * Compile-time version checking. Evaluates to %TRUE if the version
 * of retro-gtk is greater than the required one.
 */
#define RETRO_GTK_CHECK_VERSION(major,minor,micro)   \
        (RETRO_GTK_MAJOR_VERSION > (major) || \
         (RETRO_GTK_MAJOR_VERSION == (major) && RETRO_GTK_MINOR_VERSION > (minor)) || \
         (RETRO_GTK_MAJOR_VERSION == (major) && RETRO_GTK_MINOR_VERSION == (minor) && \
          RETRO_GTK_MICRO_VERSION >= (micro)))

#endif /* RETRO_GTK_VERSION_H */
