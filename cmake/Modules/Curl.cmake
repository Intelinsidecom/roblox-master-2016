file(TO_CMAKE_PATH "${CONTRIB_PATH}/android/arm/curl/" CURL_ROOT)
include_directories("${CURL_ROOT}/include")
link_directories("${CURL_ROOT}/lib")
