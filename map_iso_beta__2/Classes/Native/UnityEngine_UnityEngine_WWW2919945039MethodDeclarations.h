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

// UnityEngine.WWW
struct WWW_t2919945039;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Text.Encoding
struct Encoding_t663144255;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Text_Encoding663144255.h"

// System.Void UnityEngine.WWW::.ctor(System.String)
extern "C"  void WWW__ctor_m2024029190 (WWW_t2919945039 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Dispose()
extern "C"  void WWW_Dispose_m2554269413 (WWW_t2919945039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Finalize()
extern "C"  void WWW_Finalize_m3300880244 (WWW_t2919945039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C"  void WWW_DestroyWWW_m2548500174 (WWW_t2919945039 * __this, bool ___cancel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
extern "C"  void WWW_InitWWW_m1194933100 (WWW_t2919945039 * __this, String_t* ___url0, ByteU5BU5D_t3397334013* ___postData1, StringU5BU5D_t1642385972* ___iHeaders2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::UnEscapeURL(System.String)
extern "C"  String_t* WWW_UnEscapeURL_m1911584158 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::UnEscapeURL(System.String,System.Text.Encoding)
extern "C"  String_t* WWW_UnEscapeURL_m719811819 (Il2CppObject * __this /* static, unused */, String_t* ___s0, Encoding_t663144255 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::get_DefaultEncoding()
extern "C"  Encoding_t663144255 * WWW_get_DefaultEncoding_m1497697991 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.WWW::GetTexture(System.Boolean)
extern "C"  Texture2D_t3542995729 * WWW_GetTexture_m2539490669 (WWW_t2919945039 * __this, bool ___markNonReadable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.WWW::get_texture()
extern "C"  Texture2D_t3542995729 * WWW_get_texture_m1121178301 (WWW_t2919945039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
