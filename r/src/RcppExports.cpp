// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "rrrow_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// bla
IntegerVector bla();
RcppExport SEXP _rrrow_bla() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(bla());
    return rcpp_result_gen;
END_RCPP
}
// int8
xptr_DataType int8();
RcppExport SEXP _rrrow_int8() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(int8());
    return rcpp_result_gen;
END_RCPP
}
// int16
xptr_DataType int16();
RcppExport SEXP _rrrow_int16() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(int16());
    return rcpp_result_gen;
END_RCPP
}
// int32
xptr_DataType int32();
RcppExport SEXP _rrrow_int32() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(int32());
    return rcpp_result_gen;
END_RCPP
}
// int64
xptr_DataType int64();
RcppExport SEXP _rrrow_int64() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(int64());
    return rcpp_result_gen;
END_RCPP
}
// uint8
xptr_DataType uint8();
RcppExport SEXP _rrrow_uint8() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(uint8());
    return rcpp_result_gen;
END_RCPP
}
// uint16
xptr_DataType uint16();
RcppExport SEXP _rrrow_uint16() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(uint16());
    return rcpp_result_gen;
END_RCPP
}
// uint32
xptr_DataType uint32();
RcppExport SEXP _rrrow_uint32() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(uint32());
    return rcpp_result_gen;
END_RCPP
}
// uint64
xptr_DataType uint64();
RcppExport SEXP _rrrow_uint64() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(uint64());
    return rcpp_result_gen;
END_RCPP
}
// float16
xptr_DataType float16();
RcppExport SEXP _rrrow_float16() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(float16());
    return rcpp_result_gen;
END_RCPP
}
// float32
xptr_DataType float32();
RcppExport SEXP _rrrow_float32() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(float32());
    return rcpp_result_gen;
END_RCPP
}
// float64
xptr_DataType float64();
RcppExport SEXP _rrrow_float64() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(float64());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rrrow_bla", (DL_FUNC) &_rrrow_bla, 0},
    {"_rrrow_int8", (DL_FUNC) &_rrrow_int8, 0},
    {"_rrrow_int16", (DL_FUNC) &_rrrow_int16, 0},
    {"_rrrow_int32", (DL_FUNC) &_rrrow_int32, 0},
    {"_rrrow_int64", (DL_FUNC) &_rrrow_int64, 0},
    {"_rrrow_uint8", (DL_FUNC) &_rrrow_uint8, 0},
    {"_rrrow_uint16", (DL_FUNC) &_rrrow_uint16, 0},
    {"_rrrow_uint32", (DL_FUNC) &_rrrow_uint32, 0},
    {"_rrrow_uint64", (DL_FUNC) &_rrrow_uint64, 0},
    {"_rrrow_float16", (DL_FUNC) &_rrrow_float16, 0},
    {"_rrrow_float32", (DL_FUNC) &_rrrow_float32, 0},
    {"_rrrow_float64", (DL_FUNC) &_rrrow_float64, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_rrrow(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
