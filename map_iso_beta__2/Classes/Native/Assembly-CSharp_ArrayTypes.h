#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// GoogleMapMarker
struct GoogleMapMarker_t2438220333;
// GoogleMapPath
struct GoogleMapPath_t3384754880;
// GoogleMapLocation
struct GoogleMapLocation_t1586030896;

#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_GoogleMapMarker2438220333.h"
#include "AssemblyU2DCSharp_GoogleMapPath3384754880.h"
#include "AssemblyU2DCSharp_GoogleMapLocation1586030896.h"

#pragma once
// GoogleMapMarker[]
struct GoogleMapMarkerU5BU5D_t100527744  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) GoogleMapMarker_t2438220333 * m_Items[1];

public:
	inline GoogleMapMarker_t2438220333 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GoogleMapMarker_t2438220333 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GoogleMapMarker_t2438220333 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GoogleMapMarker_t2438220333 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GoogleMapMarker_t2438220333 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GoogleMapMarker_t2438220333 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// GoogleMapPath[]
struct GoogleMapPathU5BU5D_t3462109761  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) GoogleMapPath_t3384754880 * m_Items[1];

public:
	inline GoogleMapPath_t3384754880 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GoogleMapPath_t3384754880 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GoogleMapPath_t3384754880 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GoogleMapPath_t3384754880 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GoogleMapPath_t3384754880 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GoogleMapPath_t3384754880 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// GoogleMapLocation[]
struct GoogleMapLocationU5BU5D_t2073025553  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) GoogleMapLocation_t1586030896 * m_Items[1];

public:
	inline GoogleMapLocation_t1586030896 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GoogleMapLocation_t1586030896 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GoogleMapLocation_t1586030896 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GoogleMapLocation_t1586030896 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GoogleMapLocation_t1586030896 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GoogleMapLocation_t1586030896 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
