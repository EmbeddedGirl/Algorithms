#if defined(__APPLE__)
#include <mach/mach_time.h>   /* mach_absolute_time(), mach_timebase_info() */

#if defined(__APPLE__) && defined(__has_builtin)
#  if __has_builtin(__builtin_available)
#    define HAVE_CLOCK_GETTIME_RUNTIME __builtin_available(macOS 10.12, iOS 10.0, tvOS 10.0, watchOS 3.0, *)
#  endif
#endif
#endif
