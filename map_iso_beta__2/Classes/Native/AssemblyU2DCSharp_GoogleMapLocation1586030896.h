﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMapLocation
struct  GoogleMapLocation_t1586030896  : public Il2CppObject
{
public:
	// System.String GoogleMapLocation::address
	String_t* ___address_0;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(GoogleMapLocation_t1586030896, ___address_0)); }
	inline String_t* get_address_0() const { return ___address_0; }
	inline String_t** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(String_t* value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier(&___address_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
