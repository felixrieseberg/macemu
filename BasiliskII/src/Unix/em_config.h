#undef SIZEOF_DOUBLE
#undef SIZEOF_FLOAT
#undef SIZEOF_INT
#undef SIZEOF_LONG
#undef SIZEOF_LONG_DOUBLE
#undef SIZEOF_LONG_LONG
#undef SIZEOF_SHORT
#undef SIZEOF_VOID_P
#define SIZEOF_DOUBLE 8
#define SIZEOF_FLOAT 4
#define SIZEOF_INT 4
#define SIZEOF_LONG 4
#define SIZEOF_LONG_DOUBLE 8
#define SIZEOF_LONG_LONG 8
#define SIZEOF_SHORT 2
#define SIZEOF_VOID_P 4
#undef __MACH__
#undef HAVE_CLOCK_GETTIME

#define USE_CPU_EMUL_SERVICES 1
#define EMSCRIPTEN 1

#undef AQUA
#undef HAVE_FRAMEWORK_COREFOUNDATION
#undef HAVE_MACH_EXCEPTIONS
#undef HAVE_LIBPOSIX4
#undef HAVE_LIBRT
#undef HAVE_MMAP_VM