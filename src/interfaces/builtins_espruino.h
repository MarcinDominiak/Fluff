#ifndef BUILTINS_H_
#define BUILTINS_H_
#include <string>

namespace builtins {

const std::string variables[] = {
    "this", "bytelength", "byteOffset", "buffer", "arguments", "__proto__",
    "D0",   "D1",         "D2",         "D3",     "D4",        "D5",
    "D6",   "D7",         "D8",         "D9",     "D10",       "D11",
    "D12",  "D13",        "D14",        "D15",    "D16",       "D17",
    "D18",  "D19",        "D20",        "D21",    "D22",       "D23",
    "D24",  "D25",        "D26",        "D27",    "D28",       "D29",
    "D30",  "D31",        "D32"};

const std::string functions[] = {"quit",
                                 "interrupt",
                                 "Object",
                                 "console",
                                 "x",
                                 "AES",
                                 "Array",
                                 "ArrayBuffer",
                                 "ArrayBufferView",
                                 "Boolean",
                                 "DataView",
                                 "Date",
                                 "E",
                                 "Error",
                                 "File",
                                 "Float32Array",
                                 "Float64Array",
                                 "Function",
                                 "Graphics",
                                 "HASH",
                                 "HIGH",
                                 "I2C",
                                 "I2C1",
                                 "I2C2",
                                 "I2C3",
                                 "Infinity",
                                 "Int16Array",
                                 "Int32Array",
                                 "Int8Array",
                                 "InternalError",
                                 "JSON",
                                 "LOW",
                                 "LoopbackA",
                                 "LoopbackB",
                                 "Math",
                                 "Modules",
                                 "NaN",
                                 "Number",
                                 "OneWire",
                                 "Pin",
                                 "Promise",
                                 "ReferenceError",
                                 "RegExp",
                                 "SPI",
                                 "SPI1",
                                 "SPI2",
                                 "SPI3",
                                 "Serial",
                                 "Serial1",
                                 "Serial2",
                                 "Serial3",
                                 "Serial4",
                                 "Serial5",
                                 "Serial6",
                                 "Server",
                                 "Socket",
                                 "String",
                                 "SyntaxError",
                                 "Telnet",
                                 "TypeError",
                                 "USB",
                                 "Uint16Array",
                                 "Uint32Array",
                                 "Uint8Array",
                                 "Uint8ClampedArray",
                                 "Waveform",
                                 "analogRead",
                                 "analogWrite",
                                 "arguments",
                                 "atob",
                                 "btoa",
                                 "changeInterval",
                                 "clearInterval",
                                 "clearTimeout",
                                 "clearWatch",
                                 "decodeURIComponent",
                                 "dgramSocket",
                                 "digitalPulse",
                                 "digitalRead",
                                 "digitalWrite",
                                 "dump",
                                 "echo",
                                 "edit",
                                 "encodeURIComponent",
                                 "eval",
                                 "getPinMode",
                                 "getSerial",
                                 "getTime",
                                 "global",
                                 "httpCRq",
                                 "httpCRs",
                                 "httpSRq",
                                 "httpSRs",
                                 "httpSrv",
                                 "isFinite",
                                 "isNaN",
                                 "load",
                                 "parseFloat",
                                 "parseInt",
                                 "peek16",
                                 "peek32",
                                 "peek8",
                                 "pinMode",
                                 "poke16",
                                 "poke32",
                                 "poke8",
                                 "print",
                                 "process",
                                 "require",
                                 "reset",
                                 "save",
                                 "setBusyIndicator",
                                 "setInterval",
                                 "setSleepIndicator",
                                 "setTime",
                                 "setTimeout",
                                 "setWatch",
                                 "shiftOut",
                                 "trace",
                                 "url"};

const std::string methods[] = {"set",
                               "reduce",
                               "pop",
                               "replace",
                               "substring",
                               "substr",
                               "byteOffset",
                               "charCodeAt",
                               "apply",
                               "shift",
                               "find",
                               "fill",
                               "byteLength",
                               "startsWith",
                               "findIndex",
                               "slice",
                               "replaceWithconstructor",
                               "endsWith",
                               "write",
                               "buffer",
                               "call",
                               "split",
                               "trimconstructor",
                               "toString",
                               "match",
                               "writeAtTimeconstructor",
                               "sort",
                               "map",
                               "getMode",
                               "replaceWith",
                               "lastIndexOf",
                               "charAt",
                               "indexOf",
                               "some",
                               "sortconstructor",
                               "includes",
                               "every",
                               "forEach",
                               "splice",
                               "concat",
                               "toLowerCase",
                               "reset",
                               "unshiftconstructor",
                               "join",
                               "reverse",
                               "getInfo",
                               "read",
                               "bind",
                               "toggle",
                               "toUpperCase",
                               "toFixedconstructor",
                               "filter",
                               "length",
                               "mode",
                               "constructor",
                               "push",
                               "byteLengthconstructor"};
};      // namespace builtins
#endif  // ifndef BUILTINS_H_