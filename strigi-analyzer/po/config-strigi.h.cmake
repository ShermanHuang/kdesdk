#cmakedefine STRIGI_NEEDS_SIGNED_CHAR_01 1
#ifdef STRIGI_NEEDS_SIGNED_CHAR_01
#define STRIGI_ENDANALYZER_RETVAL signed char
#else
#define STRIGI_ENDANALYZER_RETVAL char
#endif
