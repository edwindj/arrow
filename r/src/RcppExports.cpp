// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "rrrow_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// ArrayBuilder
xptr_ArrayBuilder ArrayBuilder(xptr_DataType xptr_type);
RcppExport SEXP _rrrow_ArrayBuilder(SEXP xptr_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< xptr_DataType >::type xptr_type(xptr_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(ArrayBuilder(xptr_type));
    return rcpp_result_gen;
END_RCPP
}
// ArrayBuilder__num_children
int ArrayBuilder__num_children(xptr_ArrayBuilder xptr_type);
RcppExport SEXP _rrrow_ArrayBuilder__num_children(SEXP xptr_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< xptr_ArrayBuilder >::type xptr_type(xptr_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(ArrayBuilder__num_children(xptr_type));
    return rcpp_result_gen;
END_RCPP
}
// field
xptr_Field field(const std::string& name, xptr_DataType type, bool nullable);
RcppExport SEXP _rrrow_field(SEXP nameSEXP, SEXP typeSEXP, SEXP nullableSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type name(nameSEXP);
    Rcpp::traits::input_parameter< xptr_DataType >::type type(typeSEXP);
    Rcpp::traits::input_parameter< bool >::type nullable(nullableSEXP);
    rcpp_result_gen = Rcpp::wrap(field(name, type, nullable));
    return rcpp_result_gen;
END_RCPP
}
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
// boolean
xptr_DataType boolean();
RcppExport SEXP _rrrow_boolean() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(boolean());
    return rcpp_result_gen;
END_RCPP
}
// utf8
xptr_DataType utf8();
RcppExport SEXP _rrrow_utf8() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(utf8());
    return rcpp_result_gen;
END_RCPP
}
// date32
xptr_DataType date32();
RcppExport SEXP _rrrow_date32() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(date32());
    return rcpp_result_gen;
END_RCPP
}
// date64
xptr_DataType date64();
RcppExport SEXP _rrrow_date64() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(date64());
    return rcpp_result_gen;
END_RCPP
}
// null
xptr_DataType null();
RcppExport SEXP _rrrow_null() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(null());
    return rcpp_result_gen;
END_RCPP
}
// decimal_type
xptr_DataType decimal_type(int32_t precision, int32_t scale);
RcppExport SEXP _rrrow_decimal_type(SEXP precisionSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int32_t >::type precision(precisionSEXP);
    Rcpp::traits::input_parameter< int32_t >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(decimal_type(precision, scale));
    return rcpp_result_gen;
END_RCPP
}
// fixed_size_binary
xptr_DataType fixed_size_binary(int32_t byte_width);
RcppExport SEXP _rrrow_fixed_size_binary(SEXP byte_widthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int32_t >::type byte_width(byte_widthSEXP);
    rcpp_result_gen = Rcpp::wrap(fixed_size_binary(byte_width));
    return rcpp_result_gen;
END_RCPP
}
// timestamp1
xptr_DataType timestamp1(arrow::TimeUnit::type unit);
RcppExport SEXP _rrrow_timestamp1(SEXP unitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arrow::TimeUnit::type >::type unit(unitSEXP);
    rcpp_result_gen = Rcpp::wrap(timestamp1(unit));
    return rcpp_result_gen;
END_RCPP
}
// timestamp2
xptr_DataType timestamp2(arrow::TimeUnit::type unit, const std::string& timezone);
RcppExport SEXP _rrrow_timestamp2(SEXP unitSEXP, SEXP timezoneSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arrow::TimeUnit::type >::type unit(unitSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type timezone(timezoneSEXP);
    rcpp_result_gen = Rcpp::wrap(timestamp2(unit, timezone));
    return rcpp_result_gen;
END_RCPP
}
// time32_
xptr_DataType time32_(arrow::TimeUnit::type unit);
RcppExport SEXP _rrrow_time32_(SEXP unitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arrow::TimeUnit::type >::type unit(unitSEXP);
    rcpp_result_gen = Rcpp::wrap(time32_(unit));
    return rcpp_result_gen;
END_RCPP
}
// time64_
xptr_DataType time64_(arrow::TimeUnit::type unit);
RcppExport SEXP _rrrow_time64_(SEXP unitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arrow::TimeUnit::type >::type unit(unitSEXP);
    rcpp_result_gen = Rcpp::wrap(time64_(unit));
    return rcpp_result_gen;
END_RCPP
}
// list_
SEXP list_(SEXP x);
RcppExport SEXP _rrrow_list_(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(list_(x));
    return rcpp_result_gen;
END_RCPP
}
// struct_
xptr_DataType struct_(ListOf<xptr_Field> fields);
RcppExport SEXP _rrrow_struct_(SEXP fieldsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< ListOf<xptr_Field> >::type fields(fieldsSEXP);
    rcpp_result_gen = Rcpp::wrap(struct_(fields));
    return rcpp_result_gen;
END_RCPP
}
// DataType_ToString
std::string DataType_ToString(xptr_DataType type);
RcppExport SEXP _rrrow_DataType_ToString(SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< xptr_DataType >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(DataType_ToString(type));
    return rcpp_result_gen;
END_RCPP
}
// schema_
xptr_Schema schema_(ListOf<xptr_Field> fields);
RcppExport SEXP _rrrow_schema_(SEXP fieldsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< ListOf<xptr_Field> >::type fields(fieldsSEXP);
    rcpp_result_gen = Rcpp::wrap(schema_(fields));
    return rcpp_result_gen;
END_RCPP
}
// Schema_ToString
std::string Schema_ToString(xptr_Schema type);
RcppExport SEXP _rrrow_Schema_ToString(SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< xptr_Schema >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(Schema_ToString(type));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rrrow_ArrayBuilder", (DL_FUNC) &_rrrow_ArrayBuilder, 1},
    {"_rrrow_ArrayBuilder__num_children", (DL_FUNC) &_rrrow_ArrayBuilder__num_children, 1},
    {"_rrrow_field", (DL_FUNC) &_rrrow_field, 3},
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
    {"_rrrow_boolean", (DL_FUNC) &_rrrow_boolean, 0},
    {"_rrrow_utf8", (DL_FUNC) &_rrrow_utf8, 0},
    {"_rrrow_date32", (DL_FUNC) &_rrrow_date32, 0},
    {"_rrrow_date64", (DL_FUNC) &_rrrow_date64, 0},
    {"_rrrow_null", (DL_FUNC) &_rrrow_null, 0},
    {"_rrrow_decimal_type", (DL_FUNC) &_rrrow_decimal_type, 2},
    {"_rrrow_fixed_size_binary", (DL_FUNC) &_rrrow_fixed_size_binary, 1},
    {"_rrrow_timestamp1", (DL_FUNC) &_rrrow_timestamp1, 1},
    {"_rrrow_timestamp2", (DL_FUNC) &_rrrow_timestamp2, 2},
    {"_rrrow_time32_", (DL_FUNC) &_rrrow_time32_, 1},
    {"_rrrow_time64_", (DL_FUNC) &_rrrow_time64_, 1},
    {"_rrrow_list_", (DL_FUNC) &_rrrow_list_, 1},
    {"_rrrow_struct_", (DL_FUNC) &_rrrow_struct_, 1},
    {"_rrrow_DataType_ToString", (DL_FUNC) &_rrrow_DataType_ToString, 1},
    {"_rrrow_schema_", (DL_FUNC) &_rrrow_schema_, 1},
    {"_rrrow_Schema_ToString", (DL_FUNC) &_rrrow_Schema_ToString, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_rrrow(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
