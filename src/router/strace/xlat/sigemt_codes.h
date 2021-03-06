/* Generated by ./xlat/gen.sh from ./xlat/sigemt_codes.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(EMT_TAGOVF) || (defined(HAVE_DECL_EMT_TAGOVF) && HAVE_DECL_EMT_TAGOVF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EMT_TAGOVF) == (1), "EMT_TAGOVF != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EMT_TAGOVF 1
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat sigemt_codes[];

# else

static const struct xlat_data sigemt_codes_xdata[] = {
 XLAT(EMT_TAGOVF),
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat sigemt_codes[1] = { {
 .data = sigemt_codes_xdata,
 .size = ARRAY_SIZE(sigemt_codes_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
