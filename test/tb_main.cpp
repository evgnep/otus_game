#include <gtest/gtest.h>

#include "../src/objects/ObjectTank.cpp"
#include "../src/objects/ObjectBase.cpp"

TEST(tb_main,objectTank)
{
    using namespace otg;

    //const auto positionInit = Vector{1,1,0};
    //const auto velocityInit = Vector{10,0,0};
    //const auto helathInit = 100;
    //const auto fuelInit = 1000;
    //const auto ammoInit = 50;

    //const auto vectorFail = Vector{-1,-1,-1};
    //const auto intFail = -1;

    //auto obj1 = std::make_shared<ObjectTank>();
    //obj1->setProperty(PropertyKey::Position,positionInit);
    //obj1->setProperty(PropertyKey::Velocity,velocityInit);
    //obj1->setProperty(PropertyKey::Health,helathInit);
    //obj1->setProperty(PropertyKey::Fuel,fuelInit);
    //obj1->setProperty(PropertyKey::Ammo,ammoInit);

    //const auto checkProperty = [&] (const auto& obj) {
    //    try {
    //        auto position = std::get<Vector>(obj->getProperty(PropertyKey::Position).value_or(vectorFail));
    //        auto velocity = std::get<Vector>(obj->getProperty(PropertyKey::Velocity).value_or(vectorFail));
    //        auto health = std::get<int>(obj->getProperty(PropertyKey::Health).value_or(intFail));
    //        auto fuel = std::get<int>(obj->getProperty(PropertyKey::Fuel).value_or(intFail));
    //        auto ammo = std::get<int>(obj->getProperty(PropertyKey::Ammo).value_or(intFail));

    //        EXPECT_EQ(position,positionInit);
    //        EXPECT_EQ(velocity,velocityInit);
    //        EXPECT_EQ(health,helathInit);
    //        EXPECT_EQ(fuel,fuelInit);
    //        EXPECT_EQ(ammo,intFail);
    //    } 
    //    catch (...) {
    //        FAIL();
    //    }
    //};

    //checkProperty(obj1);

    //auto obj2{obj1};

    //checkProperty(obj2);
}

TEST(tb_main,move)
{
    EXPECT_EQ(true,true);
}

int main (int argc,char *argv[])
{
    ::testing::InitGoogleTest(&argc,argv);

    return RUN_ALL_TESTS();
}
