#include <iostream>

#include "Search.h"

namespace algo {
    void enumSearchTest() {
        std::cout << "enumSearchTest begin" << std::endl;

        int cock = 0;
        int hen = 0;
        int chick = 0;
        int cockMax = 100 / 5;
        int henMax = 100 / 3;
        for (; cock <= cockMax; cock++) {
            for (hen = 0; hen <= henMax; hen++) {
                chick = 100 - cock - hen;
                if (chick % 3 == 0 && cock * 5 + hen * 3 + chick / 3 == 100) {
                    std::cout << "cock=" << cock << " hen=" << hen << " chick=" << chick << std::endl;
                }
            }
        }

        std::cout << "enumSearchTest end" << std::endl;
    }
}

