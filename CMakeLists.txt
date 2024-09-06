cmake_minimum_required(VERSION 3.5)
project(transactionlist VERSION 1.4)

# Define source and header files
file(GLOB SRC_INC CONFIGURE_DEPENDS "inc/*.h" "src/*.cpp")


# Add executable with dependencies
add_executable(transactionlist ${SRC_INC} main.cpp)

# Include all header files in "inc" directory
target_include_directories(transactionlist PUBLIC "${PROJECT_BINARY_DIR}" inc/)
