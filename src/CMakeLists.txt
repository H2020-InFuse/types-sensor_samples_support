# H2020 ESROCOS Project
# Company: GMV Aerospace & Defence S.A.U.
# Licence: GPLv2


pkg_search_module(EIGEN3 REQUIRED eigen3)
pkg_search_module(ESROCOS_TYPES_BASE REQUIRED esrocos_types_base)

set(SOURCES
    asn1AngleConvert.cpp
    asn1BodyStateConvert.cpp
    asn1DepthMapConvert.cpp
    asn1FrameConvert.cpp
    asn1IMUSensorsConvert.cpp
    asn1JointsConvert.cpp
    asn1JointStateConvert.cpp
#    asn1JoystickCommandConvert.cpp
    asn1LaserScanConvert.cpp
    asn1Matrix3dConvert.cpp
    asn1Matrix4dConvert.cpp
    asn1Matrix6dConvert.cpp
    asn1Motion2DConvert.cpp
    asn1OrientationConvert.cpp
    asn1OrientationUtils.c
    asn1PointcloudConvert.cpp
    asn1PoseConvert.cpp
    asn1QuaterniondConvert.cpp
    asn1QuaterniondUtils.c
    asn1RigidBodyStateConvert.cpp
    asn1SonarBeamConvert.cpp
    asn1SonarBeamUtils.c
    asn1StringConvert.cpp
    asn1StringUtils.cpp
    asn1TemperatureConvert.cpp
    asn1TimeConvert.cpp
#    asn1TimestampEstimatorStatusConvert.cpp
    asn1TransformWithCovarianceConvert.cpp
    asn1TwistWithCovarianceConvert.cpp
    asn1Vector3dConvert.cpp
    asn1Vector3dUtils.c
    asn1Vector4dConvert.cpp
    asn1Vector4dUtils.c
    asn1Vector6dConvert.cpp
    asn1Vector6dUtils.c
    asn1VectorXdConvert.cpp
    asn1WaypointConvert.cpp
    ia5stringConvert.cpp
    )
    
set(HEADERS
    asn1AngleConvert.hpp
    asn1ArrayUtils.hpp
    asn1Convert.hpp
    asn1BodyStateConvert.hpp
    asn1DepthMapConvert.hpp
    asn1FrameConvert.hpp
    asn1IMUSensorsConvert.hpp
    asn1JointsConvert.hpp
    asn1JointStateConvert.hpp
#    asn1JoystickCommandConvert.hpp
    asn1LaserScanConvert.hpp
    asn1Matrix3dConvert.hpp
    asn1Matrix3dUtils.h
    asn1Matrix4dConvert.hpp
    asn1Matrix4dUtils.h
    asn1Matrix6dConvert.hpp
    asn1Matrix6dUtils.h
    asn1Motion2DConvert.hpp
    asn1OrientationConvert.hpp
    asn1OrientationUtils.h
    asn1PointcloudConvert.hpp
    asn1PoseConvert.hpp
    asn1QuaterniondConvert.hpp
    asn1QuaterniondUtils.h
    asn1RigidBodyStateConvert.hpp
    asn1SonarBeamConvert.hpp
    asn1SonarBeamUtils.h
    asn1StringConvert.hpp
    asn1StringUtils.h
    asn1TemperatureConvert.hpp
    asn1TimeConvert.hpp
#    asn1TimestampEstimatorStatusConvert.hpp
    asn1TwistWithCovarianceConvert.hpp
    asn1TransformWithCovarianceConvert.hpp
    asn1Types.h
    asn1Utils.h
    asn1Vector3dConvert.hpp
    asn1Vector3dUtils.h
    asn1Vector4dConvert.hpp
    asn1Vector4dUtils.h
    asn1Vector6dConvert.hpp
    asn1VectorXdConvert.hpp
    asn1Vector6dUtils.h
    asn1WaypointConvert.hpp
    ia5stringConvert.hpp
    )

# Target library
add_library(esrocos_types_support SHARED ${SOURCES})
set_target_properties(esrocos_types_support PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories(esrocos_types_support PUBLIC 
   ${EIGEN3_INCLUDE_DIRS}
   ${ESROCOS_TYPES_BASE_INCLUDE_DIRS}
   ${CMAKE_INSTALL_PREFIX}/include
   )

# Install headers, libraries and pkg-config file
install(FILES ${HEADERS}
        DESTINATION ${CMAKE_INSTALL_PREFIX}/include/${CMAKE_PROJECT_NAME}
        )
        
install(TARGETS esrocos_types_support
        DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
        )

CONFIGURE_FILE("asn1_types_support.pc.in" "asn1_types_support.pc" @ONLY)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/asn1_types_support.pc
        DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/pkgconfig
        )
