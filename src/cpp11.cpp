// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"
#include <R_ext/Visibility.h>

// marquee.cpp
cpp11::writable::list marquee_c(cpp11::strings text, cpp11::list_of<cpp11::list> styles, cpp11::logicals ignore_html);
extern "C" SEXP _marquee_marquee_c(SEXP text, SEXP styles, SEXP ignore_html) {
  BEGIN_CPP11
    return cpp11::as_sexp(marquee_c(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(text), cpp11::as_cpp<cpp11::decay_t<cpp11::list_of<cpp11::list>>>(styles), cpp11::as_cpp<cpp11::decay_t<cpp11::logicals>>(ignore_html)));
  END_CPP11
}
// marquee.cpp
cpp11::writable::list place_bullets(cpp11::strings type, cpp11::integers indent, cpp11::integers block, cpp11::logicals string_is_empty, cpp11::integers bullet_number, cpp11::list_of<cpp11::strings> bullets);
extern "C" SEXP _marquee_place_bullets(SEXP type, SEXP indent, SEXP block, SEXP string_is_empty, SEXP bullet_number, SEXP bullets) {
  BEGIN_CPP11
    return cpp11::as_sexp(place_bullets(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(type), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(indent), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(block), cpp11::as_cpp<cpp11::decay_t<cpp11::logicals>>(string_is_empty), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(bullet_number), cpp11::as_cpp<cpp11::decay_t<cpp11::list_of<cpp11::strings>>>(bullets)));
  END_CPP11
}

extern "C" {
static const R_CallMethodDef CallEntries[] = {
    {"_marquee_marquee_c",     (DL_FUNC) &_marquee_marquee_c,     3},
    {"_marquee_place_bullets", (DL_FUNC) &_marquee_place_bullets, 6},
    {NULL, NULL, 0}
};
}

extern "C" attribute_visible void R_init_marquee(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}
