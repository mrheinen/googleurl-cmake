project(gurl)
cmake_minimum_required(VERSION 3.10)
set (CMAKE_BACKWARDS_COMPATIBILITY 2.6)

set (CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_CURRENT_LIST_DIR} ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/..)

file(GLOB src RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
    "src/gurl.cc",
    "src/gurl.h",
    "src/url_canon.h",
    "src/url_canon_etc.cc",
    "src/url_canon_fileurl.cc",
    "src/url_canon_filesystemurl.cc",
    "src/url_canon_host.cc",
    "src/url_canon_internal.cc",
    "src/url_canon_internal.h",
    "src/url_canon_internal_file.h",
    "src/url_canon_ip.cc",
    "src/url_canon_ip.h",
    "src/url_canon_mailtourl.cc",
    "src/url_canon_path.cc",
    "src/url_canon_pathurl.cc",
    "src/url_canon_query.cc",
    "src/url_canon_relative.cc",
    "src/url_canon_stdstring.h",
    "src/url_canon_stdurl.cc",
    "src/url_file.h",
    "src/url_parse.cc",
    "src/url_parse.h",
    "src/url_parse_file.cc",
    "src/url_parse_internal.h",
    "src/url_util.cc",
    "src/url_util.h",
    "base/basictypes.h",
    "base/logging.h",
    "base/scoped_ptr.h",
    "base/string16.cc",
    "base/string16.h",
)
file(GLOB base RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
    "base/basictypes.h"
    "base/logging.h"
    "base/string16.h"
    "base/scoped_ptr.h"
    )
file(GLOB fake RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
    "fake/read_utf_char.cc"
    "fake/idn_to_ascii.cc"
    )
add_library(gurl ${base} ${src} ${fake})


