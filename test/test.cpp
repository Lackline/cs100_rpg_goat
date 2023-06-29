#include "gtest/gtest.h"
#include "../header/sceneDatabase.h"

TEST(ConstrcutorTests, testConstructor) {
    EXPECT_NO_THROW(SceneDatabase sdb);
}


TEST(playSceneTests, testPlayScene) {
    SceneDatabase sdb;
    EXPECT_NO_THROW(sdb.playScene());
}

TEST(playEndingTests, testPlayEnding) {
    SceneDatabase sdb;
    EXPECT_NO_THROW(sdb.playEnding());
}

