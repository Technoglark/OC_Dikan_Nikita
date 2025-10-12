# Создаем исполняемый файл main_app из main.cpp
add_executable(main_app main.cpp)

# Линкуем наше приложение с библиотекой Vector
# CMake автоматически подтянет и зависимость Vector от Number
target_link_libraries(main_app PRIVATE Vector)
