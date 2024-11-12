set(HEADERS
    OOP.hpp
    IBookAdmin.hpp
    IBookUser.hpp
    IMedia.hpp
    CEbook.hpp
    CAudioBook.hpp
    CLibrary.hpp
)
    
set(SOURCES
    OOP.cpp
)

add_library(OOPProject ${HEADERS} ${SOURCES})

