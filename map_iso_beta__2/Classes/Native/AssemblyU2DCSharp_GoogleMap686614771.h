#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GoogleMapLocation
struct GoogleMapLocation_t1586030896;
// GoogleMapMarker[]
struct GoogleMapMarkerU5BU5D_t100527744;
// GoogleMapPath[]
struct GoogleMapPathU5BU5D_t3462109761;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_LocationInfo1364725149.h"
#include "AssemblyU2DCSharp_GoogleMap_MapType679558006.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMap
struct  GoogleMap_t686614771  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean GoogleMap::loadOnStart
	bool ___loadOnStart_2;
	// System.Boolean GoogleMap::autoLocateCenter
	bool ___autoLocateCenter_3;
	// GoogleMapLocation GoogleMap::centerLocation
	GoogleMapLocation_t1586030896 * ___centerLocation_4;
	// UnityEngine.LocationInfo GoogleMap::location
	LocationInfo_t1364725149  ___location_5;
	// System.Int32 GoogleMap::zoom
	int32_t ___zoom_6;
	// GoogleMap/MapType GoogleMap::mapType
	int32_t ___mapType_7;
	// System.Int32 GoogleMap::size
	int32_t ___size_8;
	// System.Boolean GoogleMap::doubleResolution
	bool ___doubleResolution_9;
	// GoogleMapMarker[] GoogleMap::markers
	GoogleMapMarkerU5BU5D_t100527744* ___markers_10;
	// GoogleMapPath[] GoogleMap::paths
	GoogleMapPathU5BU5D_t3462109761* ___paths_11;

public:
	inline static int32_t get_offset_of_loadOnStart_2() { return static_cast<int32_t>(offsetof(GoogleMap_t686614771, ___loadOnStart_2)); }
	inline bool get_loadOnStart_2() const { return ___loadOnStart_2; }
	inline bool* get_address_of_loadOnStart_2() { return &___loadOnStart_2; }
	inline void set_loadOnStart_2(bool value)
	{
		___loadOnStart_2 = value;
	}

	inline static int32_t get_offset_of_autoLocateCenter_3() { return static_cast<int32_t>(offsetof(GoogleMap_t686614771, ___autoLocateCenter_3)); }
	inline bool get_autoLocateCenter_3() const { return ___autoLocateCenter_3; }
	inline bool* get_address_of_autoLocateCenter_3() { return &___autoLocateCenter_3; }
	inline void set_autoLocateCenter_3(bool value)
	{
		___autoLocateCenter_3 = value;
	}

	inline static int32_t get_offset_of_centerLocation_4() { return static_cast<int32_t>(offsetof(GoogleMap_t686614771, ___centerLocation_4)); }
	inline GoogleMapLocation_t1586030896 * get_centerLocation_4() const { return ___centerLocation_4; }
	inline GoogleMapLocation_t1586030896 ** get_address_of_centerLocation_4() { return &___centerLocation_4; }
	inline void set_centerLocation_4(GoogleMapLocation_t1586030896 * value)
	{
		___centerLocation_4 = value;
		Il2CppCodeGenWriteBarrier(&___centerLocation_4, value);
	}

	inline static int32_t get_offset_of_location_5() { return static_cast<int32_t>(offsetof(GoogleMap_t686614771, ___location_5)); }
	inline LocationInfo_t1364725149  get_location_5() const { return ___location_5; }
	inline LocationInfo_t1364725149 * get_address_of_location_5() { return &___location_5; }
	inline void set_location_5(LocationInfo_t1364725149  value)
	{
		___location_5 = value;
	}

	inline static int32_t get_offset_of_zoom_6() { return static_cast<int32_t>(offsetof(GoogleMap_t686614771, ___zoom_6)); }
	inline int32_t get_zoom_6() const { return ___zoom_6; }
	inline int32_t* get_address_of_zoom_6() { return &___zoom_6; }
	inline void set_zoom_6(int32_t value)
	{
		___zoom_6 = value;
	}

	inline static int32_t get_offset_of_mapType_7() { return static_cast<int32_t>(offsetof(GoogleMap_t686614771, ___mapType_7)); }
	inline int32_t get_mapType_7() const { return ___mapType_7; }
	inline int32_t* get_address_of_mapType_7() { return &___mapType_7; }
	inline void set_mapType_7(int32_t value)
	{
		___mapType_7 = value;
	}

	inline static int32_t get_offset_of_size_8() { return static_cast<int32_t>(offsetof(GoogleMap_t686614771, ___size_8)); }
	inline int32_t get_size_8() const { return ___size_8; }
	inline int32_t* get_address_of_size_8() { return &___size_8; }
	inline void set_size_8(int32_t value)
	{
		___size_8 = value;
	}

	inline static int32_t get_offset_of_doubleResolution_9() { return static_cast<int32_t>(offsetof(GoogleMap_t686614771, ___doubleResolution_9)); }
	inline bool get_doubleResolution_9() const { return ___doubleResolution_9; }
	inline bool* get_address_of_doubleResolution_9() { return &___doubleResolution_9; }
	inline void set_doubleResolution_9(bool value)
	{
		___doubleResolution_9 = value;
	}

	inline static int32_t get_offset_of_markers_10() { return static_cast<int32_t>(offsetof(GoogleMap_t686614771, ___markers_10)); }
	inline GoogleMapMarkerU5BU5D_t100527744* get_markers_10() const { return ___markers_10; }
	inline GoogleMapMarkerU5BU5D_t100527744** get_address_of_markers_10() { return &___markers_10; }
	inline void set_markers_10(GoogleMapMarkerU5BU5D_t100527744* value)
	{
		___markers_10 = value;
		Il2CppCodeGenWriteBarrier(&___markers_10, value);
	}

	inline static int32_t get_offset_of_paths_11() { return static_cast<int32_t>(offsetof(GoogleMap_t686614771, ___paths_11)); }
	inline GoogleMapPathU5BU5D_t3462109761* get_paths_11() const { return ___paths_11; }
	inline GoogleMapPathU5BU5D_t3462109761** get_address_of_paths_11() { return &___paths_11; }
	inline void set_paths_11(GoogleMapPathU5BU5D_t3462109761* value)
	{
		___paths_11 = value;
		Il2CppCodeGenWriteBarrier(&___paths_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
