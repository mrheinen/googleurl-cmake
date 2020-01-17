// This is a fake implementaion for IDNToASCII function, which is incomplete corrected.

#include "base/logging.h"
#include "base/string16.h"
#include "googleurl/src/url_canon.h"

namespace url_canon
{
bool IDNToASCII(const char16* src, int src_len, CanonOutputW* output) {
    output->Resize(src_len);
    memcpy(output->data(), src, src_len);
    output->set_length(src_len);
    return true;
}
}