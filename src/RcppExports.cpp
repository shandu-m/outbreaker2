// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// copy_values
void copy_values(Rcpp::IntegerVector a, Rcpp::IntegerVector b);
RcppExport SEXP outbreaker2_copy_values(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type b(bSEXP);
    copy_values(a, b);
    return R_NilValue;
END_RCPP
}
// cpp_ll_genetic
double cpp_ll_genetic(Rcpp::List data, Rcpp::List param, SEXP i);
RcppExport SEXP outbreaker2_cpp_ll_genetic(SEXP dataSEXP, SEXP paramSEXP, SEXP iSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::traits::input_parameter< Rcpp::List >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type param(paramSEXP);
    Rcpp::traits::input_parameter< SEXP >::type i(iSEXP);
    __result = Rcpp::wrap(cpp_ll_genetic(data, param, i));
    return __result;
END_RCPP
}
// cpp_ll_timing_infections
double cpp_ll_timing_infections(Rcpp::List data, Rcpp::List param, SEXP i);
RcppExport SEXP outbreaker2_cpp_ll_timing_infections(SEXP dataSEXP, SEXP paramSEXP, SEXP iSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::traits::input_parameter< Rcpp::List >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type param(paramSEXP);
    Rcpp::traits::input_parameter< SEXP >::type i(iSEXP);
    __result = Rcpp::wrap(cpp_ll_timing_infections(data, param, i));
    return __result;
END_RCPP
}
// cpp_ll_timing_sampling
double cpp_ll_timing_sampling(Rcpp::List data, Rcpp::List param, SEXP i);
RcppExport SEXP outbreaker2_cpp_ll_timing_sampling(SEXP dataSEXP, SEXP paramSEXP, SEXP iSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::traits::input_parameter< Rcpp::List >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type param(paramSEXP);
    Rcpp::traits::input_parameter< SEXP >::type i(iSEXP);
    __result = Rcpp::wrap(cpp_ll_timing_sampling(data, param, i));
    return __result;
END_RCPP
}
// cpp_ll_reporting
double cpp_ll_reporting(Rcpp::List data, Rcpp::List param, SEXP i);
RcppExport SEXP outbreaker2_cpp_ll_reporting(SEXP dataSEXP, SEXP paramSEXP, SEXP iSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::traits::input_parameter< Rcpp::List >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type param(paramSEXP);
    Rcpp::traits::input_parameter< SEXP >::type i(iSEXP);
    __result = Rcpp::wrap(cpp_ll_reporting(data, param, i));
    return __result;
END_RCPP
}
// cpp_ll_timing
double cpp_ll_timing(Rcpp::List data, Rcpp::List param, SEXP i);
RcppExport SEXP outbreaker2_cpp_ll_timing(SEXP dataSEXP, SEXP paramSEXP, SEXP iSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::traits::input_parameter< Rcpp::List >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type param(paramSEXP);
    Rcpp::traits::input_parameter< SEXP >::type i(iSEXP);
    __result = Rcpp::wrap(cpp_ll_timing(data, param, i));
    return __result;
END_RCPP
}
// cpp_ll_all
double cpp_ll_all(Rcpp::List data, Rcpp::List param, SEXP i);
RcppExport SEXP outbreaker2_cpp_ll_all(SEXP dataSEXP, SEXP paramSEXP, SEXP iSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::traits::input_parameter< Rcpp::List >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type param(paramSEXP);
    Rcpp::traits::input_parameter< SEXP >::type i(iSEXP);
    __result = Rcpp::wrap(cpp_ll_all(data, param, i));
    return __result;
END_RCPP
}
// cpp_move_mu
void cpp_move_mu(Rcpp::List data, Rcpp::List param, Rcpp::List config);
RcppExport SEXP outbreaker2_cpp_move_mu(SEXP dataSEXP, SEXP paramSEXP, SEXP configSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::List >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type param(paramSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type config(configSEXP);
    cpp_move_mu(data, param, config);
    return R_NilValue;
END_RCPP
}
// cpp_move_t_inf
void cpp_move_t_inf(Rcpp::List data, Rcpp::List param);
RcppExport SEXP outbreaker2_cpp_move_t_inf(SEXP dataSEXP, SEXP paramSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::List >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type param(paramSEXP);
    cpp_move_t_inf(data, param);
    return R_NilValue;
END_RCPP
}