/**
 * @file PolyDrawableTest.cpp
 * @author matthew vazquez
 */

#include <pch.h>
#include "gtest/gtest.h"
#include <PolyDrawable.h>

TEST(PolyDrawableTest, Construct)
{
 PolyDrawable poly(L"Harold");
 ASSERT_EQ(std::wstring(L"Harold"), poly.GetName());
}

TEST(PolyDrawableTest, Color)
{
 PolyDrawable poly(L"Harold");
 ASSERT_EQ(wxColour(*wxBLACK), poly.GetColor());
 poly.SetColor(wxColour(255, 0, 0));
 ASSERT_EQ(wxColour(255, 0, 0), poly.GetColor());
 ASSERT_NE(wxColor(0, 255, 0), poly.GetColor());
}