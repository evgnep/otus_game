#include <gtest/gtest.h>

#include "../src/objects/Objects.cpp"

//class TestObjects : public ::testing::Test
//{
//protected:
//	void SetUp()
//	{
//	}
//	void TearDown()
//	{
//	}
//};

namespace detail {

using PropertyHas = std::unordered_map<otg::PropertyKey,bool>;

void checkPropertyInit(const otg::ObjectBasePtr& obj,const PropertyHas &hasProperty) 
{
    using namespace otg;

    const auto position = obj->getProperty(PropertyKey::Position);
    const auto velocity = obj->getProperty(PropertyKey::Velocity);
    const auto health = obj->getProperty(PropertyKey::Health);
    const auto fuel = obj->getProperty(PropertyKey::Fuel);
    const auto ammo = obj->getProperty(PropertyKey::Ammo);

    EXPECT_EQ(position.has_value(),hasProperty.at(PropertyKey::Position));
    EXPECT_EQ(velocity.has_value(),hasProperty.at(PropertyKey::Velocity));
    EXPECT_EQ(health.has_value(),hasProperty.at(PropertyKey::Health));
    EXPECT_EQ(fuel.has_value(),hasProperty.at(PropertyKey::Fuel));
    EXPECT_EQ(ammo.has_value(),hasProperty.at(PropertyKey::Ammo));
}

}

TEST(tb_main,objectBunkerInit)
{
    const auto obj = std::make_shared<otg::ObjectBunker>();
    detail::PropertyHas property{{otg::PropertyKey::Position,true},
                                 {otg::PropertyKey::Velocity,false},
                                 {otg::PropertyKey::Health,true},
                                 {otg::PropertyKey::Fuel,true},
                                 {otg::PropertyKey::Ammo,true}};

    detail::checkPropertyInit(obj,property);
}

TEST(tb_main,objectTankInit)
{
    const auto obj = std::make_shared<otg::ObjectTank>();
    detail::PropertyHas property{{otg::PropertyKey::Position,true},
                                 {otg::PropertyKey::Velocity,true},
                                 {otg::PropertyKey::Health,true},
                                 {otg::PropertyKey::Fuel,true},
                                 {otg::PropertyKey::Ammo,true}};
    
    detail::checkPropertyInit(obj,property);
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
