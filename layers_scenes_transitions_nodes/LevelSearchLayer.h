#ifndef __LEVELSEARCHLAYER_H__
#define __LEVELSEARCHLAYER_H__

#include <gd.h>

namespace gd {
    class LevelSearchLayer : public CCLayer {
        public:
            static LevelSearchLayer* create() {
                return reinterpret_cast<LevelSearchLayer*(__fastcall*)()>(
                    base + 0x17d9c0
                )();
            }
    };
}

#endif
