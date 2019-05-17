#ifndef BUILTINS_H_
#define BUILTINS_H_
#include <string>
namespace builtins {
const std::string variables[] = {
    "NaN",         "undefined", "Math",    "JSON",   "Duktape",   "Reflect",
    "performance", "console",   "E",       "LN10",   "LN2",       "LOG2E",
    "LOG10E",      "PI",        "SQRT1_2", "SQRT2",  "__proto__", "version",
    "env",         "modLoaded", "data",    "hashes", "length",
};

const std::string functions[] = {
    "Object",
    "Function",
    "Array",
    "String",
    "Boolean",
    "Number",
    "Date",
    "RegExp",
    "Error",
    "EvalError",
    "RangeError",
    "ReferenceError",
    "SyntaxError",
    "TypeError",
    "URIError",
    "Proxy",
    "Buffer",
    "ArrayBuffer",
    "DataView",
    "Int8Array",
    "Uint8Array",
    "Uint8ClampedArray",
    "Int16Array",
    "Uint16Array",
    "Int32Array",
    "Uint32Array",
    "Float32Array",
    "Float64Array",
    "parseInt",
    "parseFloat",
    "TextEncoder",
    "TextDecoder",
    "eval",
    "isNaN",
    "isFinite",
    "decodeURI",
    "decodeURIComponent",
    "encodeURI",
    "encodeURIComponent",
    "escape",
    "unescape",
    "print",
    "alert",
    "require",
};

const std::string methods[] = {
    "abs",
    "acos",
    "asin",
    "atan",
    "atan2",
    "cbrt",
    "ceil",
    "clz32",
    "cos",
    "exp",
    "floor",
    "hypot",
    "imul",
    "log",
    "log2",
    "log10",
    "max",
    "min",
    "pow",
    "random",
    "round",
    "sign",
    "sin",
    "sqrt",
    "tan",
    "trunc",
    "constructor",
    "toString",
    "toLocaleString",
    "valueOf",
    "hasOwnProperty",
    "isPrototypeOf",
    "propertyIsEnumerable",
    "__defineGetter__",
    "__defineSetter__",
    "__lookupGetter__",
    "__lookupSetter__",
    "parse",
    "stringify",
    "Pointer",
    "Thread",
    "info",
    "act",
    "gc",
    "fin",
    "enc",
    "dec",
    "compact",
    "Logger",
    "apply",
    "construct",
    "defineProperty",
    "deleteProperty",
    "get",
    "getOwnPropertyDescriptor",
    "getPrototypeOf",
    "has",
    "isExtensible",
    "ownKeys",
    "preventExtensions",
    "set",
    "setPrototypeOf",
    "now",
    "format",
    "assert",
    "debug",
    "trace",
    "warn",
    "error",
    "exception",
    "dir",
    "hash",
    "concat",
    "join",
    "pop",
    "push",
    "reverse",
    "shift",
    "slice",
    "sort",
    "splice",
    "unshift",
    "indexOf",
    "lastIndexOf",
    "every",
    "some",
    "forEach",
    "map",
    "filter",
    "reduce",
    "reduceRight",
    "add",
    "size",
};
};  // namespace builtins

#endif  // ifndef BUILTINS_H_