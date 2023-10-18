# find_package (Protobuf REQUIRED)

# include_directories(${Protobuf_INCLUDE_DIRS})
# list(APPEND ALL_TARGET_LIBRARIES ${Protobuf_LIBRARIES})

# Set Protobuf installation directory
# set(cmake_dir "/home/ocean/protoc/local_install/protoc_3_15x/bin/" 
#                 "/home/ocean/protoc/local_install/protoc_3_15x/include/"
#                 "/home/ocean/protoc/local_install/protoc_3_15x/lib/")
INCLUDE_DIRECTORIES(/home/ocean/protoc/local_install/protoc_3_15x/include/)
LINK_DIRECTORIES(/home/ocean/protoc/local_install/protoc_3_15x/lib/)
LINK_DIRECTORIES(/home/ocean/protoc/local_install/protoc_3_15x/bin/)
# list(APPEND CMAKE_PREFIX_PATH "${cmake_dir}")
# find_package (Protobuf REQUIRED 3.15.0)
# include_directories(${cmake_dir})
# list(APPEND ALL_TARGET_LIBRARIES ${cmake_dir})
# Add Protobuf libraries
list(APPEND ALL_TARGET_LIBRARIES /home/ocean/protoc/local_install/protoc_3_15x/lib/libprotobuf.so)