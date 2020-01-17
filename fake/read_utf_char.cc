// This is a fake implementaion for ReadUTFChar function, strictly speakig, this is incomplete corrected.

#include "base/string16.h"

namespace url_canon
{
// we assume |str| only contains ascii character.
bool ReadUTFChar(const char* str, int* begin, int length, unsigned* code_point) {
    if (*begin >= length) {
        return false;
    }
    *code_point = static_cast<unsigned>(str[*begin]);
    return true;
}

bool ReadUTFChar(const char16* str, int* begin, int length, unsigned* code_point) {
    if (*begin >= length) {
        return false;
    }
    *code_point = static_cast<unsigned>(str[*begin]);
    return true;
}
}