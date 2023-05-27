add_executable(BullsAndCows game_engine/GameEngine.cpp game_engine/GameEngine.h)

file(GLOB_RECURSE SOURCE_FILES CONFIGURE_DEPENDS *.cpp *.h)
target_sources(BullsAndCows PRIVATE ${SOURCE_FILES})