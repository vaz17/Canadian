/**
 * @file ActorTest.cpp
 * @author matthew vazquez
 */
#include <pch.h>
#include "gtest/gtest.h"
#include <Actor.h>


TEST(ActorTest, Constructor)
{
    Actor actor(L"Harold");
    ASSERT_EQ(std::wstring(L"Harold"), actor.GetName());
}

TEST(ActorTest, Enabled)
{
    Actor actor(L"Harold");
    ASSERT_TRUE(actor.IsEnabled());
    actor.SetEnabled(false);
    ASSERT_FALSE(actor.IsEnabled());
}

TEST(ActorTest, Clickable)
{
    Actor actor(L"Harold");
    ASSERT_TRUE(actor.IsClickable());
    actor.SetClickable(false);
    ASSERT_FALSE(actor.IsClickable());
}

TEST(ActorTest, Position)
{
    Actor actor(L"Harold");
    ASSERT_EQ(wxPoint(0, 0), actor.GetPosition());
    actor.SetPosition(wxPoint(100, 100));
    ASSERT_EQ(wxPoint(100, 100), actor.GetPosition());
    ASSERT_NE(wxPoint(0, 0), actor.GetPosition());
}
