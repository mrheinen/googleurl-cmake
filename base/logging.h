#ifndef GOOGLEURL_BASE_FAKE_LOGGING_H
#define GOOGLEURL_BASE_FAKE_LOGGING_H

#include <assert.h>

namespace
{
struct FakeStream
{
    template <typename T> FakeStream& operator << (T&& t) {
        return *this;
    }
};
FakeStream g_fakestream_for_logging;
}


#define DCHECK(condition) assert(condition), g_fakestream_for_logging
#define NOTREACHED() DCHECK(false)

#endif // GOOGLEURL_BASE_FAKE_LOGGING_H
