file(TO_CMAKE_PATH "${CONTRIB_PATH}/android/arm/openssl/" SSL_ROOT)
include_directories("${SSL_ROOT}/include")
link_directories("${SSL_ROOT}/lib")
