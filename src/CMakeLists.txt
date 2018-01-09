# H2020 ESROCOS Project
# Company: GMV Aerospace & Defence S.A.U.
# Licence: GPLv2


pkg_search_module(EIGEN3 REQUIRED eigen3)
pkg_search_module(ESROCOS_TYPES_BASE_SUPPORT REQUIRED esrocos_types_base_support)

set(SOURCES
    asn1DepthMapConvert.cpp
    asn1FrameConvert.cpp
    asn1IMUSensorsConvert.cpp
    asn1LaserScanConvert.cpp
    asn1PointcloudConvert.cpp
    asn1SonarBeamConvert.cpp
    asn1SonarBeamUtils.c
    )
    
set(HEADERS
    asn1DepthMapConvert.hpp
    asn1FrameConvert.hpp
    asn1IMUSensorsConvert.hpp
    asn1LaserScanConvert.hpp
    asn1PointcloudConvert.hpp
    asn1SonarBeamConvert.hpp
    asn1SonarBeamUtils.h
    sensorSamplesTypes.h
    )

# ASN.1 types are imported and compiled locally to the project, but not installed
esrocos_asn1_types_package(local_types
    OUTDIR asn1
    IMPORT types/base types/sensor_samples)
    
# Target library
add_library(esrocos_types_sensor_samples_support SHARED ${SOURCES})
set_target_properties(esrocos_types_sensor_samples_support PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories(esrocos_types_sensor_samples_support PUBLIC 
   PUBLIC ${EIGEN3_INCLUDE_DIRS}
   PUBLIC ${ESROCOS_TYPES_BASE_SUPPORT_INCLUDE_DIRS}
   PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
)
add_dependencies(esrocos_types_sensor_samples_support local_types_generate_c)

# Install headers, libraries and pkg-config file
install(FILES ${HEADERS}
        DESTINATION ${CMAKE_INSTALL_PREFIX}/include/${CMAKE_PROJECT_NAME}
)
        
install(TARGETS esrocos_types_sensor_samples_support
        DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
)

CONFIGURE_FILE("esrocos_types_sensor_samples_support.pc.in" "esrocos_types_sensor_samples_support.pc" @ONLY)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/esrocos_types_sensor_samples_support.pc
        DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/pkgconfig
)
