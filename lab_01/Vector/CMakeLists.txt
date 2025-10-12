# Создаем динамическую (shared) библиотеку Vector
add_library(Vector SHARED Vector.cpp)

# Указываем, что Vector зависит от Number и должен слинковаться с ней
target_link_libraries(Vector PUBLIC Number)

# Делаем заголовочные файлы Vector доступными
target_include_directories(Vector PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
