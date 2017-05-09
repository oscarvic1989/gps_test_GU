#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t663144255;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Text_Encoding663144255.h"

// System.Byte UnityEngine.WWWTranscoder::Hex2Byte(System.Byte[],System.Int32)
extern "C"  uint8_t WWWTranscoder_Hex2Byte_m804247100 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___b0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWWTranscoder::URLDecode(System.String,System.Text.Encoding)
extern "C"  String_t* WWWTranscoder_URLDecode_m699861304 (Il2CppObject * __this /* static, unused */, String_t* ___toEncode0, Encoding_t663144255 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWTranscoder::Decode(System.Byte[],System.Byte,System.Byte)
extern "C"  ByteU5BU5D_t3397334013* WWWTranscoder_Decode_m1726685210 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___input0, uint8_t ___escapeChar1, uint8_t ___space2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWTranscoder::.cctor()
extern "C"  void WWWTranscoder__cctor_m916878076 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
