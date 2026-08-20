if(UNIX AND NOT APPLE)

set(LIBUSB_SOURCE_DIR "${SM_EXTERN_DIR}/libusb")

include(ExternalProject)
ExternalProject_Add(
  libusb

  SOURCE_DIR "${LIBUSB_SOURCE_DIR}"
  INSTALL_COMMAND ""
  BUILD_BYPRODUCTS "<BINARY_DIR>/libusb-1.0.a"
)

ExternalProject_Get_Property(libusb SOURCE_DIR BINARY_DIR)
set(LIBUSB_INCLUDE_DIR "${SOURCE_DIR}/libusb/libusb" CACHE INTERNAL "libusb include")
set(LIBUSB_INCLUDE_DIRS "${LIBUSB_INCLUDE_DIR}" CACHE INTERNAL "libusb include dirs")
set(LIBUSB_LIBRARY "${BINARY_DIR}/libusb-1.0.a" CACHE INTERNAL "libusb library")

endif()
